//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H

#include "Command.h"

class CommandNew : public Command
{
public:
//    NewCommand(MemoryController&);
    ~CommandNew();
    void run(int argc, char** argv, MemoryController&);
    static Command * create();
private:
    DNAIdentifier createDNAId(int argc, char** argv);
};


inline DNAIdentifier CommandNew::createDNAId(int argc, char** argv)
{
    DNAIdentifier ids;
    ids.id = 0;
    if(argc > 2)
    {
        ids.name = createDNAIdName(argc,argv);
    }
    else
    {
        ids.name = "";
    }
    return ids;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
