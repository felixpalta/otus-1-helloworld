#define BOOST_TEST_MODULE test_version_boost

#include "lib.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(otus::GetVersion() == 0);
}

}