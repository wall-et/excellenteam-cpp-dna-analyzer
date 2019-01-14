//
// Created by alian on 1/14/19.
//

#include "CommandsFactory.h"

CommandsFactory::CommandsFactory()
{
    registerCommand("new", &CommandNew::create);
    registerCommand("print", &CommandPrint::create);
    registerCommand("load", &CommandLoad::create);
    registerCommand("save", &CommandSave::create);
}

CommandsFactory * CommandsFactory::getInstance()
{
    static CommandsFactory instance;
    return &instance;
}

void CommandsFactory::registerCommand(std::string commandKey, createCommandFn createFn)
{
    m_commandsCollection.insert(std::pair<std::string, createCommandFn>(commandKey,createFn));
}

Command * CommandsFactory::createCommand(std::string key)
{
    m_commandsIterator = m_commandsCollection.find(key);
    if(m_commandsIterator == m_commandsCollection.end())
    {
        throw std::invalid_argument("Command Not Found");
    }
    return m_commandsIterator->second();
}