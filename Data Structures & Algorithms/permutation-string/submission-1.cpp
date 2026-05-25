class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int a=s1.size();
        int b =s2.size();
        if(a>b){
            return false;
        }

        int left=0;
        int right=a;
        unordered_map<char,int>mpp1;
        for(auto i:s1){
            mpp1[i]++;
        }
       
        while(right<=b){
            unordered_map<char,int>mpp;
            for(int i=left;i<right;i++){
            mpp[s2[i]]++;
            }
            if(mpp1==mpp){
            return true;
            }
            right++;
            left++;


        }


        return false;



    }
};
