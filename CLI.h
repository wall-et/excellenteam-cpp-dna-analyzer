//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <map>
#include "Parser.h"

//typedef void (*CommandFunction)(int argc,char ** argv); // function pointer type
typedef struct
{
    int argc;
    char** argv
} commandArgs;

class CLI
{
public:
//    CLI();
//    CLI(CommandFunction);
    ~CLI();
//    static CLI* getInstance(CommandFunction);
    void run(commandArgs*);

private:
    inline void readLine();
    inline bool parseCommand();
    inline void executeCommand();

    Parser              m_parser;
//    CommandFunction     m_commandCallback;
    char                m_fullCommand[1000];
    int                 m_argc;
    char*               m_argv[10];
};


inline void CLI::readLine()
{
    fgets(m_fullCommand, sizeof(m_fullCommand), stdin);
}

inline bool CLI::parseCommand()
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

inline void CLI::executeCommand()
{
    m_commandCallback(m_argc,m_argv);
}

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H
