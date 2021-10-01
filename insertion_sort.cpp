#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[20],j;
    cout<<"Enter the length of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int temp=a[i];
         j=i-1;
         while(temp<a[j] && j>=0){
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=temp;
    }
    cout<<"Sorted element";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    return 0;
}