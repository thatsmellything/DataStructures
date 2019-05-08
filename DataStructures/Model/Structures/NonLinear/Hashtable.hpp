//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/13/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

int size = 101;

int position = simpleHash(word) % size;

long simpleHash(string word)
{
    long hash = 0;
    for (int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash
}long simpleHash(string word)
{
    long hash = 0;
    for (int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash
}#endif /* Hashtable_h */
