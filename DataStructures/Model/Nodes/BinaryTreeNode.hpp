//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
    
public:
    BinaryTreeNode();
    BinaryTreenode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightChild(BinaryTreeNode<Type> * right);
    void setLeftChild(BinaryTreeNode<Type> * left);
    
    BinaryTree<Type> * getRootNode();
    BinaryTree<Type> *getLeftChild();
    BinaryTree<Type> * getRightChild();
};


#endif /* BinaryTreeNode_h */
