#include "gtest/gtest.h"

extern "C" {

#include "poker.h"

}

TEST (poker_test, same_color){


    char test[11] ="2H3H4H9H7H";
    EXPECT_EQ(1, is_same_color(test));

}


