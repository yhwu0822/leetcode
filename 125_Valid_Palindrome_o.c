class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};

//isalnum()用來判斷一個字符是否為數字或者字母，也就是說判斷一個字符是否屬於a~z||A~Z||0~9。

//tolower()把字符轉換成小寫字母,非字母字符不做出處理。