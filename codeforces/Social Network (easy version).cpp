#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Print(queue<int>& Queue) 
{ 
    while (!Queue.empty()) { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
    } 
} 
  
// Function to reverse the queue 
void reverseQueue(queue<int>& Queue) 
{ 
    stack<int> Stack; 
    while (!Queue.empty()) { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
    while (!Stack.empty()) { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
} 


bool isPpresentinqueue(queue<int> a, int p){
    while(!a.empty()){
        if(a.front() == p){
            return true;
        }
        a.pop();
    }
    return false;
}



void solve(){
    int n, k;
    cin >> n >> k;
    queue<int> a;
    int p;
    for(int i = 0; i < n; ++i){
        cin >> p;
        if(!isPpresentinqueue(a, p)){
            if(a.size()!=k){
                a.push(p);
            }
            else {
                a.pop();
                a.push(p);
            }
        }
    }
    cout << a.size() << "\n";
    reverseQueue(a); 
    Print(a);
}

int main(){
    solve();
    return 0;
}