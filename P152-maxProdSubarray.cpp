class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int i=0;
    int cmi=nums[i];
    int cmx=nums[i];
    int gmx=nums[i];
    for(i=1;i<nums.size();i++){
        int temp_cmi = nums[i] * cmi;
        int temp_cmx = nums[i] * cmx;
        cmi = min({nums[i], temp_cmi, temp_cmx});
        cmx = max({nums[i], temp_cmi, temp_cmx});
        gmx = max(gmx, cmx);
    }
    return gmx;
    }
};
