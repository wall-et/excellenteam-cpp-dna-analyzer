//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H



class ICommand
{
public:
//    ICommand();
    virtual ~ICommand() = 0;
    virtual void run();
private:
};
#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_ICOMMAND_H
