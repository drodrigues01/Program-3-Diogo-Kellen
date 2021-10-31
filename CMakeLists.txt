cmake_minimum_required(VERSION 3.16)
project(Program-3-Diogo-Kellen)

set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_CXX_STANDARD 14)


#configure_file("src/Performances.csv" Performances.csv)

add_executable(Program-3-Diogo-Kellen src/main.cpp)
add_executable(Tests Tests/Testing.cpp)