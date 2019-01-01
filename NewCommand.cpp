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
//    std::cout << argc << std::endl;
//    char * name;// = argv[2];
//    if (argc > 3)
//        name = argv[2];
//    else
//        name = NULL;
//    std::cout << "1" <<std::endl;
    IDNAp newdnap(new DNASequence(argv[2],argv[1]));
//    std::cout << "2" <<std::endl;
//    std::cout << "new command running" << std::endl;
    mem.addDNA(1,argv[2],newdnap);
//    return newdnap;
}
