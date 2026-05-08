//(for the case where all array elements are non-negative/positive)
//using sliding window
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {

        int maxans = 0, i = 0, j = 0;
        int n = arr.size();
        int sum = 0;

        while(j < n) {

            sum += arr[j];

            while(sum > k) {
                sum -= arr[i];
                i++;
            }

            if(sum == k)
                maxans = max(maxans, j - i + 1);

            j++;
        }

        return maxans;
    }
};

//This is the optimal solution for:positive numbers, negative numbers, zeros
//using prefix sum and hashmaps
//Time Complexity: O(n)
//Space Complexity: O(n)
class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {

        unordered_map<int,int> mp;

        int sum = 0, maxans = 0;

        for(int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            if(sum == k)
                maxans = i + 1;

            if(mp.find(sum - k) != mp.end())
                maxans = max(maxans, i - mp[sum - k]);

            if(mp.find(sum) == mp.end())
                mp[sum] = i;
        }

        return maxans;
    }
};
