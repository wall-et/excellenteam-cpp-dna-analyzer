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
        if(strcmp(m_args->argv[0],"new")==0)
        {
            ICommand* newC = new NewCommand();
            newC->run(m_args->argc,m_args->argv,m_memoryController);
        }
        if(strcmp(m_args->argv[0],"print")==0)
        {
            ICommand* newC = new PrintCommand();
            newC->run(m_args->argc,m_args->argv,m_memoryController);
        }
        if(strcmp(m_args->argv[0],"exit")==0)
        {
            exit(0);
        }
    }
    catch(const std::runtime_error& re)
    {
        // speciffic handling for runtime_error
        std::cerr << "Runtime error: " << re.what() << std::endl;
    }
    catch(const std::exception& ex)
    {
        // speciffic handling for all exceptions extending std::exception, except
        // std::runtime_error which is handled explicitly
        std::cerr << "Error occurred: " << ex.what() << std::endl;
    }
    catch(...)
    {
        // catch any other errors (that we have no information about)
        std::cerr << "Unknown failure occurred. Possible memory corruption" << std::endl;
    }

}