//
// Created by alian on 1/12/19.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "ICommand.h"

class Command : public ICommand
{
public:
//    Command();
    virtual ~Command(){};
    virtual void run(int argc, char** argv,MemoryController&) = 0;
protected:
    size_t createDNAIdNumber(int argunebtCount, char** argv, int locationFromEnd = -1) const;
    std::string createDNAIdName(int argunebtCount, char** argv, int locationFromEnd = -1) const;
private:
};


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMAND_H
