


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n; cin>>n; int a[n+4]; double sum=0, sum1=0;
    
    for(auto i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    
    double mean = (double)(sum/n);
    
    for(auto i=0; i<n; i++)
    {
        sum1 += (((double)a[i]-mean)*((double)a[i]-mean));
    }
    
    double std = (double)sqrt(sum1/n);
    
    printf("%.1f\n", std);
    
    return 0;
}




