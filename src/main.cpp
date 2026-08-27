// =======================================================
// GitHub Classroom exercise:
// Add your code in the sections marked with TODO comments.
// =======================================================

#include <iostream>
#include <string>
#include "project/exercise.hpp"

int main() {
    std::cout << "Exercise 1: Sum 1..100\n";
    std::cout << "Sum = " << sum_1_to_100() << "\n\n";

    std::cout << "Exercise 2: Factorial\n";
    std::cout << "5! = " << factorial(5) << "\n\n";

    // TODO: Add code for Exercise 3: is_even.
    int value = 12;
    std::cout << "Exercise 3: is_even(" << value << ") = "
              << (is_even(value) ? "true" : "false") << "\n\n";

    // TODO: Add code for Exercise 4: max_value.
    int numbers[] = {10, 4, 22, 8, 19};
    std::cout << "Exercise 4: max_value = " << max_value(numbers, 5) << "\n\n";

    // TODO: Add code for Exercise 5: min_value.
    std::cout << "Exercise 5: min_value = " << min_value(numbers, 5) << "\n\n";

    // TODO: Add code for Exercise 6: average_of_array.
    std::cout << "Exercise 6: average = " << average_of_array(numbers, 5) << "\n\n";

    // TODO: Add code for Exercise 7: sum_of_digits.
    std::cout << "Exercise 7: sum_of_digits(1234) = " << sum_of_digits(1234) << "\n\n";

    // TODO: Add code for Exercise 8: reverse_string.
    std::cout << "Exercise 8: reverse_string = " << reverse_string("hello") << "\n\n";

    // TODO: Add code for Exercise 9: count_vowels.
    std::cout << "Exercise 9: count_vowels = " << count_vowels("beautiful") << "\n\n";

    // TODO: Add code for Exercise 10: is_prime.
    std::cout << "Exercise 10: is_prime(13) = " << (is_prime(13) ? "true" : "false") << "\n\n";

    // TODO: Add code for Exercise 11: power.
    std::cout << "Exercise 11: power(2, 5) = " << power(2, 5) << "\n\n";

    // TODO: Add code for Exercise 12: fibonacci.
    std::cout << "Exercise 12: fibonacci(7) = " << fibonacci(7) << "\n";

    return 0;
}
