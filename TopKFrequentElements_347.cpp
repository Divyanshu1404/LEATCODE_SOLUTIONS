class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> element(freq.begin(), freq.end());
        sort(element.begin(), element.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });
        
        vector<int> result;
              for(int i = 0; i < k; i++) {
            result.push_back(element[i].first);
        }
        
        return result;
    }
};
