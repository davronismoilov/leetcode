class Solution {
public:
    int romanToInt(string s) {
    int n = s.length();

    int a[n],intNumber=0;
    char char_array[n + 1];
    strcpy(char_array, s.c_str());

    for (int i = 0; i < n; i++)
        {
            if (char_array[i]=='I')
                 a[i]=1;
            if (char_array[i]=='V')
                 a[i]=5;
            if (char_array[i]=='X')
                 a[i]=10;
            if (char_array[i]=='L')
                 a[i]=50;
            if (char_array[i]=='C')
                 a[i]=100;
            if (char_array[i]=='D')
                 a[i]=500;
            if (char_array[i]=='M')
                 a[i]=1000;

        }
    for (int i = 0; i < n; i++){

        if (i<n-1)
         {
            if (a[i]>=a[i+1])
                intNumber+=a[i];
            if(a[i]<a[i+1])
                intNumber-=a[i];
          }
         if (i==n-1)
            intNumber+=a[i];
    }
        
     return intNumber;   
    }
};
