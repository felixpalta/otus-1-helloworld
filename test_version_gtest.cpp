#include <gtest/gtest.h>
#include "lib.hpp"

TEST(HelloWorldTestDefault,TestVersion) {
    ASSERT_GT(otus::GetVersion(), 0);
}
