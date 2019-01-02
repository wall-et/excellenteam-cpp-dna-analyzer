//
// Created by alian on 12/30/18.
//

#include <iostream>
#include "Nucleotide.h"

Nucleotide::Nucleotide(char singleNuc)
{
    try
    {
        check_if_valid(singleNuc);
        m_singleNucleotide = singleNuc;
    }
    catch(std::invalid_argument e)
    {
        throw std::invalid_argument("invalid_argument");
    }
}

bool Nucleotide::operator==(char other)
{
    return m_singleNucleotide == other;
}

Nucleotide* Nucleotide::operator=(char singleNuc)
{
    m_singleNucleotide = singleNuc;
    return this;
}

Nucleotide * Nucleotide::operator=(Nucleotide temp)
{
    m_singleNucleotide = temp.m_singleNucleotide ;
    return this;
}

void Nucleotide::check_if_valid(char c_to_check)
{
    c_to_check = toupper(c_to_check);
    if (c_to_check != 'A' && c_to_check != 'G' && c_to_check != 'T' && c_to_check != 'C')
        throw std::invalid_argument("received invalid value");
}
