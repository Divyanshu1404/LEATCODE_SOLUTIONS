class Solution {
public:
    int getBinary(vector<int>& nums, int s, int e, int key) {
        int start = s;
        int end = e;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == key)
                return mid;
            else if (nums[mid] > key)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
    int getPivot(vector<int>& nums, int n) {
        int s = 0, e = n - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[e]) 
                s = mid + 1;
            else
                e = mid;
        }
        return s;  
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1; 
        int pivot = getPivot(nums, n);
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return getBinary(nums, pivot, n - 1, target);
        } else {
            return getBinary(nums, 0, pivot - 1, target);
        }
    }
};
