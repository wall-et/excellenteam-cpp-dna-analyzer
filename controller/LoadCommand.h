//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H

#include <iostream>
#include "../model/DNAReader.h"
#include "IDNA.h"
#include "ICommand.h"

class LoadCommand : public ICommand
{
public:
    ~LoadCommand();
    void run(int argc, char** argv, MemoryController&);

private:
    DNAReader           m_DNAReader;
};


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H
