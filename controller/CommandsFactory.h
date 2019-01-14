//
// Created by alian on 1/14/19.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDSFACTORY_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDSFACTORY_H

#include <string>
#include <map>
#include "CommandNew.h"
#include "CommandLoad.h"
#include "CommandSave.h"
#include "CommandPrint.h"

typedef Command * (* createCommandFn)(void);

class CommandsFactory
{
public:
//    ~CommandsFactory();
    static CommandsFactory * getInstance();

    void registerCommand(std::string commandKey, createCommandFn createFn);
    Command * createCommand(std::string key);

private:
    CommandsFactory();

    std::map<std::string, createCommandFn>                  m_commandsCollection;
    std::map<std::string, createCommandFn>::iterator        m_commandsIterator;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDSFACTORY_H
