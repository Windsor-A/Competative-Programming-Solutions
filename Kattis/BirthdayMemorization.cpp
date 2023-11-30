#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
template <class T> using V = vector<T>;


int main() {
    int n; cin >> n;
    unordered_map<string,pair<int,string>> days;
    while(n--){
        string name, day;
        int like;
        cin >> name >> like >> day;
        pair<int,string> combo;
        combo.first = like; combo.second = name;
        if(days.find(day) != days.end()){
            if(days[day].first < combo.first){
                days[day] = combo;
            }
        }
        else{
            days[day] = combo;
        }
    }
    cout << days.size() << '\n';
    V<string> people;
    for(auto p : days){
        people.push_back(p.second.second);
    }
    sort(people.begin(),people.end());
    for( string s : people){
        cout << s << '\n';
    }
}
