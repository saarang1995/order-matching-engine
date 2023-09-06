#!/bin/bash
# change dir to root
cd ../
# create build directory if not existing
mkdir build

# Build project
cd build
cmake ../src

# create executable
make

# run executable
./main