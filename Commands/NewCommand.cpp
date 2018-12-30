//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "NewCommand.h"

NewCommand::NewCommand(int argc, char* argv[])
{
    std::cout << "new command created" << std::endl;
}

void NewCommand::run()
{
    std::cout << "new command running" << std::endl;
}

void NewCommand::~NewCommand()
{
    std::cout << "new command running" << std::endl;
}
