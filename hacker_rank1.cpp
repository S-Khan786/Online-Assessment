//Given a phone in words Convert it into number of Digits
//Two repeating digits will be shortened using word 'double' 
//Same for three digits using 'triple'
//Digits are from 0 to 9
//five eight one triple four triple seven nine --> 5814447779
//two eight nine four four five six --> 2894456
#include<bits/stdc++.h>
using namespace std;

void bournVita() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif  
}

void solve() {
    string s;
    getline(cin, s);

    string ans = "";
    map<string, char> mp;

    mp["one"] = '1';
    mp["two"] = '2';
    mp["three"] = '3';
    mp["four"] = '4';
    mp["five"] = '5';
    mp["six"] = '6';
    mp["seven"] = '7';
    mp["eight"] = '8';
    mp["nine"] = '9';
    mp["zero"] = '0';

    stringstream ss(s);
    string word;

    while (ss >> word) {
        if (word == "double") {
            ss >> word;
            ans += mp[word];
            ans += mp[word];
        } else if (word == "triple") {
            ss >> word;
            ans += mp[word];
            ans += mp[word];
            ans += mp[word];
        } else {
            ans += mp[word];
        }
    }

    cout << ans << endl; 
}

int main() {
    bournVita();

    solve();
}


