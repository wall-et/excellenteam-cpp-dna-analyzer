//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H

class IDNA
{
public:
    virtual IDNA() = 0;
    virtual ~IDNA();
    virtual size_t getDNALength() const = 0 ;
    virtual Nucleotide operator[](const size_t index) = 0;
private:
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_IDNA_H
