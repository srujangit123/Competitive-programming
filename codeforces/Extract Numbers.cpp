#include <bits/stdc++.h>
using namespace std;


bool is_number(string& s)
{
    auto it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}


int main() {
    string s;
    cin >> s;
    vector<string> st;
    string p = "";
    for(int i = 0; i < (int)s.length(); ++i) {
        if(s[i] == ',' || s[i] == ';') {
            if(p.length() == 0) st.push_back("");
            else                st.push_back(p);
            p = "";
        }
        else {
            p += s[i];
        }
    }
    int cnta = 0;
    int cntb = 0;
    st.push_back(p);
    string a = "", b = "";
    for(string t : st) {
        if(is_number(t) && (t.length() == 1 || t[0] != '0')) {
            a += t;
            cnta ++;
            a += ",";
        }
        else {
            b += t;
            cntb++;
            b += ",";
        }
    }
    if(a.empty()) cout << "-\n";
    else {
        int tcnt = 0;
        for(int i = 0; i < a.length(); ++i) {
            if(a[i] == ',') {
                tcnt++;
            }
        }
        if(tcnt != (cnta - 1)) a.pop_back();
        cout << '"' << a << '"' <<"\n";
    }
    if(b.empty()) cout << "-\n";
    else {
        int tcnt = 0;
        for(int i = 0; i < b.length(); ++i) {
            if(b[i] == ',') {
                tcnt++;
            }
        }
        if(tcnt != (cntb - 1)) b.pop_back();
        cout << '"' << b << '"' <<"\n";
    }
    return 0;
}