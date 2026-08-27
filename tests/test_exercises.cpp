#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "project/exercise.hpp"

TEST_CASE("Exercise 1: sum 1 to 100") {
    REQUIRE(sum_1_to_100() == 5050);
}

TEST_CASE("Exercise 2: factorial") {
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(0) == 1);
}

TEST_CASE("Exercise 3: is_even") {
    REQUIRE(is_even(12) == true);
    REQUIRE(is_even(9) == false);
}

TEST_CASE("Exercise 4: max_value") {
    int arr[] = {10, 4, 22, 8, 19};
    REQUIRE(max_value(arr, 5) == 22);
}

TEST_CASE("Exercise 5: min_value") {
    int arr[] = {10, 4, 22, 8, 19};
    REQUIRE(min_value(arr, 5) == 4);
}

TEST_CASE("Exercise 6: average_of_array") {
    int arr[] = {10, 20, 30};
    REQUIRE(average_of_array(arr, 3) == Approx(20.0));
}

TEST_CASE("Exercise 7: sum_of_digits") {
    REQUIRE(sum_of_digits(1234) == 10);
    REQUIRE(sum_of_digits(0) == 0);
}

TEST_CASE("Exercise 8: reverse_string") {
    REQUIRE(reverse_string("hello") == "olleh");
    REQUIRE(reverse_string("C++") == "++C");
}

TEST_CASE("Exercise 9: count_vowels") {
    REQUIRE(count_vowels("beautiful") == 5);
    REQUIRE(count_vowels("rhythm") == 0);
}

TEST_CASE("Exercise 10: is_prime") {
    REQUIRE(is_prime(13) == true);
    REQUIRE(is_prime(21) == false);
}

TEST_CASE("Exercise 11: power") {
    REQUIRE(power(2, 5) == 32);
    REQUIRE(power(3, 3) == 27);
}

TEST_CASE("Exercise 12: fibonacci") {
    REQUIRE(fibonacci(0) == 0);
    REQUIRE(fibonacci(1) == 1);
    REQUIRE(fibonacci(7) == 13);
}
