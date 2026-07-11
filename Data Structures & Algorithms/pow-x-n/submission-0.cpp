class Solution {
public:
    double myPow(double x, int n) {

        double mul=1;


        if(n>0){
            while(n!=0){
                mul*=x;
                n--;
            }

            return mul;
        }

        else{
            double m=abs(n);
            while(m>0){
                mul*=(1/x);
                m--;
            }

            return mul;
        }




    }
};
