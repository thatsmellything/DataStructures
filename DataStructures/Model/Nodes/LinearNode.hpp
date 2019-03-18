//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 1/30/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp
#include <iostream>
#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    void setNextNode(LinearNode<Type> * next);
};

//implementation
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return this->next;
}

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * next)
{
    this->next = next;
}

#endif
