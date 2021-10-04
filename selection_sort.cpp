#include<bits/stdc++.h>
#include<vector>
using namespace std;
void swap_element(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
       auto min = min_element(v.begin()+i,v.end());
       int idx=distance(v.begin(),min);
        swap_element(&v[idx],&v[i]);
    }
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}