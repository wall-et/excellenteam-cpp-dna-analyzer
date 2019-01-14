//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H

#include "Command.h"

class CommandNew : public Command
{
public:
//    NewCommand(MemoryController&);
    ~CommandNew();
    void run(int argc, char** argv, MemoryController&);

private:
    DNAIdentifier createDNAId(int argc, char** argv);
};

inline DNAIdentifier CommandNew::createDNAId(int argc, char** argv)
{
    DNAIdentifier ids;
    ids.id = 0;
    if(argc > 2)
    {
        ids.name = createDNAIdName(argc,argv);
    }
    else
    {
        ids.name = "";
    }
    return ids;
}

//DNAIdentifier NewCommand::createDNAId(int argc, char** argv)
//{
//    if(argc < 2)
//    {
//        throw std::invalid_argument("Not enough parameters included in command.");
//    }
//    DNAIdentifier ids = {"",0};
//    if(argv[argc-1][0] == '@')
//    {
//        ids.name = ++argv[argc-1];
//        return ids;
//    }
//    if(argv[argc-1][0] == '#')
//    {
//        throw std::invalid_argument("Wrong parameters to command. You can specify a name using @.");
//    }
//    return ids;
//}
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H