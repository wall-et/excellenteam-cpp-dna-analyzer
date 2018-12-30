//
// Created by alian on 12/28/18.
//

#include <iostream>
#include <cstring>
#include "DNAAnalyzer.h"

DNAAnalyzer::DNAAnalyzer()
{
    m_cli = new CLI(&excuteCommand);
//    m_memoryController = new MemoryController();
}

DNAAnalyzer::~DNAAnalyzer()
{}

void DNAAnalyzer::run(){
    while(true)
    {
        m_cli->run();
    }
}

void DNAAnalyzer::excuteCommand(int argc, char **argv)
{
    if(strcmp(argv[0],"new")==0)
    {
        ICommand* newC = new NewCommand();
//        IDNAp newdna = newC->run(argc,argv);
        newC->run(argc,argv,m_memoryController);
    }
    if(strcmp(argv[0],"exit")==0) {
        exit(0);
    }
}