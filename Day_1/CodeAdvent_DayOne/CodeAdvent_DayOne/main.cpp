//
//  main.cpp
//  CodeAdvent_DayOne
//
//  Created by Mirren Malcolm-Neale on 25/12/2018.
//  Copyright © 2018 MirrenMN. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <numeric>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;
constexpr static bool part2 = true;

int main(int argc, const char * argv[]) {
    
    
    ifstream inputFile("input.txt");
    
    int sum{0};
    if constexpr (part2)
    {
        std::unordered_set<int>uniq;
        std::vector<int> input;
        std::copy(std::istream_iterator<int> (inputFile), {}, std::back_inserter(input));
        int i {0};
        
        //Inserts element from original input file to new unordered set only if doesn't already exist
            //Where element = sum of sequential frequencies from input file (summing value of vector map pair)
        while(uniq.insert (sum += input[i]).second)
        {
            i = (i + 1) % input.size();;
        }
    }
    else
    {
        sum = std::accumulate(std::istream_iterator<int>(inputFile), {}, 0);
    }
    
    std::cout << sum << '\n';
    return EXIT_SUCCESS;
    
    
    /*
    int sum{0};
    if constexpr (part2)
    {
        std::unordered_set<int>uniq;
        std::vector<int> input;
        std::copy(std::istream_iterator<int> (std::cin), {}, std::back_inserter(input));
        int i {0};
        while(uniq.insert (sum += input[i]).second)
              {
                  i =( i + 1) % input.size();;
              }
    }
    else{
            sum = std::accumulate(std::istream_iterator<int>(std::cin), {}, 0);
        }
    std::cout << sum << '\n';
    return EXIT_SUCCESS;
    */
    
}

