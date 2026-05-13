class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int si=numbers.size();
        int left=0;
        int right=si-1;
        while(right>left){
            if(numbers[left]+numbers[right]==target){
                return {left+1,right+1};
            }
            else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else{
                left++;
            }
        }
    }
};
