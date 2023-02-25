#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        // Create a max heap to keep track of the maximum values encountered so far
        priority_queue<int> pq;

        // Find the minimum value in the input vector
        int minVal = INT_MAX;
        for (int num : nums) {
            // Double any odd number to ensure that all numbers are even
            if (num % 2 == 1) {
                num *= 2;
            }
            pq.push(num);
            minVal = min(minVal, num);
        }

        // Initialize the minimum deviation to be the difference between the maximum and minimum values
        int minDeviation = INT_MAX;

        // Repeatedly pop the maximum value from the heap and divide it by 2 until it becomes smaller than the minimum value
        while (true) {
            int maxVal = pq.top();
            pq.pop();

            // Update the minimum deviation
            minDeviation = min(minDeviation, maxVal - minVal);

            // If the maximum value is odd, we cannot divide further, so break out of the loop
            if (maxVal % 2 == 1) {
                break;
            }

            // Divide the maximum value by 2 and update the minimum value
            maxVal /= 2;
            minVal = min(minVal, maxVal);

            // Insert the new maximum value back into the heap
            pq.push(maxVal);
        }

        // Return the minimum deviation
        return minDeviation;
    }
};



int main() {
    Solution sol;
    vector<int> nums = { 4, 1, 5, 20, 3 };
    int minDeviation = sol.minimumDeviation(nums);
    cout << "Minimum deviation: " << minDeviation << endl;
    return 0;
}
