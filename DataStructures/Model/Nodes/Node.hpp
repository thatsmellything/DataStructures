//
//  Node.hpp
//  Node
//
//  Created by Judkins, Jensen on 1/30/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#include <assert.h>

template <class Type>
class Node
{
private:
    Type data;
public:
    Node();
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//Template Definitions

template <class Type>
Node<Type> :: Node()
{}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}


#endif /* Node_h */
