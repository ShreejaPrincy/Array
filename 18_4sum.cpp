//Time Complexity	O(n³)
//Space Complexity	O(1) extra
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){

            if(i>0&&nums[i]==nums[i-1]) continue;

            long long newt=target-nums[i];
            for(int j=i+1;j<nums.size();j++){

                if(j>i+1&&nums[j]==nums[j-1]) continue;

                long long newtt=newt-nums[j];
                int k=j+1,l=nums.size()-1;
                while(k<l){
                    long long sum=nums[k]+nums[l];
                    if(sum==newtt){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l&&nums[k]==nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1])    l--;
                    }
                    else if(sum>newtt) l--;
                    else if(sum<newtt) k++;
                }
            }
        }
        return ans;
    }
};
