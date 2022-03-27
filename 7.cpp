#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int number) {
    double bound = sqrt(number);
    double bound_truncated = trunc(bound);

    double bound_difference = bound - bound_truncated;

    if (bound_difference == 0) {
        return false;
    } else {
        int remainder = -1;
        int second_factor = -1;

        for (int i = 2; i <= bound_truncated; i++) {
            remainder = number % i;

            if (remainder == 0) {
                return false;
            }
        }

        return true;
    }
}

int main () {
    int counter = 2;
    int answer = 3;
    int index = 1;

    while (counter < 10001) {
        answer += 2;

        if (is_prime(answer)) {
            counter++;
        }

        index++;
    }

    cout << answer << endl;

    return 0;
}