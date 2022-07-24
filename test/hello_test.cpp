#include "gtest/gtest.h"
#include "src/add.hpp"

// Demonstrate some basic assertions.
TEST(testAdd, test0) {
  // Expect two strings not to be equal.
  EXPECT_EQ(15,add(5,10));
}
