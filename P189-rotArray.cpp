using namespace std;
class Solution {
public:
    void rotateSubArray(vector<int>& nums,int start,int end)
    {
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    if(k==0) return ;
    rotateSubArray(nums,0,n-1);
    rotateSubArray(nums,0,k-1);
    rotateSubArray(nums,k,n-1);  
    }
};
