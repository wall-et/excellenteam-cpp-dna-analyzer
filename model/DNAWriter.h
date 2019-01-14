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

#ifndef IDNAP
#define IDNAP
#include "../controller/IDNA.h"
typedef SharedPtr<IDNA> IDNAp;
#endif //IDNAP


class DNAWriter
{
public:
    void writeFile(std::string, IDNAp);

private:
    std::ofstream           m_writer;
};



#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNAWRITER_H
