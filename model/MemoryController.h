
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
    void addDNA(IDNAp);
    IDNAp getDNA(DNAIdentifier);

private:
    ActiveDNACache m_activeDNA;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H
