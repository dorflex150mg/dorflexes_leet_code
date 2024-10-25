class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double ratio_x = coordinates[1][0] - coordinates[0][0];
        double ratio_y = coordinates[1][1] - coordinates[0][1];
        double ratio = ratio_x / ratio_y;
        if(ratio_y == 0) {
            for(int i = 2; i < coordinates.size(); i++) {
                if(coordinates[i][1] != coordinates[1][1]) {
                    return false;
                }
            }
            return true;
        }
        for(int i = 2; i < coordinates.size(); i++) {
            double vec_x = coordinates[i][0] - coordinates[0][0];
            double vec_y = coordinates[i][1] - coordinates[0][1];
            if(vec_x / vec_y != ratio){
                return false;
            }
        }
        return true; 
    }
}
