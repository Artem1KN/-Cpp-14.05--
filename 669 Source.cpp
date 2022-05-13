#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    unsigned short int n;
    unsigned int digits[10];
    fin >> n;
    unsigned short int k = n;

    if (n == 0 || n == 1)
        fout << -1 << " " << -1;

    for (int i = 9; i > 1; --i) {
        digits[i] = 0;
        while (n % i == 0) {
            n /= i;
            digits[i]++;
        }
    }

    if (n == 1) {
        for (int i = 2; i <= 9; ++i) {
            while (digits[i]) {
                digits[i]--;
                fout << i;
            }
        }
        fout << " ";
    }
    else {
        fout << -1 << " " << -1;
    }

    for (int i = 2; i <= 7; ++i) {
        while (k % i == 0) {
            k /= i;
            digits[i]++;
        }
    }

    for (int i = 7; i > 1; --i)
    {
        while (digits[i]) {
            fout << i;
            digits[i]--;
        }
    }

    return 0;
}