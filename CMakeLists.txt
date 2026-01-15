cmake_minimum_required(VERSION 3.10)
project(CppPracticePrograms)

set(CMAKE_CXX_STANDARD 11)

# Add each folder as executable
add_executable(Frequency 1D_Array_Frequency/main.cpp)
add_executable(MatrixMultiplication 2D_Array_MatrixMultiplication/main.cpp)
add_executable(Palindrome String_Palindrome/main.cpp)
add_executable(SumOfDigits Recursion_SumOfDigits/main.cpp)
add_executable(SwapNumbers Function_SwapNumbers/main.cpp)
add_executable(StudentAverage Structure_StudentAverage/main.cpp)
add_executable(PointerStructure PointerToStructure_Point/main.cpp)
add_executable(PointerFunction PointerToFunction_Calculator/main.cpp)
add_executable(Diamond Pattern_Diamond/main.cpp)
add_executable(MatrixTranspose Unique_MatrixTranspose/main.cpp)
