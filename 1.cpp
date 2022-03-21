#include <iostream>

using namespace std;

int main () {
    int sum_mults_three = 0;
    int sum_mults_five = 0;
    int sum_mults_fifteen = 0;

    for (int i = 1; (i * 3) < 1000; i++) {
        sum_mults_three += (i * 3);

        if ((i * 5) < 1000) {
            sum_mults_five += (i * 5);
        }

        if ((i * 15) < 1000) {
            sum_mults_fifteen += (i * 15);
        }
    }

    int sum_net = sum_mults_three + sum_mults_five - sum_mults_fifteen;

    cout << sum_net << endl;

    return 0;
}