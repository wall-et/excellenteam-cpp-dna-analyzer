//
// Created by alian on 1/12/19.
//

DNAIdentifier Command::createDNAId(int argc, char** argv)
{
    if(argc < 2)
    {
        throw std::invalid_argument("Not enough parameters included in command.");
    }
    DNAIdentifier ids = {"",0};
    if(argv[argc-1][0] == '@')
    {
        ids.name = ++argv[argc-1];
        return ids;
    }
    if(argv[argc-1][0] == '#')
    {
        throw std::invalid_argument("Wrong parameters to command. You can specify a name using @.");
    }
    return ids;
}