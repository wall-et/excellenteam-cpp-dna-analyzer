//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H

#include "IDNA.h"
#include "Nucleotide.h"

class DNASequence : public IDNA
{
public:
//    DNASequence(){};
    explicit DNASequence(const char* const);
    ~DNASequence();

    unsigned long getDNALength() const;
    Nucleotide operator[](const size_t index);
private:
    void init_sequence(const char* const);

    Nucleotide* m_seq;
    unsigned long m_seqLength;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNASEQUENCE_H
