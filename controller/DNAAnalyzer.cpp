//
// Created by alian on 12/28/18.
//

#include <iostream>
#include <cstring>
#include "DNAAnalyzer.h"

DNAAnalyzer::DNAAnalyzer()
{
    m_args = new commandArgs();
}

void DNAAnalyzer::run(){

    while(true)
    {
        m_cli.run(m_args);
        excuteCommand();
//        std::cout << "point 2" <<std::endl;
    }
}

void DNAAnalyzer::excuteCommand()
{
    try
    {
        CommandsFactory* factoryInstance = CommandsFactory::getInstance();
        Command* command = factoryInstance->createCommand(m_args->argv[0]);
        command->run(m_args->argc,m_args->argv,m_memoryController);
//        if(strcmp(m_args->argv[0],"new")==0)
//        {
//            ICommand* newC = new CommandNew();
//            newC->run(m_args->argc,m_args->argv,m_memoryController);
//            //TODO:print command after new
//
//        }
//        if(strcmp(m_args->argv[0],"print")==0)
//        {
//            ICommand* newC = new CommandPrint();
//            newC->run(m_args->argc,m_args->argv,m_memoryController);
//        }
//        if(strcmp(m_args->argv[0],"save")==0)
//        {
//            ICommand* newC = new CommandSave();
//            newC->run(m_args->argc,m_args->argv,m_memoryController);
//        }
//        if(strcmp(m_args->argv[0],"load")==0)
//        {
//            ICommand* newC = new CommandLoad();
//            newC->run(m_args->argc,m_args->argv,m_memoryController);
//        }
        if(strcmp(m_args->argv[0],"exit")==0)
        {
            exit(0);
        }
    }
    catch(const std::runtime_error& re)
    {
        std::cerr << "Runtime error: " << re.what() << std::endl;
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Error occurred: " << ex.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "Unknown failure occurred. Possible memory corruption" << std::endl;
        throw;
    }

}