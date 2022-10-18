#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ding, dong, rozdiel, ding_v, dong_v;
    string k;
    cin >> ding >> dong;
    cin >> k;
    ll result = 0;
    map<char, int> pismena;
    for(int i = 0; i < k.length(); i++) {
        if (pismena.find(k[i]) == pismena.end()) {
            pismena.insert(pair<char, int>( k[i], 1 ));
        } else {
            pismena[k[i]]++;
        }
    }
    pismena.erase('A');

    for (auto const &p: pismena) {
        cout << "{" << p.first << ": " << p.second << "}\n";
        
        // ding
        ding_v = p.second * ding;
        
        // dong
        rozdiel = int(p.first) - int('A');
        dong_v = rozdiel * dong;

        if(dong_v <= ding_v) {
            result += dong_v;
        } else {
            result += ding_v;
        }
    }

    cout << result << endl;
    
    return 0;
}