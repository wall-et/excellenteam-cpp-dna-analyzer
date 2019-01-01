//
// Created by alian on 12/28/18.
//
#include <iostream>
#include "PrintCommand.h"
#include "DNASequence.h"


PrintCommand::~PrintCommand()
{
    std::cout << "PrintCommand dtor" << std::endl;
}

void PrintCommand::run(int argc, char** argv,MemoryController& mem)
{
//    IDNAp newdnap(new DNASequence(argv[1]));
//    std::cout << "new command running" << std::endl;
//    mem.addDNA(1,argv[2],newdnap);
////    return newdnap;
}