//Power of points
//intersecting segments
// For example, if the initial coordinates are [1,2,5,7,1] and we choose s=5(it can be any number from )
// , then the segments will be: [1,5],[2,5],[5,5],[5,7],[1,5]
// And the powers of the points will be: f1=2,f2=3,f3=3,f4=3,f5=5,f6=1,f7=1,f8=0,…,f109=0
// Their sum is 2+3+3+3+5+1+1=18

// In the first test case we first choose s=x1=1
// , then the following segments are formed: [1,1]
// ,[1,4]
// ,[1,3]
//  The powers of the points will be as follows: f1=3,f2=2,f3=2,f4=1,f5=0…
//  The sum of powers of the points: 3+2+2+1+0+⋯+0=8
// .

// After that we choose s=x2=4
// . Then there will be such segments: [1,4]
// ,[4,4]
// ,[3,4]
// , and powers of the points are f1=1,f2=1,f3=2,f4=3

// At the end we take s=x3=3
//  and the segments look like this: [1,3]
// ,[3,4]
// ,[3,3]
// , the powers of the points are f1=1,f2=1,f3=3,f4=1

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x1=arr[0];
    int x2=arr[1];
    int x3=arr[2];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];


    }
    int ans = sum;

    for(int i=0;i<n;i++){
        int temp = sum;
        if(arr[i]==x1){
            temp-=x1;
            temp-=x1;
            temp+=x2;
            temp+=x3;
        }
        else if(arr[i]==x2){
            temp-=x2;
            temp-=x2;
            temp+=x1;
            temp+=x3;
        }
        else if(arr[i]==x3){
            temp-=x3;
            temp-=x3;
            temp+=x1;
            temp+=x2;
        }
        ans=min(ans,temp);
    }
}
       