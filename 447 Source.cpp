#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    long long  n, num = 1;
    fin >> n;

    for (int i = 1; i <= n; i++) {
        num *= i;
        while (num % 10 == 0) num /= 10;
        num %= 1000000;
    }

    fout << num % 10;

    return 0;
}