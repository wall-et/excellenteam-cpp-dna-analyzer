//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "NewCommand.h"
#include "DNASequence.h"


NewCommand::~NewCommand()
{
    std::cout << "new command dtor" << std::endl;
}

void NewCommand::run(int argc, char** argv,MemoryController& mem)
{
    IDNAp newdnap(new DNASequence(argv[1]));
    std::cout << "new command running" << std::endl;
    mem.addDNA(1,argv[2],newdnap);
//    return newdnap;
}
