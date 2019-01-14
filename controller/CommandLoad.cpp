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
    if(argc < 1)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    std::string name = "";
    if(argc > 2)
    {
        name = createDNAIdName(argc,argv);//-1
    }
    mem.loadDNAFromFile(argv[1],name);
}

Command * CommandLoad::create()
{
    return new CommandLoad();
}