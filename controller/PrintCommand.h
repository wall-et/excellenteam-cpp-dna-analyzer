//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#include "ICommand.h"
#include <cstdlib>

class PrintCommand : public ICommand
{
public:
//    PrintCommand();
    ~PrintCommand();
    void run(int argc, char** argv,MemoryController&);

private:
    inline DNAIdentifier createDNAId(int argc, char** argv);
    inline IDNAp getDNAFromMemory(DNAIdentifier, MemoryController&);
    inline void printDNASequence(IDNAp);
};


IDNAp PrintCommand::getDNAFromMemory(DNAIdentifier ids, MemoryController& mem)
{
    return mem.getDNA(ids);
}


void PrintCommand::printDNASequence(IDNAp dna)
{
    size_t size = dna->getDNALength();
    std::cout << "[" << dna->getId() << "] " << dna->getName() << ": ";
    for(size_t i = 0; i<size; ++i)
    {
        std::cout << (*dna)[i];
    }
    std::cout << std::endl;
}


DNAIdentifier PrintCommand::createDNAId(int argc, char** argv)
{
    if(argc < 2)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    DNAIdentifier ids = {"",0};
    if(argv[argc-1][0] == '@')
    {
        ids.name = argv[argc-1][1];
        return ids;
    }
    if(argv[argc-1][0] == '#')
    {
        ids.id = (argv[argc-1][1] - '0');
        return ids;
    }

    throw std::invalid_argument("Wrong parameters to command. You can specify a name using @ or Id using #.");
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
