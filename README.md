I will develop a simple calculator library in C++ that includes several mathematical operations. The project will be structured with multiple files, utilize proper build management, and be tracked using Git version control.


FIXED CONFLICT IN BOTH BRANCHES

This is a simple C++ calculator library that supports basic arithmetic and number operations. It contains:
calculator.h: Function declarations
calculator.cpp: Function definitions
test.cpp: Demo file using the calculator
CMakeLists.txt: CMake build configuration

You can build the project using g++ by writing:

g++ -o test.cpp calculator.cpp trial2.exe
./trial2.exe

or you can build by first creating a CMakeLists.txt file with this inside it:

cmake_minimum_required(VERSION 3.10) 
project(CS2-Calculator)

set(SOURCE_FILES 
    calculator.cpp
    test.cpp
)

add_executable(trial  ${SOURCE_FILES})


then create a build directory:

mkdir build
cd build

then run:

cmake ..
make

./trial2.exe


