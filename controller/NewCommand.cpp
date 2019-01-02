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
    DNAIdentifier ids = createDNAId(argc,argv);
    IDNAp newdnap(new DNASequence(ids.name,argv[1]));
    mem.addDNA(newdnap);
//    ICommand* pC = new PrintCommand();
//    pC->run(m_args->argc,m_args->argv,mem);
}

