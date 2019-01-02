//
// Created by alian on 12/28/18.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include "PrintCommand.h"
#include "DNASequence.h"


PrintCommand::~PrintCommand()
{
    std::cout << "PrintCommand dtor" << std::endl;
}

void PrintCommand::run(int argc, char** argv,MemoryController& mem)
{
    DNAIdentifier ids = createDNAId(argc,argv);
    IDNAp dnap = getDNAFromMemory(ids,mem);
    printDNASequence(dnap);
}