//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H

#include <map>
#include "Parser.h"

typedef void (*CommandFunction)(int* argc,char * argv[]); // function pointer type
typedef std::map<char *, CommandFunction> commandsCallbackMap;

class CLI
{
public:
    static CLI* getInstance();
    void run();

private:
    CLI();
    ~CLI();
    CLI(CLI const&); //not implemented
    CLI& operator=(CLI const&); //not implemented

    inline void readLine();
    inline bool parseCommand();
    inline void callFunctionByCommand() const;

    Parser parser;
    static commandsCallbackMap m_commandsAPI;
    char m_fullCommand[1000];
    int* m_argc;
    char * m_argv[10];

};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_CLI_H
