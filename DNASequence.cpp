//
// Created by alian on 12/28/18.
//
#include <cstring>
#include <iostream>
#include "DNASequence.h"

DNASequence::DNASequence(const char* const dnaSeq)
{
    m_seq = NULL;

    try
    {
        init_sequence(dnaSeq);
    }
    catch (std::invalid_argument e)
    {
        throw std::invalid_argument("invalid_argument");
    }
}

DNASequence::~DNASequence()
{
    delete[] m_seq;
}

void DNASequence::init_sequence(const char* const dnaSeq)
{
    unsigned long seqLength = strlen(dnaSeq);
    Nucleotide* seq = new Nucleotide[seqLength * sizeof(Nucleotide)];

    try
    {
        if (seqLength % 3 != 0 || seqLength == 0)
            throw std::invalid_argument("invalid length of sequence");

        for (unsigned int i = 0; i < seqLength; ++i)
        {
            seq[i] = Nucleotide(dnaSeq[i]);
        }

        delete[] m_seq;
        m_seq = new Nucleotide[seqLength * sizeof(Nucleotide)];
        m_seq = seq;
        m_seqLength = seqLength;

    }
    catch (std::invalid_argument e) {
        delete[] seq;
        throw e;
    }
}

unsigned long DNASequence::getDNALength() const
{
    return m_seqLength;
}

Nucleotide DNASequence::operator[](const size_t index)
{
    return m_seq[index];
}
