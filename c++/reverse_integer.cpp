class Solution {
public:
    int reverse(int x) {
        char *string = (char *) calloc(1, 16);
        char *buffer = (char *) calloc(2, 16);
        sprintf(string, "%d", x);
        int starting_index = 0;
        int max_size = 10;
        if(string[0] == '-') {
            starting_index = 1;
            max_size += 1;
            buffer[0] = '-';
        }
        int len = strlen(string);
        for(int i = starting_index; i < len; i++) {
            buffer[i] = string[len - i + starting_index - 1];
        }
        int res = atoi(buffer);
        //cout << "buffer: " << buffer << "\n";
        if(strlen(buffer) == max_size) {
            sprintf(string, "%d", res);
            if(string[starting_index] != buffer[starting_index]) {
                return 0;
            }
        }

        return res;
    }
}
