//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#include "ICommand.h"

class PrintCommand : public ICommand
{
public:
//    PrintCommand(MemoryController&);
    ~PrintCommand();
    void run(int argc, char** argv,MemoryController&);

private:
//    inline IDNAp get
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
