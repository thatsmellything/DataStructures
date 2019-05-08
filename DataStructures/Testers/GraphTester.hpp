//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 3/18/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Model/Structures/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
    };
    


    

#endif /* GraphTester_hpp */
