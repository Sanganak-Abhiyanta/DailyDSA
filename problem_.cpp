
/* Problem 3 :- find the largest number smaller than x in a sorted array if not exist print -1*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};

    // for 9
    int index=lower_bound(a,a+9,9)-a;
    index--;
    if(index>=0)
    cout<<a[index]<<" "<<index<<endl;// output: 4 4
    else
    cout<<-1;

    // for 6
    int index1=lower_bound(a,a+9,6)-a;
    index1--;
    if(index1>=0)
    cout<<a[index1]<<" "<<index1<<endl;// output: 4 4
    else
    cout<<-1;
    return 0;
}