//pairs::
#include<stdio.h>
#include<bits/stdc++.h>//includes all the libraries
using namespace std;
int main(){
pair<int,int> b={ 1,2}; //declaration of pair
    cout<<b.first<<b.second<<endl; //accessing pairs first and second elemnt
 //nested pair
    pair<int,pair<int,int>> a={3,{4,5}};
    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl; //accesinf nest pairs element
    pair<int,int> arr[]={{6,7},{8,9}};
    cout<<arr[0].first<<arr[0].second<<" "<<arr[1].first<<arr[1].second;
}

//vectors::






