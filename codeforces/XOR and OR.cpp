#include <string>
#include <iostream>
 
using namespace std;
 
string s;
string s_;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin >> s >> s_;
  if(s.size() != s_.size() ) {cout << "NO" << endl; return 0;}
  int vis = 0,vis_ = 0;
  for(int i=0;i<s.size();++i) if(s[i] == '1') vis = 1;
  for(int i=0;i<s_.size();++i) if(s_[i] == '1') vis_ = 1;
  if(vis != vis_) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}