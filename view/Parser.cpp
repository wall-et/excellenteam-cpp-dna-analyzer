//
// Created by alian on 12/28/18.
//

#include "Parser.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
//#include <sys/wait.h>

void Parser::parseString(char* fullCommand, int* argc, char** argv)
{
    const char delim[]={'\t','\n',' '};
    int i;
    i= 0;

    argv[i] = strtok(fullCommand, " ");

    while(argv[i] != NULL)
    {
        argv[++i]= strtok(NULL, delim);
    }
    if(fullCommand[strlen(fullCommand - 1)] == '\n')
        fullCommand[strlen(fullCommand - 1)] = '\0';

    *argc = i;

}