//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H

#include <iostream>
#include "../model/DNAReader.h"
#include "IDNA.h"
#include "Command.h"

class CommandLoad : public Command
{
public:
    ~CommandLoad();
    void run(int argc, char** argv, MemoryController&);
private:
};


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_LOAD_COMMAND_H
