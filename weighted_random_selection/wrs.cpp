#include "wrs.h"
#include <iostream>                                                                                    
#include <sstream>  

namespace mohosojo {

bool WRS_compare(const std::pair<int32_t, double> &x,                                                      
              const std::pair<int32_t, double> &y)                                                      
{                                                                                                       
    return x.second > y.second;                                                                           
}

bool WeightedRandomSelection(std::vector<int32_t>& input, 
                             std::vector<int32_t>* output,
                             int32_t precision) {
    if (precision < 1) return false;
    if (output == NULL) return false;
    // srand((unsigned)time(NULL));
    std::vector<std::pair<int32_t, double> > v_weight;
    std::vector<int32_t>::iterator i_input = input.begin();
    for (int32_t index = 0; i_input != input.end(); ++i_input, ++index) {
        double r = (random() % precision) / (double)precision;
        double key = pow( r, (1 / (double)*i_input) );
        v_weight.push_back(std::make_pair(index, key));

    }
    sort(v_weight.begin(), v_weight.end(), WRS_compare);
    std::vector<std::pair<int32_t, double> >::iterator i_weight = v_weight.begin();
    for (; i_weight != v_weight.end(); ++i_weight) {
        output->push_back(i_weight->first);
    }
    return true;
}



} // namespace mohosojo