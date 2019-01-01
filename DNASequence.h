//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H

#include "IDNA.h"
#include "Nucleotide.h"
#include <sstream>  //include this to use string streams
#include <string>
#include <cstring>

class DNASequence : public IDNA
{
public:
    explicit DNASequence(char*,const char* const);
    ~DNASequence();

    unsigned long getDNALength() const;
    Nucleotide operator[](const size_t index);
    std::string getName() const;
    size_t getId() const;
private:
    void init_sequence(const char* const);

    inline void setDNASequence(const char* const);
    inline void setName(char*);
    inline void setId();

    Nucleotide* m_seq;
    unsigned long m_seqLength;
};

void DNASequence::setName(char* nameArg)
{
    if(nameArg)
    {
        m_dnaName = nameArg;
    }
    else
    {
        std::ostringstream ostr;
        ostr <<"seq" << m_dnasCounter+1;
        m_dnaName = ostr.str();
    }
    std::cout << "new dna created with name " << m_dnaName << std::endl;
}

void DNASequence::setId()
{
    m_dnaId = m_dnasCounter++;
}

void DNASequence::setDNASequence(const char* const dnaSeq)
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

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H
