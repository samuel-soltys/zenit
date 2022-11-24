#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_array(int *a, int len) { REP(0, len - 1) cout << a[i] << ' '; cout << a[len - 1] << endl; }
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, inp;
    cin >> n;
    vi jedla;
    int temp;
    
    for(int i = 0; i < n; i++) {
        cin >> inp;
        jedla.push_back(inp);
    }
    vi jedla_povodne = jedla;
    if(n == 1) {
        cout << "Janka bude frflat" << endl;
        return 0;
    }
    if(n % 2 == 0) {
        reverse(jedla.begin(), jedla.end());
        
        if(jedla == jedla_povodne) {
            cout << "Janka bude frflat" << endl;
            return 0;
        }

        print_vector(jedla);
        return 0;
    } else {
        reverse(jedla.begin(), jedla.end());
        int mid = (jedla.size() - 1) / 2;
        
        temp = jedla[mid];
        jedla[mid] = jedla[mid + 1];
        jedla[mid + 1] = temp;
        
        if(jedla == jedla_povodne) {
            cout << "Janka bude frflat" << endl;
            return 0;
        }
    
        print_vector(jedla);
        return 0;
    }
    
    return 0;
}