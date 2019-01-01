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
    IDNAp getDNA(DNAIdentifier);
private:
    inline void addDNAByName(DNAIdentifier,IDNAp);
    inline void addDNAById(DNAIdentifier,IDNAp);
    inline IDNAp getDNAById(size_t);
    inline IDNAp getDNAByName(char* name);

    std::map<char*, IDNAp> m_DNAContainerByName;
//    std::map<char*, IDNAp>::iterator m_nameFinder;
    std::map<size_t, IDNAp> m_DNAContainerById;
//    std::map<size_t, IDNAp>::iterator m_idFinder;
};

void ActiveDNACache::addDNAByName(DNAIdentifier ids,IDNAp seq)
{
    m_DNAContainerByName.insert(std::pair<char*,IDNAp>(ids.name,seq));
}

void ActiveDNACache::addDNAById(DNAIdentifier ids,IDNAp seq)
{
    m_DNAContainerById.insert(std::pair<size_t,IDNAp>(ids.id,seq));
}

IDNAp ActiveDNACache::getDNAById(size_t id)
{
    std::map<size_t, IDNAp>::iterator idFinder;
    idFinder = m_DNAContainerById.find(id);
    if(idFinder == m_DNAContainerById.end())
    {
        throw std::invalid_argument("Item Not Found");
    }
    return idFinder->second;
}

IDNAp ActiveDNACache::getDNAByName(char* name)
{
    std::map<char*, IDNAp>::iterator nameFinder;
    nameFinder = m_DNAContainerByName.find(name);
    if(nameFinder == m_DNAContainerByName.end())
    {
        throw std::invalid_argument("Item Not Found");
    }
    return nameFinder->second;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
