//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_COMMANDINTERPETER_H

#include "CLI.h"
#include "MemoryController.h"
#include "SharedPtr.h"
#include "ICommand.h"
#include "NewCommand.h"
//#include "Commands/ExitCommand.h"
//#include "Commands/LoadCommand.h"
//#include "Commands/PrintCommand.h"
//#include "Commands/SaveCommand.h"


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
