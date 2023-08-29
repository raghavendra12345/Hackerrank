#include<bits/stdc++.h>
using namespace std;

string isValid(string check)
{
    int unique=0,max=0,len;
    int i;
    map<char,int> m;
    
    len=check.length();
    
    for(i='a';i<='z';i++)
    {
        m[i]=0;  // initializing the map elements.
    }
    
    for(i=0;i<check.length(); i++)
    {
        m[check[i]]++;
    }
    
    for (i='a'; i<='z';i++)
    {
        if(m[i])
        unique++;
        
        if(max<m[i])
        max=m[i];
    } 
    cout<<max<<endl;
    cout<<unique<<endl;
    cout<<len<<endl;
    
    if(max*unique==len)
    return "YES";
    if(max*(unique-1)+1==len)
    return "YES";
    if((max-1)*unique+1==len)
    return "YES";
    
    
 return "NO";  
}

int main()
{
    string check,result;
    getline(cin,check);
    
    result= isValid(check);
    
    cout<<result<<endl;
    

return 0;  
    
}

