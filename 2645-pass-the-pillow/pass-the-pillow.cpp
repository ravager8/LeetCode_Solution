class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int num = time/(n-1);
        int pillow = -1;

        if(num%2==0)
        pillow = 1;
        else
        pillow = n;

        int k = time%(n-1);

        while(k)
        {
            if(num%2==0)
            pillow++;
            else
            pillow--;

            k--;
        }

        return pillow;
    }
};