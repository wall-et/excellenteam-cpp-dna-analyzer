//
// Created by alian on 12/30/18.
//

#include <iostream>

#include "SharedPtr.h"
#include "../view/Parser.h"
#include "../controller/DNAAnalyzer.h"
#include "../view/CLI.h"
#include "../model/ActiveDNACache.h"
#include "../controller/IDNA.h"
#include "../controller/ICommand.h"


int main(){

    DNAAnalyzer* analyzer = new DNAAnalyzer();
    analyzer->run();

    std::cout << "compiled!" << std::endl;
    return 0;
}