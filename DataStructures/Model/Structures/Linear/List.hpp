//
//  List.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/7/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"
#include <assert.h>
#include <iostream>

template <class Type>
class List
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int indes, Type item) =0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};



#endif /* List_h */
