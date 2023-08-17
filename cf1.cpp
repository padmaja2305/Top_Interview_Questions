#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int i =0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==1){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    if (i%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}