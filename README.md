# Work in progress

Set up your vagrant machine:

```
vagrant up
vagrant ssh
```

Once inside the machine, to build, run:

```
cd wip
mkdir build
cd build
cmake ..
make
```

and to run, from the build directory:

```
bin/example
```
