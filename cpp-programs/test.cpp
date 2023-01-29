#include <bits/stdc++.h>
using namespace std;

// DO NOT DELETE___________RUNTIME_METER______________________________
auto start = chrono::steady_clock::now();
void showRuntime();
// -------------------------------------------------------------------




// 5 ,2 ,1 ,3 ,4
// 3 way partition approach
void quickSort(vector<int>& arr, int start, int end) {
	// base case
	if (start >= end) return;

	int pivot = arr[end];
	int i = start, j = end;
	while (i <= j)
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;

		if (i <= j)
			swap(arr[i++], arr[j--]);
	}

	// call recursively
	quickSort(arr, start, j);
	quickSort(arr, i, end);
}



int main() {


	vector<int> v = { 4,2,5,1,3 }; // 1 2 3 || 4 5
	vector<int> u = { 4,1 }; // 1 2 3 || 4 5
	vector<vector<int>> w = {
		{2,3},
		{5,2},
		{4,1},
	};

	if (w.back() != u)
	{
		cout << "Similar\n";
	}


	for (auto i : w.back())
		cout << i << " ";





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