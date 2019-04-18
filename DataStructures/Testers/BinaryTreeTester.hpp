//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 4/18/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/binaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};

#endif /* BinaryTreeTester_hpp */
