class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> distr(num_people, 0);
        int given = 0;
        int index = 0;
        while(candies > 0) {
            given++; 
            if(given > candies) {
                given = candies;
            }
            distr[index] += given;
            candies -= given;
            index = (index + 1) % num_people;
        }
        return distr;
    }
};
