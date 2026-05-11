//Time Complexity	O(n)
//Space Complexity	O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int maxi=nums[0],mini=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            int l1stOP=maxi*curr;
            int l2ndOP=mini*curr;

            maxi=max(curr,max(l1stOP,l2ndOP));
            mini=min(curr,min(l1stOP,l2ndOP));
            
            ans=max(ans,max(curr,max(l1stOP,l2ndOP)));
        }
        return ans;
    }
};
