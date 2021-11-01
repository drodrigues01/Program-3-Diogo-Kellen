// https://www.boost.org/doc/libs/1_37_0/libs/graph/doc/adjacency_list.html

#include <boost/version.hpp>
#include <iostream>
#include "boost/graph/adjacency_list.hpp"
#include "boost/graph/adj_list_serialize.hpp"
using namespace std;
using namespace boost;

int main(){
    //Testing if Boost is installed
    std::cout << "Using Boost "
    << BOOST_VERSION / 100000     << "."  // major version
    << BOOST_VERSION / 100 % 1000 << "."  // minor version
    << BOOST_VERSION % 100                // patch level
    << std::endl;

    typedef adjacency_list<listS, vecS, directedS,
    no_property, property<edge_weight_t, int> > Graph;
    typedef graph_traits<Graph>::vertex_descriptor Vertex;
    typedef std::pair<int,int> E;

    const int num_nodes = 5;
    E edges[] = { E(0,2),
                  E(1,1), E(1,3), E(1,4),
                  E(2,1), E(2,3),
                  E(3,4),
                  E(4,0), E(4,1) };
    int weights[] = { 1, 2, 1, 2, 7, 3, 1, 1, 1};

    Graph G(edges, edges + sizeof(edges) / sizeof(E), weights, num_nodes);



    return 0;
}