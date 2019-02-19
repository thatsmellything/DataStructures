//
//  Controller.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 1/30/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
};

#endif /* Controller_hpp */
