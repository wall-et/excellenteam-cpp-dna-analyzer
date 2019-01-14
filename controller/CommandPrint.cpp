//
// Created by alian on 12/28/18.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include "CommandPrint.h"
#include "DNASequence.h"


CommandPrint::~CommandPrint()
{
    std::cout << "PrintCommand dtor" << std::endl;
}

void CommandPrint::run(int argc, char** argv,MemoryController& mem)
{
//    DNAIdentifier ids = createDNAId(argc,argv);
    DNAIdentifier ids;
    ids.name = createDNAIdName(argc,argv);
    ids.id = createDNAIdNumber(argc,argv);

    IDNAp dnap = mem.getDNAFromCache(ids);

    printDNASequence(dnap);
}