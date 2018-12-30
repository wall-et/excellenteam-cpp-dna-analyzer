//
// Created by alian on 12/28/18.
//

#include <cstring>
#include "DNAAnalyzer.h"

DNAAnalyzer::DNAAnalyzer()
{
    m_cli=new CLI(&excuteCommand);
    m_cli->run();
}


void DNAAnalyzer::excuteCommand(int argc, char **argv)
{
//    if(argv[0] == "new")
    if(strcmp(argv[0],"new")!=0)
    {
        NewCommand* newC = new NewCommand(argc,argv);
        newC->run();
    }
}