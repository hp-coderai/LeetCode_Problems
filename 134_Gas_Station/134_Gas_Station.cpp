class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas = 0;
        int tot_cost = 0;
        int start= 0;
        int cur_gas = 0;

        for (int i =0; i < gas.size(); i++) {
            tot_gas += gas[i];
            tot_cost += cost[i];
            cur_gas += gas[i] - cost[i];
            if (cur_gas < 0) {
                start = i+1;
                cur_gas = 0;
            }
        }
        return tot_gas < tot_cost ? -1:start;
    }
};
