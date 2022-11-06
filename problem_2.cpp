
/* problem statement : - find the smallest number larger than x in a sorted array , if not exist then print -1.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};
    
    // for 9
    int index=upper_bound(a,a+9,9)-a;
    if(index<n)
    cout<<a[index]<<" "<<index<<endl;//  output: 10
    else
    cout<<-1;

    // for 6
    int index1=upper_bound(a,a+9,11)-a;
    if(index1<n)
    cout<<a[index1]<<" "index1<<endl;// output : -1
    else 
    cout<<-1;
    return 0;
}