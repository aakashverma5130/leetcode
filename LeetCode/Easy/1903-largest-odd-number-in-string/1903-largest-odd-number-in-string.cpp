class Solution {
public:
    string largestOddNumber(string num) {
        bool found = false;
        int largest;
        int len = num.length();
        for (int i = 0; i < len; i++) {
            if ((num[i]-'0') % 2 != 0) {
                largest = i;
                found = true;
            }
        }
            if (found) {
                return num.substr(0,largest+1);
            }
        return "";
    }
};