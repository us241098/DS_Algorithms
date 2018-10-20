#include <iostream> 
#include <stack> 
using namespace std; 
  

int main(){

  int cost[] = {10, 4, 5, 90, 120, 80}; 
    int n = sizeof(cost)/sizeof(cost[0]); 
    int Span[n]; 

Span[0]=1;
stack <int> S;

S.push(0);

for(int i=1; i<n; i++){


while (!S.empty() && cost[S.top()]<= cost[i]){
	S.pop();
}

Span[i]= (S.empty())? (i + 1) : (i - S.top()); 

S.push(i);
}

for (int i=0; i<n;i++){
cout <<Span[i];
}

}
