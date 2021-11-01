cmake_minimum_required(VERSION 3.16)
project(Program-3-Diogo-Kellen)

set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_CXX_STANDARD 14)

#set(Boost_USE_STATIC_LIBS OFF)
##set(Boost_USE_MULTITHREADED ON)
##set(Boost_USE_STATIC_RUNTIME OFF)
##find_package(Boost 1.45.0 COMPONENTS *boost libraries here*)
##
##if(Boost_FOUND)
##    include_directories(${Boost_INCLUDE_DIRS})
##    add_executable(progname file1.cxx file2.cxx)
##    target_link_libraries(progname ${Boost_LIBRARIES})
##endif()

#configure_file("src/Performances.csv" Performances.csv)

add_executable(Program-3-Diogo-Kellen src/main.cpp)
add_executable(Tests Tests/Testing.cpp)