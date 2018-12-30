//
// Created by alian on 12/28/18.
//

#include <iostream>
#include <cstring>
#include "DNAAnalyzer.h"

DNAAnalyzer::DNAAnalyzer()
{
    m_cli=new CLI(&excuteCommand);
}

DNAAnalyzer::~DNAAnalyzer()
{}

void DNAAnalyzer::run(){
    m_cli->run();
}

void DNAAnalyzer::excuteCommand(int argc, char **argv)
{
    if(strcmp(argv[0],"new")==0)
    {
        ICommand* newC = new NewCommand();
        newC->run(argc,argv);
    }
}