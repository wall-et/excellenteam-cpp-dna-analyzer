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
//        std::cout << "point 1" <<std::endl;
        m_cli.run(m_args);
        excuteCommand();
//        std::cout << "point 2" <<std::endl;
    }
}

void DNAAnalyzer::excuteCommand()
{
    if(strcmp(m_args->argv[0],"new")==0)
    {
        ICommand* newC = new NewCommand();
        newC->run(m_args->argc,m_args->argv,m_memoryController);
    }
    if(strcmp(m_args->argv[0],"exit")==0)
    {
        exit(0);
    }
}