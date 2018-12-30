
//
// Created by alian on 12/29/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H

#include "ActiveDNACache.h"
#include "DNAReader.h"
#include "DNAWriter.h"

class MemoryController
{
public:
//    MemoryController();
    void addDNA(size_t,char*, IDNAp);
//    void loadDNA(char*);
//    IDNAp getDNA(char*) const;
//    void saveDNA(char*);
//    void deleteDNA(char*);
private:
//    inline void addDNAById(char*,IDNAp);
//    inline void addDNAByName(char*,IDNAp);
//    inline void loadDNAById(char*);
//    inline void loadDNAByName(char*);
    inline IDNAp getDNAById(char*);
    inline IDNAp getDNAByName(char*);
////    inline void saveDNAById(char*);
////    inline void saveDNAByName(char*);
//    inline void deleteDNAById(char*);
//    inline void deleteDNAByName(char*);

    ActiveDNACache m_activeDNA;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_MEMORYCONTROLLER_H
