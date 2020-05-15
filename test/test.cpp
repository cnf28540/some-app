#include <iostream>
#include "gtest/gtest.h"

namespace {

TEST(SomeTest, TestA) {
	EXPECT_EQ(1,1);
}

}

int main(int argc, char *argv[]){
	int result = 0;

	std::cout << "Running test!" << std::endl;

	testing::InitGoogleTest();

	result = RUN_ALL_TESTS();

	return 0;
}
