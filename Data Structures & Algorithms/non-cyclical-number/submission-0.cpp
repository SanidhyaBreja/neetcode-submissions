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
        int output=0;
        while(n)
        {
            output+=(n%10)*(n%10);
            n=n/10;
        }
        return output;
    }
};
