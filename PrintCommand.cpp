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
    DNAIdentifier ids = {argv[2], static_cast<size_t>(atoi(argv[1]))};
    IDNAp dnap = mem.getDNA(ids);
    size_t size = dnap->getDNALength();
    std::cout << dnap->getId() << ", " << dnap->getName() << ":  ";
    for(size_t i = 0; i<size; ++i)
    {
        std::cout << (*dnap)[i];
    }
    std::cout << std::endl;
}