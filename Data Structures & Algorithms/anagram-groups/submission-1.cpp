class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramGroups;
        for(string word:strs)
        {
string sortedword=word;
sort(sortedword.begin(),sortedword.end());
anagramGroups[sortedword].push_back(word);
        }
        vector<vector<string>>result;
        for(auto group:anagramGroups)
        {
            result.push_back(group.second);

        }
        return result;

    }
};
