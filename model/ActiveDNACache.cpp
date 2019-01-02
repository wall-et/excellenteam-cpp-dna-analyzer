//
// Created by alian on 12/28/18.
//

#include "ActiveDNACache.h"
#include <iostream>

void ActiveDNACache::addDNA(IDNAp seq)
{
    addDNAById(seq);
    addDNAByName(seq);
}

IDNAp ActiveDNACache::getDNA(DNAIdentifier ids)
{
        if (ids.id)
        {
            return getDNAById(ids.id);
        }
        return getDNAByName(ids.name);
}
