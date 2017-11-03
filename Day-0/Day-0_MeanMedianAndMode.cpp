

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int max_n = 1e5+5;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n; cin>>n; int a[max_n]; long sum=0;
    
    for(auto i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    double mean, median;
    
    mean = (double)sum/n;
    
    sort(a,a+n);
    if(n%2==0) 
        median = (double)(a[n/2-1]+a[n/2])/2;
    else 
        median = a[n/2];
    
    int mode=a[0], mx=1, cnt=1;
    for(auto i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) {
            ++cnt;
        }
        else 
            cnt=1;
        if(cnt>mx) 
        {
            mx=cnt;
            mode=a[i];
        }
    }
    
    cout<<mean<<"\n"<<median<<"\n"<<mode;
    
    return 0;
}





