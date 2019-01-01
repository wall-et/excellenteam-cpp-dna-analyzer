//
// Created by alian on 12/28/18.
//

#include "ActiveDNACache.h"
#include <iostream>

void ActiveDNACache::addDNA(DNAIdentifier ids,IDNAp seq)
{
    addDNAById(seq);
    addDNAByName(ids.name,seq);
}

IDNAp ActiveDNACache::getDNA(DNAIdentifier ids) const
{
        if (ids.id)
        {
            return getDNAById(ids.id);
        }
        std::cout << ids.name << std::endl;
        return getDNAByName(ids.name);
}
