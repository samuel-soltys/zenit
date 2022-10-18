#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int b1, b2, i1, i2, i3;
    cin >> b1 >> b2;
    cin >> i1 >> i2 >> i3;
    
    vi v;
    v.push_back(i1);
    v.push_back(i2);
    v.push_back(i3);
    if(v[0] + v[1] + v[2] <= b1 || v[0] + v[1] + v[2] <= b2) {
        cout << "Ano" << endl;
        return 0;
    }
    // case 1: 0 a 1 do b1 b2
    if(v[0] + v[1] <= b1) {
        if(v[2] <= b2) {
            cout << "Ano" << endl;
            return 0;
        }
    }
    if(v[0] + v[1] <= b2) {
        if(v[2] <= b1) {
            cout << "Ano" << endl;
            return 0;
        }
    }

    // case 2: 0 a 2 do b1 b2
    if(v[0] + v[2] <= b1) {
        if(v[1] <= b2) {
            cout << "Ano" << endl;
            return 0;
        }
    }
    if(v[0] + v[2] <= b2) {
        if(v[1] <= b1) {
            cout << "Ano" << endl;
            return 0;
        }
    }
    
    // case 3: 1 a 2 do b1 b2
    if(v[1] + v[2] <= b1) {
        if(v[0] <= b2) {
            cout << "Ano" << endl;
            return 0;
        }
    }
    if(v[1] + v[2] <= b2) {
        if(v[0] <= b1) {
            cout << "Ano" << endl;
            return 0;
        }
    }
    
    cout << "Nie" << endl;
    return 0;
}