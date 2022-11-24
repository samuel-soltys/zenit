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

bool sort_by_second_and_alphabetically_first(const pair<string, int> &a, const pair<string, int> &b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<pair<string, int> > ludia;
    for(int i = 0; i < n; i++) {
        string meno;
        int poradie;
        cin >> meno >> poradie;
        ludia.push_back(make_pair(meno, poradie));
    }
    sort(ludia.begin(), ludia.end(), sort_by_second_and_alphabetically_first);
    
    int poradie = 1;

    for(int i = 0; i < n; i++) {
        if(i > 0 && ludia[i].second != ludia[i - 1].second) {
            poradie = i + 1;
        }
        
        cout << poradie << ". ";
        cout << ludia[i].first << ' ' << ludia[i].second << endl;
        
    }
    
    return 0;
}