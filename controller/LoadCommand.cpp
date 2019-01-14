//
// Created by alian on 12/28/18.
//

#include "LoadCommand.h"

LoadCommand::~LoadCommand()
{
    std::cout << "LoadCommand dtor" << std::endl;
}

//void createSeqWithDefName( const char* seq, memoryCtrl & memctrl)
//{
//    IDNAp newDna(new DnaSequence (seq, ""));
//    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
//    std::cout << "def name" << std::endl;
//}

//void createSeq( const char* seq, char* keyName, memoryCtrl & memctrl)
//{
//
//    IDNAp newDna(new DnaSequence (seq, keyName));
//    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
//    std::cout << "name is ---- " << keyName << std::endl;
//
//}

void LoadCommand::run(int argc, char ** argv, MemoryController & mem)
{
    DNAIdentifier ids;
    ids.name = createDNAIdName(argc,argv);
    ids.id = createDNAIdNumber(argc,argv);

    if(argc < 1)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    //TODO:validate that it's int

    if (! m_DNAReader.fileExist(argv[1]))
    {
        throw std::invalid_argument("File Does Not Exist.");
    }

    std::string seqFromFile = m_DNAReader.readFile(argv[1]);

    IDNAp newdnap(new DNASequence(ids.name,seqFromFile.c_str()));
    mem.addDNA(newdnap);

}