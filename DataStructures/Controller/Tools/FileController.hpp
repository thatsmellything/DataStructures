//
//  FileController.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/11/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp




#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

#include "../Model/Structures/Linear/Array.hpp"
#include "../Model/Structures/Linear/LinkedList.hpp"
//#inlcude "../Model/Structures/NonLinear/BinarySearchTree.hpp"

#include "../../Resources/Music.hpp"
#include "../../Resources/CrimeData.hpp"



using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    
    
    static vector<Music> musicDataToVector(string filename);
    static Array<Music> musicDataToVector(string filename);
    static LinkedList<Music> musicDataToVector(string filename);
};


#endif /* FileController_hpp */
