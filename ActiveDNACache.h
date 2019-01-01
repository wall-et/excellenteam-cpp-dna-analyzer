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
    IDNAp getDNA(DNAIdentifier) const;
private:
    inline void addDNAByName(char *,IDNAp);
    inline void addDNAById(IDNAp);
    inline IDNAp getDNAById(size_t) const;
    inline IDNAp getDNAByName(char*) const;

    std::map<char*, IDNAp>          m_DNAContainerByName;
    std::map<size_t, IDNAp>         m_DNAContainerById;
};

void ActiveDNACache::addDNAByName(char* name,IDNAp seq)
{
    m_DNAContainerByName.insert(std::pair<char*,IDNAp>(seq->getName(),seq));
}

//void ActiveDNACache::addDNAById(size_t id,IDNAp seq)
void ActiveDNACache::addDNAById(IDNAp seq)
{
    m_DNAContainerById.insert(std::pair<size_t,IDNAp>(seq->getId(),seq));
}

IDNAp ActiveDNACache::getDNAById(size_t id) const
{
//    std::map<size_t, IDNAp>::iterator idFinder;
//    idFinder = m_DNAContainerById.find(id);
//    if(idFinder == m_DNAContainerById.end())
//    {
//        throw std::invalid_argument("Item Not Found");
//    }
//    return idFinder->second;
    return m_DNAContainerById.find(id)->second;
}

IDNAp ActiveDNACache::getDNAByName(char* name) const
{
//    std::map<char*, IDNAp>::iterator nameFinder;
//    nameFinder = m_DNAContainerByName.find(name);
//    if(nameFinder == m_DNAContainerByName.end())
//    {
//        throw std::invalid_argument("Item Not Found");
//    }
//    return nameFinder->second;
    return m_DNAContainerByName.find(name)->second;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
