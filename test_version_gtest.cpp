#include <gtest/gtest.h>
#include "lib.hpp"

TEST(HelloWorldTestDefault,TestVersion) {
    ASSERT_LT(otus::GetVersion(), 0);
}
