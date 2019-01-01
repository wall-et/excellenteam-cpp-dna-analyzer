//
// Created by alian on 12/29/18.
//

#include "MemoryController.h"


void MemoryController::addDNA(DNAIdentifier ids, IDNAp seq)
{
//    DNAIdentifier ids = {name,idNumber};
    m_activeDNA.addDNA(ids,seq);
}

IDNAp MemoryController::getDNA(DNAIdentifier ids) const
{
    return m_activeDNA.getDNA(ids);
}