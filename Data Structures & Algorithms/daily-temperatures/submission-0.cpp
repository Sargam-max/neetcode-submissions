class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int s=temperatures.size();
        vector<int>result;
        

        for(int i=0;i<s;i++){
            bool find=false;
            int count=0;
            int left=i;
            int right=i+1;
            while(right<=s-1){
                if(temperatures[right]>temperatures[left]){
                    result.push_back(right-left);
                    find=true;
                    break;
                }
                else{
                    right++;
                
                }
           

            }
            if(find==false){
                result.push_back(0);
            }
           


        }

        return result;


        
    }
};
