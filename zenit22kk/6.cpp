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
    
    int r, s;
    cin >> r >> s;
    char teren[r][s];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < s; j++) {
            cin >> teren[i][j];
        }
    }
    // print teren
    // for(int i = 0; i < r; i++) {
    //     for(int j = 0; j < s; j++) {
    //         cout << teren[i][j] << ' ';
    //     }
    //     cout << endl;
    // }


    int pocet_zlata = 0;
    for(int i = 0; i < s; i++) {
        pocet_zlata = 0;
        for(int j = 0; j < r; j++) {
            // cout << "j: " << j << ", i: " << i << teren[j][i] << " | ";
            if(teren[j][i] == '#') {
                pocet_zlata++;
                // cout << "natrafili sme na zlato v " << j << "," << i << endl;
                
                int pravo = i + 1;
                
                // cout << "vpravo index: ";
                // cout << pravo << endl;

                while(teren[j][pravo] == '#' && pravo < s) {
                    pocet_zlata++;
                    pravo++;
                    // cout << "tiez je zlato vpravo" << endl;
                }
                // cout << "vlavo index: ";
                
                int lavo = i - 1;
                // cout << lavo << endl;
                
                while(teren[j][lavo] == '#' && lavo >= 0) {
                    pocet_zlata++;
                    lavo--;
                    // cout << "tiez je zlato vlavo" << endl;
                }       
                
            }
        }
        if(i != s - 1) {
            cout << pocet_zlata << " ";
        }
        else {
            cout << pocet_zlata << endl;
        }
        
    }
    return 0;
}