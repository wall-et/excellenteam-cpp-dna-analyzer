//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H

#include <string>
#include <iostream>

#include "SharedPtr.h"
#include "Nucleotide.h"

class IDNA
{
public:
//    IDNA();
    virtual ~IDNA(){};
    virtual unsigned long getDNALength() const = 0 ;
    virtual Nucleotide operator[](const size_t index) = 0;
    virtual std::string getName() const = 0;
    virtual size_t getId() const = 0;

protected:

    static size_t           m_dnasCounter;
    std::string             m_dnaName;
    size_t                  m_dnaId;
private:
};



#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
