class Solution {
public:
    int reverse(int x) {
       //long revnum=0;

        long revnum = 0;
        while (x !=0) {
            int lastdigit = x % 10;
            revnum = (revnum * 10) + lastdigit;
            if(revnum<INT_MIN || revnum >INT_MAX){
                return 0;
            }
            x = x / 10;
        }
        return revnum;
    }
};