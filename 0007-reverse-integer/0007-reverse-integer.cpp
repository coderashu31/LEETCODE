class Solution {
public:
    int reverse(int x) {
        string str = to_string(abs(x));
        std::reverse(str.begin(), str.end());
        int res = 0;
        try{
            int ans = stoi(str);
            res = x < 0 ? -ans : ans;
        } catch (std::out_of_range){
            return 0;
        }
        return res;
    }
};