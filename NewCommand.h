//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H

#include "ICommand.h"

class NewCommand : public ICommand
{
public:
//    NewCommand(MemoryController&);
    ~NewCommand();
    void run(int argc, char** argv,MemoryController&);

private:

};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H