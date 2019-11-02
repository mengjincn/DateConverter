//
// Created by mengjin on 2019/11/2.
//
#include "gtest/gtest.h"
#include "dynamic.h"

TEST(Dynamic_lib, add){ // 3==1+2
    EXPECT_EQ(3, add(1,2));
    EXPECT_EQ(10, add(12,-2));
}

TEST(Dynamic_lib, minus){ // 102=203-101
    EXPECT_EQ(102, add(203,-101));
}