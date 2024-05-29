class Solution {
public:
    int numSteps(string s) 
    {
        int n = s.size()-1;
        int cntmoves = 0;
        int carry = 0;

        for(int i=n;i>0;i--)
        {
            if((s[i]-'0')+carry == 1)
            {
                cntmoves += 2;
                carry = 1;
            }
            else
            cntmoves++;
        }

        return cntmoves+carry;
    }
};