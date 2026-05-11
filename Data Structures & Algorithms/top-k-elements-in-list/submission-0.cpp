class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto &i:nums){
            mp[i]++;
            
        }
        vector<pair<int,int>>freq;
        for(auto &p:mp){
            freq.push_back({p.second,p.first});
        }

        sort(freq.rbegin(),freq.rend());
        vector<int>v;

        for(int i=0;i<k;i++){
            v.push_back(freq[i].second);


        }
       
        return v;
                    


        
    }
};
