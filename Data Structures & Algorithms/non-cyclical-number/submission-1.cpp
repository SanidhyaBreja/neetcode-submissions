class Solution {
public:
 
    bool isHappy(int n) {
           int slow=n;
        int fast=sumofsquares(n);
        while(slow!=fast)
        {
            slow=sumofsquares(slow);
            fast=sumofsquares(fast);
            fast=sumofsquares(fast);

        }
        if(fast==1)
        {
        return true;
        }
        return false;
    }


    int sumofsquares(int n)
    {
        int sum=0;
        while(n>0)
        {
            int s=n%10;
            sum+=s*s;
            n=n/10;
        }
        return sum;
    }
};
