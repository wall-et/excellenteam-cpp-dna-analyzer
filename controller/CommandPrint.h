//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
#include "Command.h"
#include <cstdlib>

class CommandPrint : public Command
{
public:
//    PrintCommand();
    ~CommandPrint();
    void run(int argc, char** argv,MemoryController&);
    static Command * create();
private:
//    inline DNAIdentifier createDNAId(int argc, char** argv);
//    inline IDNAp getDNAFromMemory(DNAIdentifier, MemoryController&);
    void printDNASequence(IDNAp);
};

//
//IDNAp CommandPrint::getDNAFromMemory(DNAIdentifier ids, MemoryController& mem)
//{
//    return mem.getDNA(ids);
//}


inline void CommandPrint::printDNASequence(IDNAp dna)
{
    //TODO:print long dnas different
    size_t size = dna->getDNALength();
    std::cout << "[" << dna->getId() << "] " << dna->getName() << ": ";
    for(size_t i = 0; i<size; ++i)
    {
        std::cout << (*dna)[i];
    }
    std::cout << std::endl;
}


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_PRINTCOMMAND_H
