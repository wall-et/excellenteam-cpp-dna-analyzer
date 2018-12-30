//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H

#include <iostream>

#include "SharedPtr.h"
#include "Nucleotide.h"

class IDNA
{
public:
//    IDNA();
    virtual ~IDNA(){};
protected:
    virtual unsigned long getDNALength() const = 0 ;
    virtual Nucleotide operator[](const size_t index) = 0;

private:
    static size_t m_dnasCounter;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
