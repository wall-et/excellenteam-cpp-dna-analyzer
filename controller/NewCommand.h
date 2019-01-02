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
        std::cout << "??";
        throw std::invalid_argument("not enough parameters to command");
    }

    for(int i = 0; i< argc; ++i)
    {
        std::string str(argv[i]);
        if(str.find("@") != std::string::npos)
        {
            str.erase (0,1);
            DNAIdentifier ids = {str,0};
            return ids;
        }
        if(str.find("#") != std::string::npos)
        {
            throw std::invalid_argument("wrong parameters to command");
        }
    }
    DNAIdentifier ids = {"",0};
    return ids;
}
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_NEWCOMMAND_H
