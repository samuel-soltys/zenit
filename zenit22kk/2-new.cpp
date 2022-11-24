#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include <random>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    auto rng = default_random_engine ();
    
    int n, inp;
    cin >> n;
    vi jedla;
    
    for(int i = 0; i < n; i++) {
        cin >> inp;
        jedla.push_back(inp);
    }
    
    vi jedla_povodne = jedla;
    int i = 0;
    
    while(jedla == jedla_povodne) {
        shuffle(jedla.begin(), jedla.end(), rng);
        i++;
        
        if(i > 290) {
            cout << "Janka bude frflat" << endl;
            return 0;
        }
    }

    print_vector(jedla);
    
    return 0;
}