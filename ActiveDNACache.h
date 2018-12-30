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
//    ActiveDNACache();
    ~ActiveDNACache();
//    void loadDNA(char*,IDNAp);
//    IDNAp getDNA(char*) const;
//    void deleteDNA(char*);
    IDNAp getDNAById(char*);
    IDNAp getDNAByName(char*);
    void loadDNAById(char*);
    void loadDNAByName(char*);
    void deleteDNAById(char*);
    void deleteDNAByName(char*);
private:

    static std::map<DNAIdentifier, IDNAp> m_DNAContainer;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ACTIVEDNACACHE_H
