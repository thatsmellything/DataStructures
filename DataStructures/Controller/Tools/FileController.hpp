//
//  FileController.hpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/11/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../../Resources/Music.hpp"
#include "../../Resources/CrimeData.hpp"


#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>




using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
};


#endif /* FileController_hpp */
