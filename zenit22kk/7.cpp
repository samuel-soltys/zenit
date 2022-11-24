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
    int x, y;
    cin >> x >> y;
    float x_eur = (float)x / 100;
    float y_eur = (float)y / 100;
    
    
    for(int i = 0; i <= y; i++) {
        for(int j = 0; j <= y; j++) {
            for(int k = 0; k <= y; k++) {
                for(int l = 0; l <= y; l++) {
                    float i_eur = (float)i / 100.0;
                    float j_eur = (float)j / 100.0;
                    float k_eur = (float)k / 100.0;
                    float l_eur = (float)l / 100.0;
                    float sum = i_eur + j_eur + k_eur + l_eur;
                    // cout << sum;
                    // cout << sum * 100 << endl;
                    if(sum == 6.65) {
                        cout << "---------------------" << endl;
                        cout << "---------------------" << endl;
                        cout << "---------------------" << endl;
                        cout << "---------------------" << endl;
                        cout << "---------------------" << endl;
                    }
                    if(sum == i_eur * j_eur * k_eur * l_eur && sum >= x_eur && sum <= y_eur) {
                        cout << i << " " << j << " " << k << " " << l << endl;
                    }
                }
            }
        }
    }
    
    return 0;
}