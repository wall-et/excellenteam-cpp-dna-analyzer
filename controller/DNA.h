//
// Created by alian on 1/12/19.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNA_H

#include "IDNA.h"

class DNA : public IDNA
{
public:
    ~DNA(){};
//    unsigned long getDNALength() const;
//    Nucleotide operator[](const size_t index) const;
    std::string getName() const;
    size_t getId() const;

protected:

    std::string             m_dnaName;
    size_t                  m_dnaId;
private:
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_DNA_H
