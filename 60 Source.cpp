#include <iostream>
#include <fstream>

using namespace std;

bool prime(const int& n)
{
    for (int i = 2; i <= n / i; ++i)
        if (n % i == 0) return false;
    return n > 1;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;
    int djt1 = 0;
    int djt2 = 0;

    for (int i = 1; ; ++i) {
        if (prime(i)) {
            djt1++;
            if (prime(djt1)) {
                djt2++;
                if (djt2 == n) {
                    fout << i;
                    return 0;
                }
            }
        }

    }
}