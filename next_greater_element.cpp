#include <iostream> 
#include <stack> 
#include <bits/stdc++.h> 
using namespace std; 

int main(){

vector<int> vect; 
    vect.push_back(10); 
    vect.push_back(20); 
    vect.push_back(30); 
  
 
int n = vect.size();

stack < int > s; 
s.push(vect[0]);

for (int i=1; i<n; i++){

if (s.empty()) { 
      s.push(vect[i]); 
    } 


while (!s.empty() && s.top() < vect[i]) 
    {          
        cout << vect[i] << "is NGE of " << s.top() << endl; 
        s.pop(); 
    } 


s.push(vect[i]);



}


  while (s.empty() == false) { 
    cout << s.top() << "==" << -1 << endl; 
    s.pop(); 
  } 

} 
