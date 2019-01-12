//
// Created by alian on 12/28/18.
//

#include "DNAWriter.h"


DNAWriter::DNAWriter(std::string fileName,IDNAp dna) : m_dna(dna)
{
    m_fileName = fileName;
}

void DNAWriter::writeFile()
{

    m_writer.open(m_fileName.c_str());

    int size = m_dna->getDNALength();

    for(int i = 0; i<size; ++i)
    {
        m_writer << (*m_dna)[i];
    }

    m_writer.close();
}