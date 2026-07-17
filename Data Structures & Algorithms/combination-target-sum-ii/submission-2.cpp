class Solution {
public:
void bt(int index,vector<int>candidates,vector<int>&res,vector<vector<int>>&v,int target){
    if(target==0){
        v.push_back(res);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        if(i>index && candidates[i]==candidates[i-1]){
            continue;
        }
        if(candidates[i]>target){
            break;
        }
        res.push_back(candidates[i]);

        bt(i+1,candidates,res,v,target-candidates[i]);

        res.pop_back();

    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>res;
        vector<vector<int>>v;

        sort(candidates.begin(),candidates.end());

        bt(0,candidates,res,v,target);
        return v;



        
    }
};
