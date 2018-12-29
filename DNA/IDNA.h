//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H

#include <iostream>

class IDNA
{
public:
    IDNA();
    virtual ~IDNA();
    virtual size_t getDNALength() const = 0 ;
    virtual char* operator[](const size_t index) = 0;
private:
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
