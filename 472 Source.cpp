#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");

    multiset <int> st;

    int n, m;
    fin >> n >> m;
    int t;
    for (int i = 0; i < n; i++) {
        fin >> t;
        st.insert(t);
    }

    for (int i = 0; i < m; i++) {
        int tmp = *st.begin() + 1;
        st.erase(st.begin());
        st.insert(tmp);
    }

    fout << *st.begin();

	return 0;
}