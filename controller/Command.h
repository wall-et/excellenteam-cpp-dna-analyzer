//
// Created by alian on 1/12/19.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H

#include "ICommand.h"

class Command : public ICommand
{
public:
//    Command();
    virtual ~Command(){};
    virtual void run(int argc, char** argv,) = 0;
protected:
    DNAIdentifier createDNAId(int argc, char** argv)
private:
//    MemoryController&
};


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H
