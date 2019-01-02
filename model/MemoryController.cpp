//
// Created by alian on 12/29/18.
//

#include "MemoryController.h"


void MemoryController::addDNA(IDNAp seq)
{
//    DNAIdentifier ids = {name,idNumber};
    m_activeDNA.addDNA(seq);
//    return IDNAp;
}

IDNAp MemoryController::getDNA(DNAIdentifier ids)
{
    return m_activeDNA.getDNA(ids);
}