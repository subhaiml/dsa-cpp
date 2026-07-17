class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxleft=height[l];
        int maxright=height[r];
        int area=0;
        while(l<r){
            if(height[l] <= height[r]){
                maxleft=max(maxleft,height[l]);
                area=area+(maxleft-height[l]);
                l++;
            }
            else{
                maxright = max(maxright, height[r]);
                area=area+(maxright-height[r]);
                r--;
            }
        }
        return area;
    }
};
