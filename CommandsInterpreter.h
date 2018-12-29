//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H

#include "CLI.h"
#include "Commands/ICommand.h"
#include "Commands/ExitCommand.h"
#include "Commands/LoadCommand.h"
#include "Commands/NewCommand.h"
#include "Commands/PrintCommand.h"
#include "Commands/SaveCommand.h"

class CommandsInterpreter
{
public:
    CommandsInterpreter();
    void excuteCommand(int*, char* argv[]);
private:
    CLI m_cli;
    static commandsCallbackMap m_commandsMap;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H
