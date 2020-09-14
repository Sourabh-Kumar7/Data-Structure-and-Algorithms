#include<bits/stdc++.h>
using namespace std;

int function1(char* input1,int input2)
{
    
    string s="";
    int count=0;
    for(int i=0;i<input2;i++)
    {
    	if(input1[i]==' ')
    	{
    	    //cout<<s<<endl;
    	    if(s.size()==1)count++;
    	    else
    	    {
    	        int cnt = s.size();
    	        int l = 0;
        		int r = cnt-1;
        		bool flag = 1;
        		while(l<r)
        		{
        			if(s[l]==s[r])
        			{
        				l++;
        				r--;	
        			}
        			else
        			{
        				flag=0;
        				break;
        			}
        		}
        		
        		if(flag)count++;
        		
    	    }
    		
    		s="";
            continue;
    	}
    	s+=input1[i];
    	
    }
    
    if(s.size()==1)count++;
    else
    {
        int cnt = s.size();
        int l = 0;
		int r = cnt-1;
		bool flag = 1;
		while(l<r)
		{
			if(s[l]==s[r])
			{
				l++;
				r--;	
			}
			else
			{
				flag=0;
				break;
			}
		}
		
		if(flag)count++;
		
    }
    return count;

}

int main()
{
    
    char s[] = "this is level 71";
    int n = 16;
    
    cout<<function1(s,n);
    return 0;
    
}