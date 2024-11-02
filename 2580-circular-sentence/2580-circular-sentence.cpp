class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        //circular first and last char check
        if(sentence[0] != sentence[n-1]){
            return false;
        }
        //next word and prev word check
        for(int i=0;i<n-1;i++){
            if(sentence[i] == ' ' && sentence[i-1] != sentence[i+1]){
                 return false;
            }
        }
        return true;
    }
};