# Estructura de Datos
## Union Find
* Versión de  ["El diego"](https://github.com/mvpossum/eldiego)
```cpp
struct UnionFind{
    vector<int> f;//the array contains the parent of each node
    void init(int n){f.clear();f.insert(f.begin(),n,-1);}
    int comp(int x){return (f[x]==-1?x:f[x]=comp(f[x]));}//O(1)
    bool join(int i,int j){
        bool con=comp(i)==comp(j);
        if(!con) f[comp(i)]=comp(j);
        return con;
    }
};
```
* Versión de Competitive Programing 3
```cpp
class UnionFind { 
private:
  vi p, rank, setSize;  // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
    int x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};
```
