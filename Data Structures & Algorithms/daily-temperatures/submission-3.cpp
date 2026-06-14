class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;

        for(int i = 0; i < temperatures.size(); i++) {
            int days = 0;
            bool found = false;

            for(int j = i + 1; j < temperatures.size(); j++) {
                days++;
                if(temperatures[j] > temperatures[i]) {
                    res.push_back(days);
                    found = true;
                    break;
                }
            }

            if(!found) {
                res.push_back(0);
            }
        }

        return res;
    }
};

