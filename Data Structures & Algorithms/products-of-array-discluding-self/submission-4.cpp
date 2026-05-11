class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int product=1;
        int zcount=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                product=product*(nums[i]);

            }
            else{
                zcount++;

            }
            
            
        }

       

        for(int i=0;i<n;i++){

            if(zcount>1){
                nums[i]=0;

            }
            else if(zcount==1){
                nums[i]=(nums[i]==0?product:0);
            }

         
         //
            else{
                nums[i]=product/(nums[i]);

            }
           
            
        }


        return nums;


    }
};
