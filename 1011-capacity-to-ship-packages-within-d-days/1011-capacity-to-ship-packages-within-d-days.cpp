class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = maximum(weights);
        int high = totalWeight(weights);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int requiredDays = helper(weights, mid);

            if (requiredDays <= days) {
                // Capacity sufficient
                ans = mid;
                high = mid - 1;
            }
            else {
                // Capacity insufficient
                low = mid + 1;
            }
        }

        return ans;
    }

    int maximum(vector<int>& weights) {
        int maxi = 0;

        for (int weight : weights) {
            maxi = max(maxi, weight);
        }

        return maxi;
    }

    int totalWeight(vector<int>& weights) {
        int sum = 0;

        for (int weight : weights) {
            sum += weight;
        }

        return sum;
    }

    int helper(vector<int>& weights, int capacity) {
        int days = 1;
        int currentWeight = 0;

        for (int weight : weights) {

            if (currentWeight + weight <= capacity) {
                currentWeight += weight;
            }
            else {
                days++;
                currentWeight = weight;
            }
        }

        return days;
    }
};