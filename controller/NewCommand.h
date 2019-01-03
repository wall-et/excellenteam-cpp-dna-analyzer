//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H

#include "ICommand.h"

class NewCommand : public ICommand
{
public:
//    NewCommand(MemoryController&);
    ~NewCommand();
    void run(int argc, char** argv, MemoryController&);

private:
    inline DNAIdentifier createDNAId(int argc, char** argv);

};


DNAIdentifier NewCommand::createDNAId(int argc, char** argv)
{
    if(argc < 2)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    DNAIdentifier ids = {"",0};
    if(argv[argc-1][0] == '@')
    {
        ids.name = ++argv[argc-1];
        return ids;
    }
    if(argv[argc-1][0] == '#')
    {
        throw std::invalid_argument("Wrong parameters to command. You can specify a name using @.");
    }
    return ids;
}
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
