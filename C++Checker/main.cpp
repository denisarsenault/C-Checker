//
//  main.cpp
//  C++Checker
//
//  Created by Denis Arsenault on 11/2/20.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
#if __cplusplus == 201402L
   std::cout << "C++14" << std::endl;
 #elif __cplusplus==201103L
   std::cout << "C++11" << std::endl;
 #else
   std::cout << "c/c++" << std::endl;
 #endif
 return 0;
    return 0;
}
