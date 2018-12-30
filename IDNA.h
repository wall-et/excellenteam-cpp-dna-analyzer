//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H

#include <iostream>

#include "SharedPtr.h"

class IDNA
{
public:
    IDNA();
    virtual ~IDNA();
protected:
    virtual unsigned long getDNALength() const = 0 ;
    virtual char operator[](const size_t index) = 0;
    class Nucleotide
    {
    protected:
        Nucleotide(char c ='A');

        bool operator == (char);
        Nucleotide* operator = (char);
        Nucleotide* operator = (Nucleotide);
        operator char()
        {
            return m_singleNucleotide;
        };

        char m_singleNucleotide;
    private:
//        void check_if_valid(char c_to_check);
    };
private:
    static size_t m_dnasCounter;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
