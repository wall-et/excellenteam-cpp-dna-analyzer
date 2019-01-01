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
//
//IDNAp ActiveDNACache::getDNA(DNAIdentifier ids)
//{
//    try
//    {
////        if(ids.name != NULL)
////        {
////            return getDNAByName(ids.name);
////        }
////        if(ids.id != NULL)
////        {
////            return getDNAById(ids.id);
////        }
//    }
//    catch(...)
//    {
//
//
//    }
//}
