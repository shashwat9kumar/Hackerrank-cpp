#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    set<int> s;

    int t;
    cin>>t;
    while(t-- > 0)
    {
        
        int x, val;
        cin>>x>>val;
         if(x == 1)
         {
             s.insert(val);
         }
         else if(x == 2)
         {
             s.erase(val);
         }
         else
         {
             if(s.find(val) != s.end())
             {
                 cout<<"Yes"<<endl;
             }
             else
             {
                 cout<<"No"<<endl;
             }
         }
    }
    return 0;
}



