class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return int((coordinate1[0]-'a'+1+coordinate1[1]-'0')%2)==((coordinate2[0]-'a'+1+coordinate2[1]-'0')%2);
    }
};