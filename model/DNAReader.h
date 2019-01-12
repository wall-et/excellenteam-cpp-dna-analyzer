//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAREADER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAREADER_H
//class DNAReader {
//public:
//    DNAReader();
//    DnaSequence read(const std::string);
//private:
//    std::string m_filename;
//};


#include <iostream>
#include <fstream>

class DNAReader
{
public:
    std::string readFile(std::string fileName);
    bool fileExist(const char * fileName);
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAREADER_H
