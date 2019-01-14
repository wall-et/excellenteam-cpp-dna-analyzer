//
// Created by alian on 12/28/18.
//

#include "CommandSave.h"

//
//save::save()
//{
//    minNumOfElements = 1;
//    maxNumOfElements = 2;
//}

CommandSave::~CommandSave()
{
    std::cout<<"CommandSave dtor" << std::endl;
}

void CommandSave::run(int argc, char** argv, MemoryController& mem)
{
    //TODO:parse name acording to file name if given
    std::string fileName = "";
    int location = -1;
    if(argc > 2)
    {
        fileName = argv[argc-1];
        location = -2;
    }
    DNAIdentifier ids;
    ids.name = createDNAIdName(argc,argv,location);
    ids.id = createDNAIdNumber(argc,argv,location);

    IDNAp dnap = mem.getDNAFromCache(ids);
    mem.saveDNAToFile(fileName,dnap);
}

Command * CommandSave::create()
{
    return new CommandSave();
}