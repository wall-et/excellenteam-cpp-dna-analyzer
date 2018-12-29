//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H

#include <iostream>
#include <map>

#include "./DNA/IDNA.h"
#include "./DNA/DNASequence.h"
#include "SharedPtr.h"

typedef SharedPtr<IDNA> IDNAp;
typedef struct{
    char* name;
    size_t id;
} DNAIdentifier;

class ActiveDNACache
{
public:
    ActiveDNACache();
    ~ActiveDNACache();
    void loadDNA(char*,IDNAp);
    IDNAp getDNA(char*) const;
    void deleteDNA(char*);
private:
    inline void addDNAById(char*);
    inline void addDNAByName(char*);
    inline void loadDNAById(char*);
    inline void loadDNAByName(char*);
    inline void deleteDNAById(char*);
    inline void deleteDNAByName(char*);

    static std::map<DNAIdentifier, IDNAp> m_DNAContainer;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
