//
// Created by alian on 12/28/18.
//

#include "ActiveDNACache.h"
#include <iostream>

void ActiveDNACache::addDNA(DNAIdentifier ids,IDNAp seq)
{
//    m_DNAContainer.insert(std::pair<DNAIdentifier,IDNAp>(ids,seq));
//    m_DNAContainer.insert({ids,seq});
    addDNAById(ids,seq);
    addDNAByName(ids,seq);
//    std::cout << seq << std::endl;
}
