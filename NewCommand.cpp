//
// Created by alian on 12/28/18.
//

#include <iostream>
#include "NewCommand.h"

//NewCommand::NewCommand()
//{
//    std::cout << "new command ctor" << std::endl;
//}

NewCommand::~NewCommand()
{
    std::cout << "new command dtor" << std::endl;
}

void NewCommand::run(int argc, char** argv)
{
    std::cout << "new command running" << std::endl;
}
