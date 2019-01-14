//
// Created by alian on 12/29/18.
//

#include "MemoryController.h"


void MemoryController::addDNAToCache(IDNAp seq)
{ ;
    m_activeDNA.addDNA(seq);
}


IDNAp MemoryController::getDNAFromCache(DNAIdentifier ids)
{
    return m_activeDNA.getDNA(ids);
}

//void MemoryController::loadDNAFromFile(std::string fileName,DNAIdentifier ids)
void MemoryController::loadDNAFromFile(std::string fileName,std::string dnaName)
{
    std::string seqFromFile = m_DNAReader.readFile(fileName);
    IDNAp newdnap(new DNASequence(dnaName,seqFromFile.c_str()));
    addDNAToCache(newdnap);
//    newdnap;//TODO:do i need it?
}

void MemoryController::saveDNAToFile(std::string fileName,IDNAp dnap)
{
    std::string name = getFileName(fileName,dnap->getName());
    m_DNAWriter.writeFile(name, dnap);
    //TODO: remove from cache
}