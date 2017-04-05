/*
 * test_cubic.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: mark
 */

#include "gtest/gtest.h"
#include "factorial.h"

TEST(CubicFuncTest, neg) {
	EXPECT_EQ(-8, cubic(-2));
}



