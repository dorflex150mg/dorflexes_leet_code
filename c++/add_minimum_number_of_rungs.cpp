class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int cur = 0;
        int index = 0;
        int extra = 0;
        int last = rungs[rungs.size() - 1];
        while(cur < last) {
            if(cur + dist < rungs[index]) {
                if((rungs[index] - cur) % dist == 0) {
                    cur++;
                }
                extra += (rungs[index] - cur) / dist;
                cout << rungs[index] << " - " << cur << " / " << dist << "\n";
            }
            cur = rungs[index];
            index += 1;
        }
        return extra;
    }
}
