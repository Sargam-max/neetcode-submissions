class Solution {
public:
    bool isPalindrome(string s) {

        string dup="";
    

        for(auto c:s){
            if(isalnum(c)){
                dup+=toupper(c);
            }
        }

        int si=dup.size();

        for(int i=0;i<=si/2;i++){
            if(dup[i]!=dup[si-i-1]){
                return false;

            }
        }
        
        return true;
    }
};
