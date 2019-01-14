//
// Created by alian on 12/28/18.
//

#include "DNAWriter.h"


//DNAWriter::DNAWriter(std::string fileName,IDNAp dna) : m_dna(dna), m_fileName(fileName) {}

void DNAWriter::writeFile(std::string fileName,IDNAp dna)
{
    std::string suffix = ".rawdna";
    std::string n = fileName + suffix;
    m_writer.open(n.c_str());

    int size = dna->getDNALength();

    for(int i = 0; i<size; ++i)
    {
        m_writer << (*dna)[i];
    }

    m_writer.close();
}