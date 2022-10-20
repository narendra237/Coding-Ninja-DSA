#include<bits/stdc++.h>
using namespace std;

int binarySearch(int * arr  , int n,int k){

}

int main(){
    int n;
    cin>>n;
    int * arr= new int(n);
    cout<<"Enter the"<<n<< "Elements :"<<endl;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    
    int k;
    cout<<"Element to be searched :";
    cin>>k;
    int index = binarySearch(arr,n,k);

    cout<<"Element "<<k<<"is at index"<<index<<endl;
    
    return 0;
}
