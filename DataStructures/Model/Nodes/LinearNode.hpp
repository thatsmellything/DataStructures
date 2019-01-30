//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 1/30/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef LinearNode_h
#define LinearNode_h

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Typedata, LinearNode<Type> * next);
    LinearNode<Type> * getNext();
    void setNext(LinearNode<Type> * next);
};

//Implementation of templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{}

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
LinearNode<Type> * LinearNode<Type> :: getNext()
{
    return this->next;
}

template <class Type>
void LinearNode<Type> :: setNext(LinearNode<Type> * next)
{
    this->next = next;
}
#endif /* LinearNode_h */
