//
// Created by phil on 09.03.19.
//

#include <gtest/gtest.h>

#include <testapp/library.h>
#include <SFML/Graphics.hpp>

TEST(SimpleTest, No1)
{
    SfmlWrapper wrapper;

    EXPECT_EQ(40, wrapper.GetCirclePoints(0, 0, 0, 110));
}

TEST(SimpleTest, No2)
{
    SfmlWrapper wrapper;
    EXPECT_EQ(35, wrapper.GetCirclePoints(255, 255, 255, 80));
}


