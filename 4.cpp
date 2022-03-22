#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // The largest product of two three-digit numbers is 999 x 999 = 998001
    // The largest palindrome below that limit is 997799
    string number_array = "997799";

    // First, check from 997799 to 990099
    for (int i = 7; i >= 0; i--) {
        number_array[2] = to_string(i)[0];
        number_array[3] = to_string(i)[0];

        int string_as_int = stoi(number_array);

        // Find factors
        double upper_bound = sqrt(string_as_int);
        double remainder = -1;
        int second_factor = -1;

        for (int j = 1; j <= trunc(upper_bound); j++) {
            remainder = string_as_int % j;

            if (remainder == 0) {
                second_factor = string_as_int / j;

                if (j / 100.0 >= 1 && j / 100.0 < 10 && second_factor / 100.0 >= 1 && second_factor / 100.0 < 10) {
                    cout << "The largest palindrome made from the product of two three-digit numbers is " << string_as_int << "." << endl;
                    return 0;
                }
            }
        }
    }

    // The code above didn't return an answer so now check from 989989 to 900009
    for (int n = 8; n >= 0; n--) {
        // Now go down to next set
        number_array[1] = to_string(n)[0];
        number_array[2] = "9"[0];
        number_array[3] = "9"[0];
        number_array[4] = to_string(n)[0];

        for (int i = 9; i >= 0; i--) {
            number_array[2] = to_string(i)[0];
            number_array[3] = to_string(i)[0];

            int string_as_int = stoi(number_array);
            double upper_bound = sqrt(string_as_int);

            double remainder = -1;
            int second_factor = -1;

            for (int j = 1; j <= trunc(upper_bound); j++) {
                remainder = string_as_int % j;

                if (remainder == 0) {
                    second_factor = string_as_int / j;

                    if (j / 100.0 >= 1 && j / 100.0 < 10 && second_factor / 100.0 >= 1 && second_factor / 100.0 < 10) {
                        cout << "The largest palindrome made from the product of two three-digit numbers is " << string_as_int << "." << endl;
                        return 0;
                    }
                }
            }
        }
    }

    // The code above already resulted in the correct answer so I didn't write any more
    return 0;
}