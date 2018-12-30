//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H

#include <iostream>
#include <map>

#include "DNASequence.h"
#include "SharedPtr.h"

#ifndef IDNAP
#define IDNAP
#include "IDNA.h"
typedef SharedPtr<IDNA> IDNAp;
#endif //IDNAP

typedef struct{
    char* name;
    size_t id;
} DNAIdentifier;



class ActiveDNACache
{
public:
//    ActiveDNACache(){};
//    ~ActiveDNACache(){};
    void addDNA(DNAIdentifier,IDNAp);

private:
    inline void addDNAByName(DNAIdentifier,IDNAp);
    inline void addDNAById(DNAIdentifier,IDNAp);

    std::map<char*, IDNAp> m_DNAContainerByName;
    std::map<size_t, IDNAp> m_DNAContainerById;
};

void ActiveDNACache::addDNAByName(DNAIdentifier ids,IDNAp seq)
{
    m_DNAContainerByName.insert(std::pair<char*,IDNAp>(ids.name,seq));
}

void ActiveDNACache::addDNAById(DNAIdentifier ids,IDNAp seq)
{
    m_DNAContainerById.insert(std::pair<size_t,IDNAp>(ids.id,seq));
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
