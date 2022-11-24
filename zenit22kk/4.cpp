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

float priemer(vector<tuple<int, int, string> > kone,int podkovy[]) {
    int sum = 0;
    
    for(int i = 0; i < kone.size(); i++) {
        if(podkovy[i] == 1) {
            sum += get<1>(kone[i]);
        } else {
            sum += get<0>(kone[i]);
        }
    }
    // cout << "sum: " << sum << endl;
    return((float)sum / (float)kone.size());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, v;
    cin >> k >> v;
    vector<tuple<int, int, string> > kone;
    
    int podkovy[k];
    // nastav podkovy na false vsetko
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
    
    // print kone
    // cout << "kone sort:" << endl;
    // for(int i = 0; i < k; i++) {
    //     cout << get<0>(kone[i]) << ' ' << get<1>(kone[i]) << ' ' << get<2>(kone[i]) << endl;
    // }

    for(int i = 0; i < kone.size(); i++) {
        if(get<0>(kone[i]) < get<1>(kone[i]) && get<2>(kone[i]) == "nie") {
            podkovy[i] = 1;
        } else if(get<0>(kone[i]) > get<1>(kone[i]) && get<2>(kone[i]) == "nie") {
            podkovy[i] = 0;
        }
    }

    // print podkovy
    // cout << "podkovy po prvom:" << endl;
    // print_array(podkovy, k);
    
    
    // int average = priemer(kone, podkovy);

    // if(average >= v) {
    //     cout << 0 << endl;
    //     return 0;
    // }
    

    // vector<pair<int, int> > nestasne_kone;
    
                    // nestastne kone ale lepsie ked su podkovane
                    // for(int i = 0; i < kone.size(); i++) {
                    //     if(podkovy[i] == -1 && get<0>(kone[i]) < get<1>(kone[i])) {
                    //         nestasne_kone.push_back((make_pair(get<0>(kone[i]), get<1>(kone[i]))));
                    //     }
                    // }
                    // // sort nestastne_kone podla rozdielu
                    // sort(nestasne_kone.begin(), nestasne_kone.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
                    //     return (abs(a.second - a.first)) > (abs(b.second - b.first));
                    // });
    int pocet_podkovanych_smutnych = 0;
    for(int i = 0; i < kone.size(); i++) {
        // cout << "priemer " << i << ": " <<endl;
        // cout << printf("%g\n", priemer(kone, podkovy)) << endl;
        if(priemer(kone, podkovy) >= v) {
            cout << pocet_podkovanych_smutnych << endl;
            return 0;
        }
        if(podkovy[i] == -1 && get<0>(kone[i]) < get<1>(kone[i])) {
            podkovy[i] = 1;
            pocet_podkovanych_smutnych++;
        }
        // cout << "podkovy po:" << i << endl;
        // print_array(podkovy, k);
    }
    
    cout << "neda sa" << endl;
    
    // // vypis nestastne_kone
    // for(int i = 0; i < nestasne_kone.size(); i++) {
    //     cout << nestasne_kone[i].first << ' ' << nestasne_kone[i].second << endl;
    // }

    // // print podkovy
    // print_array(podkovy, k);
    
    
    return 0;
}