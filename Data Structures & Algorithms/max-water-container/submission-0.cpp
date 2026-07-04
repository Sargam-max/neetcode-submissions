class Solution {
public:
    int maxArea(vector<int>& heights) {
        int a=0;
        int ma=0;
        int s=heights.size();

        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                a=min(heights[i],heights[j])*(j-i);
                ma=max(a,ma);
                
            }
        }

        return ma;
        

        
    }
};
