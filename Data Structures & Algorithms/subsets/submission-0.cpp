class Solution {
public:
void dfs(int i,vector<int>&nums,vector<int>&res,vector<vector<int>>&v){
    

        if(i==nums.size()){
            v.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        dfs(i+1,nums,res,v);
    
        res.pop_back();
        dfs(i+1,nums,res,v);
        

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>res;

        dfs(0,nums,res,v);

        return v;

    }
};
