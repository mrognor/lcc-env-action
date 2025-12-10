# lcc-env-action
A simple action for building and testing code for e2k.

## Requirements
This action requires ubuntu. This action installs packages using apt-get, 
so the container in which it is run must support this package manager. 
It is recommended to use *Ubuntu*.

## Environment description
1. Action will save the cross compiler to the */opt/mcst* directory. 
2. The binary file of the *qemu-e2k* emulator will also be added to */usr/local/bin*. 
3. Additionally, an *e2k* script will be added to */usr/local/bin* to run *qemu-e2k* with the necessary parameters. 
4. Finally, symbolic links *lcc* and *l++* will be added to */usr/local/bin*, 
which will point to */opt/mcst/**crosscompiler-dir**/bin/lcc* and */opt/mcst/**crosscompiler-dir**/bin/l++*.

After that, you can compile the code using the lcc and l++ commands, and then run it using the e2k command.

## Examples
### Single file
```yml
  build:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v4

    - name: lcc env
      uses: mrognor/lcc-env-action@0.1.1

    - name: Build e2k code
      run: l++ main.cpp
    
    - name: Run tests
      run: e2k a.out
```

### Makefile
```yml
  build:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v4

    - name: lcc env
      uses: mrognor/lcc-env-action@0.1.1

    - name: Build e2k code
      run: |
        export CC=lcc
        export CXX=l++
        make
    
    - name: Run tests
      run: e2k main
```
