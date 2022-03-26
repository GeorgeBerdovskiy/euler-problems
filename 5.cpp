#include <iostream>

using namespace std;

int main () {
    int index = 20;
    bool found = true;

    while (true) {
        for (int n = 1; n <= 20; n++) {
            if (index % n != 0) {
                found = false;
                break;
            }
        }

        if (found) {
            cout << "The smallest positive number that's evenly divisible by all of the numbers from 1 to 20 is " << index << "." << endl;
            break;
        }

        index += 20;
        found = true;
    }

    return 0;
}