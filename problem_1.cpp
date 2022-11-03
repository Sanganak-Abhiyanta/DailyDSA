// problem statement 1
/* Find the first occerence of x in a sorted array , if it is not exist/present then print -1. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};

// search for 6 first occurence.
    int index=lower_bound(a,a+9,6)-a;
    if(index!=9&& a[index]==6) cout<<index<<endl; // output: -1;
    else cout<<-1<<endl;

    // search for 4 first occurence.
    int index1=lower_bound(a,a+9,10)-a;
    if(index1!=9 && a[index1]) cout<<index1<<endl; // output: 7;
    else cout<<-1<<endl;

    return 0;

}