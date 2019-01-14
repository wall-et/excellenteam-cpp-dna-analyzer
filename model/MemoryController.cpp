//
// Created by alian on 12/29/18.
//

#include "MemoryController.h"


void MemoryController::addDNAToCache(IDNAp seq)
{
//    DNAIdentifier ids = {name,idNumber};
    m_activeDNA.addDNA(seq);
//    return IDNAp;
}


IDNAp MemoryController::getDNAFromCache(DNAIdentifier ids)
{
    return m_activeDNA.getDNA(ids);
}


void MemoryController::loadDNAFromFile(std::string fileName,DNAIdentifier ids)
{
    std::string seqFromFile = m_DNAReader.readFile(fileName);
    IDNAp newdnap(new DNASequence(ids.name,seqFromFile.c_str()));
    addDNAToCache(newdnap);
//    newdnap;//TODO:do i need it?
}

void MemoryController::saveDNAToFile(IDNAp dnap)
{
    m_DNAWriter.writeFile(dnap->getName(), dnap);
    //TODO: remove from cache
}