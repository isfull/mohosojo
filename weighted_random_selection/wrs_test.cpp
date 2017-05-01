#include <stdio.h>                                                                                     
#include <string.h>                                                                                    
#include <stdlib.h>                                                                                    
#include <iostream>                                                                                    
#include <sstream>   
#include <vector>

#include "wrs.h"

int main()                                                                                             
{                                                                                                      
                                                                                   
    std::vector<int32_t> v;
    v.push_back(10);   
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);     
    std::vector<int32_t> rs;
    std::vector<int32_t> print;
    print.push_back(0);   
    print.push_back(0);
    print.push_back(0);
    print.push_back(0);  
    for (int32_t i = 0; i < 10000; ++i) {
        mohosojo::WeightedRandomSelectionX<int32_t>(v, &rs, 1000000);

        print[rs[0]]++;
        rs.clear();  
    }            
    for (size_t i = 0; i < print.size(); ++i) {
        std::cout << "num:" << i << ":" << print[i] << std::endl;
    }                                                              
    return 0;                                                                                          
}    