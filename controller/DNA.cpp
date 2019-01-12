//
// Created by alian on 1/12/19.
//

#include "DNA.h"


DNA::~DNA()
{
    delete[] m_seq;
}

unsigned long DNA::getDNALength() const
{
    return m_seqLength;
}

Nucleotide DNA::operator[](const size_t index)
{
    return m_seq[index];
}

std::string DNA::getName() const
{
    return IDNA::m_dnaName;
}

size_t DNA::getId() const
{
    return IDNA::m_dnaId;
}