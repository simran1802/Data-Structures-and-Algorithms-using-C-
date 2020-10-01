//Evaluation Of Pre-Fix Expression
#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return true ;
    else
        return false ;
}
int Evaluation(string s)
{
    reverse(s.begin(),s.end()) ;
    int len = s.length() ;
    stack<int> st ;
    for(int i=0;i<len;i++)
    {
        if(!isOperator(s[i]))
            st.push((int)(s[i]-48)) ;
        else
        {
            int x = st.top() ;
            st.pop();
            int y = st.top() ;
            st.pop() ;
            int ans ;
            if(s[i] == '+')
                ans = x+y ;
            else if(s[i] == '-')
                ans = x-y ;
            else if(s[i] == '*')
                ans = x*y ;
            else if(s[i] == '/')
                ans = x/y ;
            st.push(ans) ;
        }
    }
    return st.top() ;
}
int main()
{
    cout<<"Enter Pref-Fix Expression : " ;
    string s ;
    cin>>s ;
    //reverse(s.begin(),s.end());
    //string ans = s ;
    int ans = Evaluation(s) ;
    cout<<endl<<"Result : "<<ans<<endl ;
    return 0 ;
}
