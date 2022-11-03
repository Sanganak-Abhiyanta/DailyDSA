// problem statement-2;
/* Find the last occurence of x in a sorted array , if not exist then print -1 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};

    //search for last occurence of 4
    int index=upper_bound(a,a+9,4)-a;
    index--;
    if(index>=0 && a[index]==4)
    cout<<index<<endl; // output= 4;
    else
    cout<<-1<<endl;

    //search for last occurance of 6
    int index1=upper_bound(a,a+9,6)-a;
    index1--;
    if(index1>=0 && a[index1]==6)
    cout<<index1<<endl;
    else 
    cout<<-1<<endl; // outpur: -1;
    return 0;
}