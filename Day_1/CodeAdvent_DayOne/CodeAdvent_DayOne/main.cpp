//
//  main.cpp
//  CodeAdvent_DayOne
//
//  Created by Mirren Malcolm-Neale on 25/12/2018.
//  Copyright © 2018 MirrenMN. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    std::string str;
    int result = 0;
    
    ifstream in("input.txt");
    if(!in)
    {
        printf("No input file found");
        return 1;
    }
    
    while(std::getline(in, str))
    {
        result += atoi(str.c_str());
        
    }
    
    std::cout << result << std::endl;
    return 0;
}

