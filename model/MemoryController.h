
//
// Created by alian on 12/29/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H

#include "ActiveDNACache.h"
#include "DNAReader.h"
#include "DNAWriter.h"

class MemoryController
{
public:
//    MemoryController();
    void addDNAToCache(IDNAp);
    IDNAp getDNAFromCache(DNAIdentifier);
//    IDNAp loadDNAFromFile(std::string,DNAIdentifier);
    void loadDNAFromFile(std::string,DNAIdentifier);
    void saveDNAToFile(IDNAp);

private:
    ActiveDNACache          m_activeDNA;
    DNAReader               m_DNAReader;
    DNAWriter               m_DNAWriter;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H
