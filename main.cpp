//
// Created by alian on 12/30/18.
//

#include <iostream>

#include "SharedPtr.h"
#include "Parser.h"
#include "DNAAnalyzer.h"
#include "CLI.h"
#include "ActiveDNACache.h"
#include "IDNA.h"
#include "ICommand.h"


int main(){

    DNAAnalyzer* analyzer = new DNAAnalyzer();
    analyzer->run();

    std::cout << "compiled!" << std::endl;
    return 0;
}