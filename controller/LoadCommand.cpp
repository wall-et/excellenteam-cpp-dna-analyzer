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

void LoadCommand::run(int argc, char ** argv, memoryCtrl & memctrl)
{
    if (! m_DNAReader.fileIsExist(argv[1]))
    {
        std::cout << "The file does not exist" << std::endl;
        return;
    }

    std::string seqFromFile = m_DNAReader.readFile(argv[1]);


    DNAIdentifier ids = createDNAId(argc,argv);

//    if ( argc == 2 )
//    {
//        char * keyName = argv[2];
//
//        if ( memctrl.nameIsExist( keyName ) )
//        {
//
//            createSeq(seqFromFile.c_str(), keyName, memctrl);
//        }
//
//        else
//            createSeqWithDefName( seqFromFile.c_str(), memctrl );
//    }
//
//    else if ( argc == 1 )
//
//        createSeqWithDefName( seqFromFile.c_str(), memctrl );
//
//    else
//
//        std::cout << "Wrong number of argument" << std::endl;

}