class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int st=0,l=0,r=0;
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int l=i+1;
        int r=nums.size()-1;

        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(sum==0){
                ans.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
                while(l<r && nums[l]==nums[l-1]) l++;
                while(l<r && nums[r]==nums[r+1]) r--;
            }
            else if(sum<0){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return ans;
}
};
