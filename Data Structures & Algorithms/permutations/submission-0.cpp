class Solution {
public:

void bt(int i,vector<int>&nums,vector<vector<int>>&res){
    if(i==nums.size()){
        res.push_back(nums);
        return;
    }

    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        bt(i+1,nums,res);
        swap(nums[j],nums[i]);

    }
}
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>>res;
        bt(0,nums,res);

        return res;


        
    }
};
