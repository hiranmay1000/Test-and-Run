#include <bits/stdc++.h>
using namespace std;

// DO NOT DELETE_____________________________________________________
auto start = chrono::steady_clock::now();
// ------------------------------------------------------------------


int main() {


	vector<int> v = { 0, 1, 2, 2, 2, 2 };

	swap(v[1], v[2]);
	cout << v[1] << endl;



	// DO NOT DELETE_____________________________________________________
	cout << endl << endl;
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
	// -------------------------------------------------------------------
}