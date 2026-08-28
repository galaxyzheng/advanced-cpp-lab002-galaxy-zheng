#include "project/exercise.hpp"
#include <algorithm>
#include <cctype>
#include <string>

// Exercise 1: sum all values from 1 to 100
int sum_1_to_100() {
    int sum = 0;  // store sum
    for (int i = 1; i <= 100; i++) { // begin adding from 1 to 100
        sum += i;
    }
    return sum;
}

// Exercise 2: factorial of n
int factorial(int n) {
    // TODO: Add the code to compute factorial.
    int result = 1; // store factorial
    if (n > 1) { // what if the input was negative?
        for (int i = 1; i <= n; i++) { 
            result *= i; // multiply until the last number
        }
    }
    return result;
}

// Exercise 3: check if a number is even
bool is_even(int value) {
    // TODO: Add code to return true if value is even.
    return (value % 2 == 0) ? true : false; // if fully divisible by 2, is even
}

// Exercise 4: maximum value in an array
int max_value(const int arr[], int size) {
    // TODO: Add code to find the maximum value.
    int maximum = arr[0]; // start with first value
    for (int i = 0; i < size; i++) {
        if (maximum < arr[i]) maximum = arr[i]; // replace value if larger one found
    }
    return maximum;
}

// Exercise 5: minimum value in an array
int min_value(const int arr[], int size) {
    // TODO: Add code to find the minimum value.
    int minimum = arr[0]; // similar idea to max
    for (int i = 0; i < size; i++) {
        if (minimum > arr[i]) minimum = arr[i];
    }
    return minimum;
}

// Exercise 6: average of array values
double average_of_array(const int arr[], int size) {
    // TODO: Add code to compute the average.
    int sum = 0;
    for (int i = 0; i < size; i++) { // find sum of values
        sum += arr[i];
    }
    return double(sum)/double(size); // ensure float division to find average
}

// Exercise 7: sum of digits in an integer
int sum_of_digits(int n) {
    // TODO: Add code to add all digits in n.
    int sum = 0;
    int i = 1;
    do {
        sum += (n / i) % 10; // left and right side cut
        i *= 10; // move to next digit
    } while (n / i != 0);
    return sum;
}

// Exercise 8: reverse a string
std::string reverse_string(const std::string& text) {
    std::string reversed;
    for (int i = text.size(); i >= 0; i--) {
        reversed += text[i]; // add characters from given string in reverse order
    }
    return reversed.data(); // maybe the output needs to match the same format too?
}

// Exercise 9: count vowels in a string
int count_vowels(const std::string& text) {
    // TODO: Add code to count vowels.
    int count = 0;
    std::string vowels = "aeiou"; // store every vowel
    for (int i = 0; i < text.size(); i++) { // check each character in string against every vowel
        if (text[i] == vowels[0] 
        || text[i] == vowels[1]
        || text[i] == vowels[2]
        || text[i] == vowels[3]
        || text[i] == vowels[4]) {
            count += 1;
        }
    }
    return count;
}

// Exercise 10: determine whether a number is prime
bool is_prime(int n) {
    // Add code
    if (n < 2) { // what if input is negative, 0, or 1
        return false;
    }
    int highbound = n/2; // much higher than guaranteed maximum factor
    for (int i = 2; i < highbound; i++) { 
        if (n % i == 0) { // test divide every factor
            return false;
        }
    }
    return true;
}

// Exercise 11: power function
int power(int base, int exponent) {
    // TODO: Add code to compute base^exponent.
    int result = 1; // any number to 0 power is 1
    for (int i = 0; i < exponent; i++) { // finds power by multiplying (exponent) times
        result *= base;
    }
    return result;
}

// Exercise 12: nth Fibonacci number
int fibonacci(int n) {
    // TODO: Add code to compute the nth Fibonacci number.
    int a0 = 0; 
    int a1 = 1; 
    int fin = 0; // zeroth value
    if (n >= 1) {fin = a1 + a0;} // start with 0 1 1 if 0 does not need to be returned
    for (int i = 2; i <= n; i++) { // begin sequence by looking for 3rd number, as 1st = 2nd = 1
        fin = a1 + a0;
        a0 = a1; // shift values (will be 1 1 2 for n = 3)
        a1 = fin;
    }
    return fin;
}
