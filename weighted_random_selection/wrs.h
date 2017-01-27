#ifndef WRS_H
#define WRS_H

#include "stdint.h"
#include <stdlib.h> 
#include <math.h> 
#include <vector>


namespace mohosojo {

bool WRS_compare(const std::pair<int32_t, double> &x,                                                      
              const std::pair<int32_t, double> &y);

bool WeightedRandomSelection(std::vector<int32_t>& input, 
                             std::vector<int32_t>* output,
                             int32_t precision = 1000000);

} // namespace mohosojo

#endif // WRS_H