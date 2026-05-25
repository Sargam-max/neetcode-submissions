class Solution {
public:
    int characterReplacement(string s, int k) {

        int left=0;
        int right=0;
        int count=0;
        int maxi=0;

        vector<int>freq(26,0);
        int maxfreq=0;

        while(right<s.size() && left<s.size()){

            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);

            if((right-left+1)-maxfreq<=k){
                count=right-left+1;
                right++;

            }
            else{

                freq[s[left]-'A']--;
                left++;

                freq[s[right]-'A']--;
                maxfreq=0;

                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,freq[i]);
                }
            }

            maxi=max(count,maxi);
        }

        return maxi;


        
    }
};
