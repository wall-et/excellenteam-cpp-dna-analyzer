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

typedef void (*CommandFunction)(int argc,char ** argv); // function pointer type


class CLI
{
public:
    CLI(CommandFunction);
    ~CLI();
//    static CLI* getInstance(CommandFunction);
    void run();

private:
//    CLI(CLI const&); //not implemented
//    CLI& operator=(CLI const&); //not implemented

    inline void readLine();
    inline bool parseCommand();
    inline void executeCommand();

//    static CLI* m_instance;
    Parser m_parser;
//    static commandsCallbackMap m_commandsAPI;
    CommandFunction m_commandCallback;
    char m_fullCommand[1000];
    int m_argc;
    char* m_argv[10];
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H
