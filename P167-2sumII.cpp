class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int l=0,h=numbers.size()-1;
    int sum=0;
    while(h>l){
        if(numbers[l]+numbers[h]==target){
            return{l+1,h+1};
        }
        else if(numbers[l]+numbers[h]>target){
            h--;
        }
        else if(numbers[l]+numbers[h]<target){
            l++;
        }
    }
    return {0};
        
    }
};
