#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<list>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    void addEdge(int v, int w);
 
    void DFS(int v);
};
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::DFS(int v)
{
    visited[v] = true;
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s, d1, d2, con_count;
    cin >> s;
    int chain_count = 0;
    cin >> con_count;
    Graph g;

    for(int i = 0; i < con_count; i++) {
        cin >> d1 >> d2;
        g.addEdge(d1 - 1, d2 - 1);
        g.addEdge(d2 - 1, d1 - 1);
    }

    for(int i = 0; i < s; i++) {
        if(g.visited[i] == false) {
            g.DFS(i);
            chain_count++;
        }
    }
    cout << chain_count << endl;
    return 0;
}