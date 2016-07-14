# Work in progress

Set up your vagrant machine:

```
vagrant up
vagrant ssh
```

Once inside the machine, to build, run:

```
cd wip [ If files are not mounted, follow the steps in the Fallback Installation ]
mkdir build
cd build
cmake ..
make
```

and to run, from the build directory:

```
bin/example
```


## Fallback Installation

Run

```
brew install cmake
```

Make sure version is > 3.2.x.
In the root dir, run:


```
mkdir build
cd build
cmake ..
make
```

and to run, from the build directory:

```
bin/example
```