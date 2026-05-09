//Time Complexity	O(n)
//Space Complexity	O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans=0;
        for(auto st:s){
            if(s.find(st-1)==s.end()){
                int curr=st;
                int count=1;
                while(s.find(curr+1)!=s.end()){
                    count++;
                    curr+=1;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};
