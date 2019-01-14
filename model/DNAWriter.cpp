//
// Created by alian on 12/28/18.
//

#include "DNAWriter.h"

void DNAWriter::writeFile(std::string fileName,IDNAp dna)
{
    m_writer.open(fileName.c_str());
    //TODO:inline function here
    int size = dna->getDNALength();
    for(int i = 0; i<size; ++i)
    {
        m_writer << (*dna)[i];
    }
    m_writer.close();
}