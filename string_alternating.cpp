int main()
{
    
    int i,n,res;
    
    cin>>n;
    
    string s[n];
    int result[n];
    
    for(i=0;i<n;i++)
    {
    cin>>s[i];
    res=alternatingCharacters(s[i]);
    result[i]=res;
    }
    
    for(i=0;i<n;i++)
    cout<<result[i]<<endl;
    
return 0;    
}

int alternatingCharacters(string a)
{   
    int i,res=0;
    
    for(i=0;a[i];i++)
    {
        if(a[i]==a[i+1])
          res++;  
    }
return res;
}