//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "CommandNew.h"
#include "DNASequence.h"


CommandNew::~CommandNew()
{
    std::cout << "new command dtor" << std::endl;
}

void CommandNew::run(int argc, char** argv,MemoryController& mem)
{
    DNAIdentifier ids = createDNAId(argc,argv);

    //TODO:???? maybe validate argv[1]????

    IDNAp newdnap(new DNASequence(ids.name,argv[1]));
    mem.addDNAToCache(newdnap);
}

Command * CommandNew::create()
{
    return new CommandNew();
}
