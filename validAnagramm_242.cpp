class Solution {
public:
         bool isAnagram(string s, string t){
            unordered_map<char,int> charCount;
            for(auto ch:s){
                charCount[ch]+=1;
            }
            for(auto ch:t){
                charCount[ch] -=1;
            }
            for (auto& pair :charCount){
                if(pair.second !=0){
                    return false;
                }
           }
            return true;
    }
};
