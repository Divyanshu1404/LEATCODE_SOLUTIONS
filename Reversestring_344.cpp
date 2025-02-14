class Solution {
public:
    void reverseString(vector<char>& s, int left=0) {
     int right =s.size() - left-1;
     if(left>=right)return;
     swap(s[left],s[right]);
     reverseString(s,left+1);
     }
};
