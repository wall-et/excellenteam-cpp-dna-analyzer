//
// Created by alian on 12/28/18.
//

#include "CommandLoad.h"

CommandLoad::~CommandLoad()
{
    std::cout << "LoadCommand dtor" << std::endl;
}

void CommandLoad::run(int argc, char ** argv, MemoryController & mem)
{
    //TODO:parse file name acording to dna name if given
    DNAIdentifier ids;
    ids.name = createDNAIdName(argc,argv);
    ids.id = 0;

    if(argc < 1)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    std::cout << argv[1] << std::endl;
    mem.loadDNAFromFile(argv[1],ids);
}