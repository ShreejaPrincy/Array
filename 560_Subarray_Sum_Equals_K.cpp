//TC-O(n)
//SC-O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum-k==0)    count++;

            count+=mp[sum-k];
            
            mp[sum]++;
        }
        return count;
    }
};
