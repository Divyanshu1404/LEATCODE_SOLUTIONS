class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> currentSubset;
        function<void(int)> generateSubsets = [&](int index) -> void {
            if (index == nums.size()) {
                answer.push_back(currentSubset);
                return; }
            generateSubsets(index + 1);
            currentSubset.push_back(nums[index]);
            generateSubsets(index + 1);
            currentSubset.pop_back(); };
        generateSubsets(0);
        return answer;
    }
};
