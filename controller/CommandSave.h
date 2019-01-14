//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SAVECOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SAVECOMMAND_H
#include <cstdlib>
#include <cstring>
#include "Command.h"


class CommandSave : public Command
{
public:

    ~CommandSave();
    void run(int argc, char** argv, MemoryController&);
private:
//    char * identifier;
//    IDNAp dnaToSave;
//    std::string fileName;
//
//    void setIdentifier(char **);
//    void setFileName(int, char ** );
//    void saveSeqToFile();
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SAVECOMMAND_H
