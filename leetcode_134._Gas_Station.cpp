#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gasStation, vector<int>& cost) {
        int t_Gas = 0;
        int tank = 0;
        int t_money = 0;
        int starting_point = 0;

        for (int i = 0; i < gasStation.size(); i++)
        {
            t_Gas += gasStation[i];
            t_money += cost[i];

            tank = gasStation[i] - cost[i];

            if (tank < 0) {
                tank = 0;
                starting_point = i + 1;
            }
        }

        return (t_Gas > t_money) ? -1 : starting_point;
    }
};

int main()
{
    Solution problem;
    vector<int> gas = { 1,2,3,4,5 };
    vector<int> cost = { 3,4,5,10,2 };

    cout << "\nIndex: " << problem.canCompleteCircuit(gas, cost) << endl;
}