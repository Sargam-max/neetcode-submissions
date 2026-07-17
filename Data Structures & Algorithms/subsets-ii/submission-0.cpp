class Solution {
public:

void fun(int i,vector<int>&nums,vector<int>&res,set<vector<int>>&v){
    if(i==nums.size()){
        v.insert(res);
        return;
    }
    res.push_back(nums[i]);
    fun(i+1,nums,res,v);
    res.pop_back();

    fun(i+1,nums,res,v);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>v;
        vector<int>res;
        sort(nums.begin(),nums.end());

        fun(0,nums,res,v);

        return vector<vector<int>>(v.begin(),v.end());



        
    }
};
