//
// Created by alian on 12/29/18.
//

#include "MemoryController.h"


void MemoryController::addDNA(size_t idNumber,char* name, IDNAp seq)
{
    DNAIdentifier ids = {name,idNumber};
    m_activeDNA.addDNA(ids,seq);
}
