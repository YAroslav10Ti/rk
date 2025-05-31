#include <gtest/gtest.h>
#include "../include/proxy.h"
#include "../include/SchoolGirl.h"

TEST(ProxyTest, GiveGifts) {
    SchoolGirl girl;
    girl.setName("test_girl");
    
    Proxy proxy(&girl);
    
    testing::internal::CaptureStdout();
    proxy.GiveDolls();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "test_girl: give you a doll\n");
    
    testing::internal::CaptureStdout();
    proxy.GiveFlowers();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "test_girl: give you flowers\n");
}
