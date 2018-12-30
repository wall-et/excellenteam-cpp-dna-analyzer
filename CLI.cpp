//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "CLI.h"

//CLI::CLI(CommandFunction cb)
//{
//    m_commandCallback = cb;
//}

void CLI::run(commandArgs* args)
{
//    while(true)
    {
        std::cout << "> cmd >>>";
        readLine();
        parseCommand();
//        executeCommand();
    }
    args->argc = m_argc;
    args->argv = m_argv;
}
