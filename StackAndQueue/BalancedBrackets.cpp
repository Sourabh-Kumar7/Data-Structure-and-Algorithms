    #include <bits/stdc++.h>
    #define ll long long int
    #define vi vector<int>
    #define vlld vector<lld>
    #define pb push_back
    #define ff first
    #define ss second
    #define PI 3.1415926535F
    #define ln '\n'
    #define pii pair<int,int>
    #define mii map<int, int>
    #define vii vector<pii>
    #include<string>
    using namespace std;

    bool solve()
    { 
      string str;
      cin>>str;

      vector<char> s;
      s.clear();

      for(int i=0;i<str.size();i++)
      {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
          s.push_back(str[i]);
        }
        else
        {
          if(s.size()==0)
          {
            return false;
          }
          char c= s.back();
          s.pop_back();
          if(c=='{' && str[i]!='}')return false;
          if(c=='(' && str[i]!=')')return false;
          if(c=='[' && str[i]!=']')return false;
        }
      }

      if(s.size()==0)return true;
      else return false;
    } 
     
    int main()
    {
          int tc;
          cin>>tc;

          while(tc--)
          {
            bool sol = solve();
            if(sol)cout<<"YES\n";
            else cout<<"NO\n";
          }

          return 0;
    
    }

    /** Beyourwild7 **/
