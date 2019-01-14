//
// Created by alian on 12/28/18.
//

#include "DNAReader.h"
//#include "DnaSequence.h"

std::string DNAReader::readFile(std::string fileName)
{
    if (!fileExist(fileName.c_str()))
    {
        throw std::invalid_argument("File Does Not Exist.");
    }

    std::filebuf fb;

    fb.open(fileName.c_str(), std::ios::in);

    std::istream is(&fb);

    std::string seq((std::istreambuf_iterator<char>(is)),
                    std::istreambuf_iterator<char>());
    fb.close();

    return  seq;
}

bool DNAReader::fileExist(const char * fileName)
{

    std::ifstream infile(fileName);
    return infile.good();
}
