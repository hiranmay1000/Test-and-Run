#include <bits/stdc++.h>
using namespace std;

// DO NOT DELETE___________RUNTIME_METER______________________________
auto start = chrono::steady_clock::now();
void showRuntime();
// -------------------------------------------------------------------





int main() {

	string s = "abc";

	s.erase(0, 1);
	s.substr((s.size() - 1) - , 2);

	cout << s << endl;




	showRuntime();
}









// DO NOT DELETE___________RUNTIME_METER______________________________
void showRuntime() {
	cout << endl << endl;
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
}
// -------------------------------------------------------------------