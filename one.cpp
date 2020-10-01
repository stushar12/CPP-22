#include<bits/stdc++.h>
using namespace std;
int main()
 {
    
    int p;cin>>p;
    while(p)
    {
        vector<int> v;
        int  n;
        cin>>n;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        
        
        while(v.size()!=0 )
        {
           int small=*min_element(v.begin(),v.end());
            auto itr=v.begin();
    while(itr != v.end())
    {
        *itr=*itr-small;
        if(*itr == 0)
        {
            itr = v.erase(itr);
        }
        else
            itr++;
    }
           if(v.size()!=0)
           cout<<v.size()<<" ";
            
       }
        cout<<endl;
        p--;
        v.clear();
    }
}
