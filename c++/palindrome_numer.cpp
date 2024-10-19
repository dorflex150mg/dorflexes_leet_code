class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        char *str = (char *) calloc(1, 16);
        sprintf(str, "%d", x);
        int len = strlen(str);
        //cout << "len: " << len << "\n";
        for(int i = 0; i < len/2; i++) {
            //cout << str[i] << " " << str[(len - i) - 1] << " " << i << "\n";
            if(str[i] != str[(len - i) - 1]) {
                return false;
            }
        }
        return true;
    }
};
