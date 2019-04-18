//
//  Tree.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef Tree_h
#define Tree_h
#include "/Users/jjud0535/Documents/C++/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Informational methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Methods
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual remove(Type data) = 0;
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrdertraversal() = 0;
};
//informational method stubs
template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}


#endif /* Tree_h */
