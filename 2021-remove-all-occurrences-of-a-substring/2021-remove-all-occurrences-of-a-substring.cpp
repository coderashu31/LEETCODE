class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos){
            //string exist
            s.erase(s.find(part),part.length());
        }
        return s;    
    }
};