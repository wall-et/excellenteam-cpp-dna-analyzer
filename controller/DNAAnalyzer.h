//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H

#include "../view/CLI.h"
#include "../model/MemoryController.h"
#include "../lib/SharedPtr.h"
#include "ICommand.h"
#include "CommandNew.h"
#include "CommandPrint.h"
#include "CommandLoad.h"
#include "CommandSave.h"
#include "CommandsFactory.h"


#ifndef IDNAP
#define IDNAP
#include "IDNA.h"
typedef SharedPtr<IDNA> IDNAp;
#endif //IDNAP

typedef void (*CommandFunction)(int argc,char ** argv); // function pointer type
typedef std::map<char *, CommandFunction> commandsCallbackMap;



class DNAAnalyzer
{
public:
    DNAAnalyzer();
    void run();
    void excuteCommand();
private:
    inline void commandNew(int argc, char** argv);

    CLI                             m_cli;
    commandArgs*                    m_args;
    MemoryController                m_memoryController;
    static commandsCallbackMap      m_commandsMap;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H
