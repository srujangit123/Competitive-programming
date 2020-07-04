#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    ll a, b;
    cin >> a >> b;
    if(a%b == 0){
      cout << 0 << "\n";
    }
    else{
    cout << (b - (a%b)) << "\n";
    }
  }
}