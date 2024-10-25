class Solution {
    const int ASCII_CHAR = 96;
    const int ASCII_DIGIT = 48;
public:
    bool squareIsWhite(string coordinates) {
        int col = int(coordinates[0]) - ASCII_CHAR;  
        int line = int(coordinates[1]) - ASCII_DIGIT;
        if((col + line) % 2 == 0) {
            return false;
        }
        return true;
    }
}
