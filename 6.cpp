#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int sum_of_squares = 0;
    int square_of_sums = 0;

    // Find the sum of the squares
    for (int i = 1; i <= 100; i++) {
        sum_of_squares += (i * i);
    }

    // Find the square of the sums
    for (int i = 1; i <= 100; i++) {
        square_of_sums += i;
    }

    square_of_sums = square_of_sums * square_of_sums;

    // Finally, find the difference between the sum of squares and the square of sums
    int difference = abs(sum_of_squares - square_of_sums);
    cout << difference << endl;

    return 0;
}