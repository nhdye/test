//
//  main.cpp
//  testGit
//
//  Created by Nathan Dye on 12/20/14.
//  Copyright (c) 2014 Nathan Dye. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    long long *array = new long long[100000000];
    
    for (long long i = 0; i < 10000000; ++i) {
        array[i] = i;
        cout << i << endl;
    }
    
    
    
    
    
    
    
    return 0;
}
