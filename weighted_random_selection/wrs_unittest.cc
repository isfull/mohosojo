#include "wrs.h"
#include "gtest/gtest.h"
#include <iostream>

namespace hg_buz_code {

	TEST(WRSTest, WRSTestTest1) {
		    uint64_t i = 3;
		      EXPECT_GT(i, 0) << "fail";
		        std::cout << "wrs test:" << i << std::endl;
	}
}
