#include <boost/version.hpp>
#include <iostream>
#include "boost/graph/adjacency_list.hpp"
using namespace std;

int main(){
    //Testing if Boost is installed
    std::cout << "Using Boost "
    << BOOST_VERSION / 100000     << "."  // major version
    << BOOST_VERSION / 100 % 1000 << "."  // minor version
    << BOOST_VERSION % 100                // patch level
    << std::endl;

    typedef adjacency_list, vecS> Graph;

}