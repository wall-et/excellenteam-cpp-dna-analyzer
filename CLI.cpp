//
// Created by alian on 12/28/18.
//

#include "CLI.h"

//static CLI* CLI::getInstance(CommandFunction cb)
//{
//    if(m_instance==NULL)
//    {
//        m_instance = new CLI(cb);
//    }
//    return m_instance;
//}

CLI::CLI(CommandFunction cb)
{
    m_commandCallback = cb;
}

void CLI::run()
{

    while(true)
    {
        std::cout << "cmd >>>";
        readLine();
        parseCommand();
        executeCommand();
    }
}

void CLI::readLine()
{
    fgets(m_fullCommand, sizeof(m_fullCommand), stdin);
}

bool CLI::parseCommand()
{
    try
    {
        m_parser.parseString(m_fullCommand,&m_argc,m_argv);
    }
    catch (...)
    {
        return false;
    }
    return true;
}

void CLI::executeCommand()
{
    m_commandCallback(m_argc,m_argv);
}