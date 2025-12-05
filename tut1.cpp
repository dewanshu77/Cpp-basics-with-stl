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
#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>//includes all the libraries
using namespace std;
int main(){
vector  <int> v; //decln of vector
v.push_back(1); //pushes data at end of vector
 v.emplace_back(2); //does the same thing
    vector<pair<int,int>> vec;
    vec.push_back({3,4});//you need to mention curly braces to enter pair in a vector
    vec.emplace_back(5,6);//it auto detects 5,6 as elemnts of a pair and enters it as an pair in vector


    vector<int> b(5,100);//declares 5 elements of value 100
    vector<int> c(5);//just declare 5 indexes of vector with garb value
  //even if you push elment of already 5 size declared vector it expands size auto
    c.push_back(7);
    //copy of vector
    vector <int> d(b);//d=[100,100...3 more]

    //iterators
 vector<int> :: iterator m=v.begin();//it points on1st elemnt i.e address of it
    cout<<*(m)<<endl;
m++;
    cout<<*(m)<<endl;
     vector<int> :: iterator j=v.begin();//points at last indexed elements addreesss +1
    cout<<v[0]<<endl;
    cout<<v.back()<<"for loop using iterator::|"<<endl;//prints last elemnt

    for(vector<int>::iterator it_1=v.begin();it_1!=v.end();it_1++){
    cout<<*(it_1)<<"auto::next"<<endl;}
 for(auto it_1=v.begin();it_1!=v.end();it_1++){
    cout<<*(it_1)<<endl;}
         for(auto it: v){
    cout<<it<<"for loop"<<endl;}

    //erasing vector elemnts:
    // v.erase(v.begin()+1);{1,2,3,4}-->{1,3,4,5}
    // v.erase(v.begin()+1,v.begin+3);{1,2,3,4}-->{1}
//insert::\
    vector<int> llm={12,13,14};
    //insert 1 value
    // llm.insert(llm.begin()+1,15);//12,15,13,14
    // //inserts 4 times a value
    //     llm.insert(llm.begin()+1,4,5);//12,5,5,5,5,15,13,14

    // //size:\\
    // llm.size();//8
    // llm.pop_back();//14 is delted
    //   vector<int> llt={12,13,14};
    // llm.swap(llt); // llm={12,13,14}; and llt=12,5,5,5,5,15,13,14
    // llm.clear();
// llm.empty();//true if size=0,else false

    //list
    list<int> ls;
    ls.push_front(5);
    ls.emplace_front(6);//the all the vector operators can be used here too

    //satck
    stack<int> st;
    st.push(1);   //1
    st.push(2);   //2,1
      st.push(3);// 3,2,1
        cout<<st.top()<<endl; //3
    st.pop();//2,1
        st.size();//2
    cout<<st.empty()<<endl;//0==false
    stack<int> st_1;
    st.swap(st_1);

    //queue
    queue<int> ql;
    ql.push(1);   //1
    ql.push(2);   //1,2
      ql.push(3);//1,2,3
    ql.back()+=5;//1,2,8
    cout<<ql.back();//8
        cout<<ql.front();//1
    ql.pop();//2,8
    cout<<ql.front();

    //priority::queue::
    

    
}
//vectors::







