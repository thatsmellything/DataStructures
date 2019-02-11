//
//  Controller.cpp
//  DataStructures
//
//  Created by Judkins, Jensen on 1/30/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App."<< endl;
    usingNodes();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("Words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replace text");
    cout << wordHolder.getData() << endl;
    
}
