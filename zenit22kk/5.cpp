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
// void print_array(int *a, int len) { REP(0, len) cout << a[i] ? "X" : "O") << ' '; cout << endl; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<bool> s;
    for(int i = 0; i < 10; i++) {
        if(i < n) {
            s.push_back(1);
        } else {
            s.push_back(0);
        }
    }
    
    sort(s.begin(), s.end());

    do {
            
            cout << "   " << (s[0] ? "X" : "O") << "   " << endl;
            cout <<  "  " << (s[1] ? "X" : "O") << " " << (s[2] ? "X" : "O") << "  " << endl;
            cout <<  " " << (s[3] ? "X" : "O") << " " << (s[4] ? "X" : "O") << " " << (s[5] ? "X" : "O") << " " << endl;
            cout <<  "" << (s[6] ? "X" : "O") << " " << (s[7] ? "X" : "O") << " " << (s[8] ? "X" : "O") << " " << (s[9] ? "X" : "O")<< "" << endl;
            cout << endl;
    } while (next_permutation(s.begin(), s.end()));
    


    
    return 0;
}