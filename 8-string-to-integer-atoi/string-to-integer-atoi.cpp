class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0,f=1;
        long ans=0;
        while(i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            f=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX and f==1)return INT_MAX;
                if(ans>INT_MAX and f==-1)return INT_MIN;
                i++;
            }
            else
                break;
        }
        return (ans*f);
    }
};