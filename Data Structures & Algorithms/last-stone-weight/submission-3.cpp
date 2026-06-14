class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int r;
        
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            int n=stones.size()-1;
            r=stones[n]-stones[n-1];
            stones.pop_back();
            stones.pop_back();
            if(r>0)
            {
                stones.push_back(r);
            }
            if(stones.empty())
            {
                return 0;
            }
            
        }
       
        return stones[0];
    }
};
