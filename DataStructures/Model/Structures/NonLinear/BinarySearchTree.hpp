//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;
template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //mark: protected methods
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculatedHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrdertraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postorderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    //Public methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postorderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
    
};


template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: postorderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getdata())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exists already - exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinaryTreeNode<Type> * current = this->root;
    if (current == nullptr)
    {
        return false;
        
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getData())
            {
                return true;
            }
            else if (itemToFind < current->getData())
            {
                current = current->getLeftNode();
            }
            
            else
            {
                
                current =  current->getRightNode();
            }
        }
        return false;
    }
}






template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}



//MARK: - Recursived Traversal Implementation
/*
 in order traversal goes from left, root, right
 notice that the non-recursive case does nothing
 */
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftChild());
        cout << currentNode->getData() << endl;
        inOrderTraversal(curretNode->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}

/*
 Pre order traversal goes in order root left right
 great for math problems
 */
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarytreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getData() << endl;
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}

//post order

template <class type>
void BinarySearchTree<type> :: postOrderTraversal()
{
    postOrdertraversal(this->root);
}

/* post order trav goes left right root, great for destroying the tree
 */


template <class type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getData() << endl;
    }
}




template <class Type>
void BinarySearchTree<Type> :: remove (Type getRidOfMe)
{
    
    if(this->root == nullptr)
    {
        cout <<" Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        
        BinaryTreeNode<Type> * previous = nullptr;
        
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe < current->getData())
                {
                    current = current->getLeftNode();
                }
                else
                {
                    current = current->getRightNode();
                }
            }
        }
        
        
        
        
        
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == this->root)
            {
                removeNode(this->root);
            }
            else if(getRidOfMe < previous->getData())
            {
                removeNode(previous->getLeftNode());
            }
            else
            {
                removeNode(previous->getRightNode());
            }
        }
        
        
        
        
        template <class Type>
        void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
        {
            BinaryTreeNode<Type> * current;
            BinaryTreeNode<Type> * previous;
            BinaryTreeNode<Type> * temp;
            
            previous = removeMe->getRootNode();
            
            //Node is a leaf - has no kids
            if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() == nullptr)
            {
                temp = removeMe;
                removeMe = nullptr;
                
                if(previous != nullptr && removeMe->getData() < previous->getData())
                {
                    previous->setRightNode(removeMe);
                }
                else if(previous != nullptr && removeMe->getData() > previous->getData())
                {
                    previous->setRightNode(removeMe);
                }
                
                delete temp;
            }
            
            
            
            //Node has only a left child
            else if(removeMe->getRightNode() == nullptr)
            {
                temp = removeMe;
                removeMe = removeMe->getLeftNode();
                
                if(previous != nullptr && temp->getData() < previous->getData())
                {
                    previous->setLeftNode(removeMe);
                }
                else if(previous != nullptr && temp->getData() > previous->getData())
                {
                    previous->setRightNode(removeMe);
                }
                removeMe->setRootNode(previous);
                delete temp;
            }
            
            //Node has only right child
            else if(removeMe->getLeftNode() == nullptr)
            {
                temp = removeMe;
                removeMe = removeMe->getRightNode();
                
                if(previous != nullptr && temp->getData() < previous->getData())
                {
                    previous->setLeftNode(removeMe);
                }
                else if(previous != nullptr && temp->getData() > previous->getData())
                {
                    previous->setRightNode(removeMe);
                }
                removeMe->setRootNode(previous);
                delete temp;
            }
            
            //Node has both children
            else
            {
                current = getRightMostCHild(removeMe->getLeftNode());
                previous = current->getRootNode();
                removeMe->setData(current->getData());
                
                if(previous == nullptr)//removing from root
                {
                    removeMe->setLeftNode(current->getLeftNode());
                }
                else
                {
                    previous->setRightNode(current->getLeftNode());
                }
                if(current->getLeftNode() != nullptr)
                {
                    current->getLeftNode()->setRootNode(removeMe);
                }
                delete current;
            }
            
            
            if(removeme == nullptr || removeMe->getRootNode() == nullptr)
            {
                this->root = removeMe;
            }
            
        }
        
        
        
    }
}


#endif /* BinarySearchTree_h */
