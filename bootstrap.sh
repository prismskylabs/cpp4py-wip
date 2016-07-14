#!/usr/bin/env bash


# add repository for g++-5
sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test

# add repository for git 2.7.2
sudo add-apt-repository ppa:git-core/ppa

# add repository for cmake 3.2.2
sudo add-apt-repository -y ppa:george-edison55/cmake-3.x

# update apt
sudo apt-get update -y

# install compilers
sudo apt-get install -y g++-5

# install additional tools
sudo apt-get install -y cmake

# install git
sudo apt-get install -y git

# set up symlink to gcc and clang toolchains
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 20
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 20

# flex our new powers
cmake --version
g++ --version
git --version
