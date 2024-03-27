#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "double_vector.h"

//M_PI can be used as the symbol for pi
TEST_CASE("Cosine Distance Calculation") {
    SUBCASE("45-degree angle") {
        double_vector v1(1, 0);
        double_vector v2(1, 1);
        double expected_angle = M_PI / 4;  //pi over 4
        double angle = cosine_distance(v1, v2);
        CHECK(angle == doctest::Approx(expected_angle));
    }

    SUBCASE("60-degree angle") {
        double_vector v1(1, 0);
        double_vector v2(0.5, std::sqrt(3) / 2);
        double expected_angle = M_PI / 3;  //pi over 3
        double angle = cosine_distance(v1, v2);
        CHECK(angle == doctest::Approx(expected_angle));
    }

    SUBCASE("Identical Vectors") {
        double_vector v1(1, 1);
        double angle = cosine_distance(v1, v1);
        CHECK(angle == doctest::Approx(0).epsilon(0.00001));  //account for floating-point errors
    }
}
