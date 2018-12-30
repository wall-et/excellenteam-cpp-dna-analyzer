//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "CLI.h"

CLI::CLI(CommandFunction cb)
{
    m_commandCallback = cb;
}

void CLI::run()
{
//    while(true)
    {
        std::cout << "cmd >>>";
        readLine();
        parseCommand();
        executeCommand();
    }
}
