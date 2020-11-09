/*
    Problem Name : Implement Atoi.
    Given : A string with length N;
    To Do : Convert given string into integer.
    Time Complexity : O(N)
    Space Complexity : O(1)
*/

//***CodeBy_Beyourwild7***//


int atoi(string str)
{
    int n = str.length()-1;
    
    bool chk = 1;
    
    int ans = 0;
    
    if(str[0]=='-')
    {
        chk=0;
        str[0]='0';
    }
    
    for(auto i : str)
    {
        //cout<<i<<endl;
        if(i>=48 && i<=57)
        {
            ans += (i-'0')*pow(10,n);
            n--;
        }
        else
            return -1;
    }
    
    return (chk)?ans:-ans;
}
