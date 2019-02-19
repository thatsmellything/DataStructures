//
//  LinearTester.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller//Tools/FileController.hpp"

#include "../Model/Structures/Linear/LinkedList.hpp"
#inlcude "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structure/Linear/Array.hpp"

#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
}

#endif /* LinearTester_hpp */
