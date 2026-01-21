class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long result = 0;

        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;

        int left = 0;
        int right = costs.size() - 1;

        for (int i = 0; i < candidates; ++i) {
            if (left <= right) {
                pq1.push(costs[left]);
                left++;
            }
        }

        for (int i = 0; i < candidates; ++i) {
            if (left <= right) {
                pq2.push(costs[right]);
                right--;
            }
        }

        for (int i = 0; i < k; ++i) {
            int cost1 = pq1.empty() ? INT_MAX : pq1.top();
            int cost2 = pq2.empty() ? INT_MAX : pq2.top();

            if (cost1 <= cost2) {
                result += cost1;
                pq1.pop();

                if (left <= right) {
                    pq1.push(costs[left]);
                    left++;
                }
            } 
            else {
                result += cost2;
                pq2.pop();

                if (left <= right) {
                    pq2.push(costs[right]);
                    right--;
                }
            }
        }
        return result;
    }
};
