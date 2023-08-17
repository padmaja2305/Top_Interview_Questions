// Sasha has an array a of n integers. He got bored and for all i , j (i<j), he wrote down the minimum value of ai and aj. He obtained a new array b of size n⋅(n−1)2

// For example, if a= [2,3,5,1], he would write [min(2,3),min(2,5),min(2,1),min(3,5),min(3,1),min(5,1)] = [2,2,1,3,1,1].

// Then, he randomly shuffled all the elements of the array b .Unfortunately, he forgot the array a , and your task is to restore any possible array a from which the array b could have been obtained.

// Note that it is guaranteed that the answer exists and is unique.

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    int arr[n*(n-1)/2];
    for(int i=0;i<n*(n-1)/2;i++)
        cin>>arr[i];
    
    long long int a[n];
    a[0]=sqrt(2*arr[0]);
    for(int i=1;i<n;i++){
        a[i]=(arr[i-1]-a[0]*a[i-1])/a[i-1];
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}