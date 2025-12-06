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

// priority que
//declaration:::
priority_queue<int>pq;//known as max heap as max num is at top regardless of order of input of data
pq.push(5);//5
pq.push(2);//5,2
pq.emplace_back(10);//10,5,2
cout<<pq.top();//10
pq.pop();//5,2
cout<<pq.top();//5
//size,swap,empty() same as in others

priority_queue<int,vector<int>,greater<int>>pq_1;//minimum heap
pq_1.push(5);//5
pq_1.push(2);//2,5
pq_1.emplace_back(10);//2,5,10
cout<<pq_1.top();//2

//sets
set<int> st;//enters data uniquely and in increasing fashion
st.insert(1);//1
st.emplace(2);//1,2
st.insert(2);//1,2
st.insert(4);//1,2,4
st.insert(3);//1,2,3,4
auto it=st.find(3);//rturns address of 3 if avl
auto it-st.find(6);//rturns address of st.end as6 isnt avl
st.erase(5);//erases 5
int ct=st.count(5);return 0 if 5 isnt avl 1 if avl
auto th=st.find(3);
st.erase(th);//we can pass address too in erase instead of value
auto u_2=st.find(2);
auto u_4=st.find(4);
st.erase(u_2,u_4);//erases 2--->4 address values

// lowerbound::
we have a set 1,2,3,4,5
    *(s.lower_bound(4));//returns the dereferenced value 4 if exists other wise just greater value if 4 isnt there
                        //if neither 4 nor >4 value exists then it return st.end()-->dereferenced gives 0 value
    *(s.upper_bound(5))://returns 5 if avl just>5 if 5!avl  
//Multiset
        
        
