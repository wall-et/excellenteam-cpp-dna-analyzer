//
// Created by alian on 1/12/19.
//

#include "Command.h"

size_t Command::createDNAIdNumber(int argunebtCount, char** argv, int locationFromEnd) const
{
    if(argunebtCount + locationFromEnd <= 0)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    if(argv[argunebtCount + locationFromEnd][0] == '#')
    {
        return atoi(++argv[argunebtCount + locationFromEnd]);
    }
    return 0;
}

std::string Command::createDNAIdName(int argunebtCount, char** argv, int locationFromEnd) const
{
    if(argunebtCount + locationFromEnd <= 0)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
//    std::cout <<  argv[argunebtCount + locationFromEnd] << std::endl;
    if(argv[argunebtCount + locationFromEnd][0] == '@')
    {
        return ++argv[argunebtCount + locationFromEnd];
    }
    return "";
}