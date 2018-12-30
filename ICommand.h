//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H

#include "SharedPtr.h"

#include "MemoryController.h"
#ifndef IDNAP
#define IDNAP
#include "IDNA.h"
typedef SharedPtr<IDNA> IDNAp;
#endif //IDNAP

class ICommand
{
public:
//    ICommand(MemoryController&);
    virtual ~ICommand(){};
    virtual void run(int argc, char** argv,MemoryController&) = 0;
private:
//    MemoryController& m_memoryController;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H
