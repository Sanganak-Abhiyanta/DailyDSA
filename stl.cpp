#include<bits/stdc++.h>
using namespace std;


int main()
{

    // time complexity for all these binary search function is log(n) .
    // a[] = {1,4,5,6,8,9};
    int a[] = {1,4,5,6,8,9};

    // binary_search(a,a+n,key) for array  or binary_search(arr.begin(),arr.end(), key ) for vector. use this to know element present or not.
    bool result=binary_search(a,a+6,3);
    cout<<result<<endl; // this gives result as 0
    bool result1=binary_search(a,a+6,4);
    cout<<result1<<endl; // this gives result as 1

    // lower_bound(a,a+n,key) for finding index. for vector => lower_bound(arr.begin(),arr.end(),key)-arr.begin();
    int index= lower_bound(a,a+6,5)-a;
    cout<<index<<endl; // gives exact index 2 if present that element in the array, index starting from 0 , 
    int index1=lower_bound(a, a+6, 7)-a;
    cout<<index1<<endl; // if not present then gives the index of just greater element i.e: 4  

    // upper_bound(a,a+n,key); for the vector syntax is upper_bound(arr.begin(),arr.end(),key)-arr.begin();
    int index2=upper_bound(a,a+6,5)-a;
    cout<<index2<<endl; //if found then gives the exact index of the key i.e:3, array index starting from 1.
    int index3=upper_bound(a,a+6,10)-a;
    cout<<index3<<endl; //if not found then give the index of that element which is just smaller than key i.e:6 , array index starting form 1. 
    
    return 0;
}