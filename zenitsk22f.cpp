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
    
    vector<pair<int, int> > mosty;

    int N, k1, k2;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> k1 >> k2;
        mosty.push_back(pair<int, int>( k1, k2 ));
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            
        }
    }
    
    return 0;
}