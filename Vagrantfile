Vagrant.configure(2) do |config|
  config.vm.box = "ubuntu/trusty64"
  config.vm.define "wip", primary: true

  config.vm.define "wip" do |wip|
    wip.vm.hostname = "wip"
    wip.vm.network "private_network", type: "dhcp"
    wip.vm.synced_folder ".", "/home/vagrant/wip", nfs: true
    wip.vm.provision "shell", path: "bootstrap.sh", privileged: false
    wip.vm.provider "virtualbox" do |vb|
      vb.memory = 4096
      vb.cpus = 4
      vb.customize [ "guestproperty", "set", :id, "/VirtualBox/GuestAdd/VBoxService/--timesync-set-threshold", 1000 ]
    end
  end
end
