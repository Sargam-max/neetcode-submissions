class Solution {
public:

void bt(int i,vector<int>&nums,vector<int>&res,vector<vector<int>>&v,int target){

    if(target==0){
        v.push_back(res);
        return;
    }
    if(i==nums.size() ||  target<0){
        return;
    }

    res.push_back(nums[i]);
    bt(i,nums,res,v,target-nums[i]);
    res.pop_back();

    bt(i+1,nums,res,v,target);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>>v;
        vector<int>res;

        bt(0,nums,res,v,target);

        return v;


        
    }
};
