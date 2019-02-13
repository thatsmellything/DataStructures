//
//  FileController.cpp
//  DataStructures
//
//  Created by Judkins, Jensen on 2/11/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCVSLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if this file exists at that path
    if (dataFile.is_open())
    {
        //keep reading wutil you are at the end of the file
        while (!dataFile.eof())
        {
            //Grab each line from the CVS separated by the carriage return character.
            getline(dataFile, currentCVSLine, '\r');
            //exclude header row
            if (rowCount != 0)
            {
                
                if (currentCVSLine.length() != 0)
                {
                    CrimeData row(currentCVSLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}




vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCVSLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path
    if (dataFile.is_open())
    {
        //keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline (dataFile, currentCVSLine,'\r'); //maybe use n?
            
            //Exclude header row
            if (rowCount != 0)
            {
                //create a CrimeData instance from the line. exclude a blank line (usually if opened separately)
                if (currentCVSLine.length()  != 0)
                {
                    Music row(currentCVSLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
        
    }
    else{
        cerr << "NO FILE" << endl;
    }
    return musicVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If file exists at path
    if (dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getLine(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
            {
                if(currentCSVLine.lenght() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}


LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If file exists at path
    if (dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getLine(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
            {
                if(currentCSVLine.lenght() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}
