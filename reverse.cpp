class Solution {
public:
    int reverse(int x) {
        if(x==-2147483648)return 0;
		bool minus=false;
        if(x<0)
        {
            minus=true;
            x*=-1;
        }
        int sol=0;
        while(x>0)
        {
            if(sol>INT_MAX/10)return 0;
            sol=sol*10+x%10;
            x/=10;
        }
        return minus? -1*sol:sol;
    }
};
        
