//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAWRITER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAWRITER_H

#include <string>
#include <iostream>
#include <fstream>
#include "../controller/IDNA.h"
#include "../lib/SharedPtr.h"

typedef SharedPtr<IDNA> IDNAp;

class DNAWriter
{
public:

    DNAWriter(std::string, IDNAp);
    void writeFile();

private:
    IDNAp                   m_dna;
    std::ofstream           m_writer;
    std::string             m_fileName;

};



#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAWRITER_H
