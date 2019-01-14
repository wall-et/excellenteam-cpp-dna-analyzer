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

//void save::setIdentifier( char ** argv )
//{
//    identifier = argv[minNumOfElements];
//}
//
//void save::setFileName( int argc, char ** argv )
//{
//    //TODO - SWITCH/CASE
//    if(argc == 2)
//        fileName = argv[maxNumOfElements];
//    else
//        fileName = dnaToSave->getNameSeq() + ".rawdna";
//}
//
//void save::saveSeqToFile()
//{
//    DnaWriter dnaWriter( fileName, dnaToSave );
//    dnaWriter.write();
//}
//

void CommandSave::run(int argc, char** argv, MemoryController& mem)
{

    //TODO:parse name acording to file name if given
    DNAIdentifier ids;
    ids.name = createDNAIdName(argc,argv,-1);
    ids.id = createDNAIdNumber(argc,argv,-1);

    IDNAp dnap = mem.getDNAFromCache(ids);
    mem.saveDNAToFile(dnap);
}