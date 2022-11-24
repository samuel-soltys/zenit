#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include <tuple>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

bool sort_by_highest_difference_of_pairs(const tuple<int, int, int> &a, const tuple<int, int, int> &b) {
    return (get<2>(a) > get<2>(b));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, v;
    cin >> k >> v;
    vector<tuple<int, int, string> > kone;
    
    int podkovy[k];
    int sum = 0;
    REP(0, k) podkovy[i] = -1;

    for(int i = 0; i < k; i++) {
        int x, y;
        string z;
        cin >> x >> y >> z;
        
        kone.push_back((make_tuple(x, y, z)));
    }
    
    // sortuj podla rozdielu
    sort(kone.begin(), kone.end(), [](const tuple<int, int, string> &a, const tuple<int, int, string> &b) {
        return (abs(get<0>(a) - get<1>(a))) > (abs(get<0>(b) - get<1>(b)));
    });
    

    for(int i = 0; i < kone.size(); i++) {
        sum += get<0>(kone[i]);
        if(get<0>(kone[i]) < get<1>(kone[i]) && get<2>(kone[i]) == "nie") {
            podkovy[i] = 1;
            sum += get<1>(kone[i]) - get<0>(kone[i]);
        } else if(get<0>(kone[i]) > get<1>(kone[i]) && get<2>(kone[i]) == "nie") {
            podkovy[i] = 0;
        }
    }

    int pocet_podkovanych_smutnych = 0;
    for(int i = 0; i < kone.size(); i++) {
        if((float)sum/(float)kone.size() >= (float)v) {
            cout << pocet_podkovanych_smutnych << endl;
            return 0;
        }
        if(podkovy[i] == -1 && get<0>(kone[i]) < get<1>(kone[i])) {
            podkovy[i] = 1;
            sum += get<1>(kone[i]) - get<0>(kone[i]);
            pocet_podkovanych_smutnych++;
        }
    }
    
    cout << "neda sa" << endl;
    
    return 0;
}