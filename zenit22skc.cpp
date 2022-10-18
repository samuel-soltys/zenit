// PROBLEM S OTACANIM TOHO //

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
    
    int n;
    int lava_zat = 0, prava_zat = 0, lavy_zob = 0, pravy_zob = 0;
    string inp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> inp;
        for(int j = 0; j < inp.length(); j++) {
            if(inp[j] == ')') {
                prava_zat++;
            } else if(inp[j] == '(') {
                lava_zat++;
            } else if(inp[j] == '>') {
                pravy_zob++;
            } else if(inp[j] == '<') {
                lavy_zob++;
            }
        }
    }

    int zobaciky = lavy_zob + pravy_zob;
    if(zobaciky % 2 == 0) {
        cout << "dazdovka" << endl;
    } else {
        cout << "had" << endl;
    }
    
    return 0;
}