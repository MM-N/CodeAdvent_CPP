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

// Get sum of all frequencies(ints) from input text
int SumAllFreq(vector<int> &input)
{
    return accumulate(input.begin(), input.end(), 0);
}

// Find first sum of all frequencies(ints) that is repeated.
int FirstFreqSumHitTwice(vector<int> &input)
{
    int i{0};
    int sum{};
    unordered_set<int> uniqueFreq;
    
    // Keep looping through entire text, adding each unique freq. to list until double freq. reached. Sum will return freq. hit twice.
    while(uniqueFreq.insert(sum += input[i]).second)
    {
        i = (i+1) % input.size();
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    
    ifstream inputFile("input.txt");
    vector<int> input {istream_iterator<int>(inputFile), {}};
    cout << "Sum Of All Frequencies: " << SumAllFreq(input) << endl;;
    cout << "First Sum of Freq Reached Twice: " << FirstFreqSumHitTwice(input) << endl;
    return 0;
    
}


