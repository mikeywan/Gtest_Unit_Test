# Gtest_Unit_Test
1.	Dev environment preparation
    
    $ sudo apt-get install libgtest-dev
    
    $ sudo apt-get install cmake
    
    $ cd /usr/src/gtest
    
    $ sudo cmake CMakeLists.txt
    
    $ sudo make
    
    $ sudo cp *.a /usr/lib

2.	Compile
    
    $ cd Gtest_Unit_Test
    
    $ cmake CMakeLists.txt
    
    $ make

3.	Execute testing
    
    $ ./runTests
