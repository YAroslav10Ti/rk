#include <gtest/gtest.h>
#include "../include/SchoolGirl.h"

TEST(SchoolGirlTest, NameOperations) {
    SchoolGirl girl;
    girl.setName("Alice");
    EXPECT_EQ(girl.getName(), "Alice");
    
    girl.setName("Bob");
    EXPECT_EQ(girl.getName(), "Bob");
}
