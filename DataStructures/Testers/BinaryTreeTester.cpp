//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Judkins, Jensen on 4/18/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(1);
    testTree.insert(123874);
    testTree.insert(172384);
    testTree.insert(11203);
    testTree.insert(1928);
    testTree.insert(12093482307);
    testTree.insert(123121);
    testTree.insert(2134156);
    testTree.insert(34451);
    testTree.insert(132453245);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
}
