//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template<class Type>
class AVLTree : public BinarySeachTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    
   
}

template <class tye>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if (parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        
        if (this->getRoot() == nullptr)
        {
        this->setRoot(parent);
        }
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftNode(), inserted));
        parent = balancedSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightNode(), inserted));
        parent = balanceSubtree(parent);
    }
    remove parent;
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, type inserted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(removeNode(parent->getLeftChild(), inserted));
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(removeNode(parent->getRightChild(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightChild() == nullptr)
        {
            *parent = *parent->getleftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightChild());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightChild(), inserted));
        }
    }
    
    
    if(parent == nullptr)
    {
        return parent;
    }
    
    return balanceSubTree(parent);
}

    
    
    
    
    



#endif /* AVLTree_h */
