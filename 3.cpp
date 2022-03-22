#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long int number) {
    long double bound = sqrt(number);
    long double bound_truncated = trunc(bound);

    long double bound_difference = bound - bound_truncated;

    if (bound_difference == 0) {
        return false;
    } else {
        long int remainder = -1;
        long int second_factor = -1;

        for (long int i = 2; i <= bound_truncated; i++) {
            remainder = number % i;

            if (remainder == 0) {
                return false;
            }
        }

        return true;
    }
}

int main () {
    long int number = 600851475143;
    long double upper_bound = sqrt(number);

    long double remainder = -1;
    long int second_factor = -1;
    long int largest_prime_factor = -1;

    for (int i = 1; i <= trunc(upper_bound); i++) {
        remainder = number % i;

        if (remainder == 0) {
            second_factor = number / i;
            
            if (is_prime(i) && i >= largest_prime_factor) {
                largest_prime_factor = i;
            }

            if (is_prime(second_factor) && second_factor >= largest_prime_factor) {
                largest_prime_factor = second_factor;
            }
        }
    }

    cout << "The largest prime factor of 600851475143 is " << largest_prime_factor << "." << endl;

    return 0;
}