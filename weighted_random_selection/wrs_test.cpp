#include <stdio.h>                                                                                     
#include <string.h>                                                                                    
#include <stdlib.h>                                                                                    
#include <iostream>                                                                                    
#include <sstream>   
#include <vector>

#include "wrs.h"

int main()                                                                                             
{                                                                                                      
                                                                                   
    std::vector<int> v;
    v.push_back(10);   
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);     
    std::vector<int> rs;
    std::vector<int> print;
    print.push_back(0);   
    print.push_back(0);
    print.push_back(0);
    print.push_back(0);  
    for (int i = 0; i < 10000; ++i) {
        mohosojo::WeightedRandomSelection(v, &rs);

        print[rs[0]]++;
        rs.clear();  
    }            
    for (size_t i = 0; i < print.size(); ++i) {
        std::cout << "num:" << i << ":" << print[i] << std::endl;
    }                                                              
    return 0;                                                                                          
}    