#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <list>
#include <deque>


using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
     v.push_back(9);
      v.push_back(5);
       v.push_back(7);
       for(int i:v){
        cout<<i<<" ";}
        cout<<endl;
        int a=3, b=5;
        swap(a,b);
         cout<<endl;
        cout<<a<<"   "<<b;
        cout<<max(a,b);
         cout<<endl;


    list<int> s;
    s.push_back(1);
    // s.push_back(2);
     s.push_back(2);
     s.push_back(7);
    // s.push_back(2);
     s.push_back(3);
       for(int j:s){
        cout<<j<<" ";}
    cout<<endl;
    list<int> p(s);
    list<int> n(5,100);
    for(int g:p){
        cout<<g<<" ";}
        cout<<endl;
          for(int o:n){
        cout<<o<<" ";}
        cout<<endl;
        cout<<p.size();

        cout<<endl;
        cout<<n.size();
        //cout<<s.erase(s.begin());

   stack <int> k;
    k.push(1);
     k.push(9);
      k.push(5);
       k.push(7);
        cout<<k.top()<<" ";
         //cout<<k.pop();
          cout<<k.top()<<" ";
        cout<<endl;


map <int,string> z;
z[1]="shubham";
z[2]="sneha";
z[3]="aman";
z[4]="priyanshu";
//z.insert(5,"raju");
z.erase(2);
  for(auto r:z){
    cout<<r.first<<" ";
    cout<<r.second<<" ";
    

    
    }
//cout<<z.first<<" "<<z.second;










}