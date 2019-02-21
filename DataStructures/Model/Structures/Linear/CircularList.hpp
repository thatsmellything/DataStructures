//
//  CircularList.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    DoubleNode<type> * findNode(int index);
    
    
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};



#endif /* CircularList_h */
