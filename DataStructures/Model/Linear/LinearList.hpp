//
//  LinearList.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/7/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef LinearList_h
#define LinearList_h

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();
    //Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

#endif /* LinearList_h */
