#include <iostream>
#define MAX 10001
#define NIL -1

using namespace std;

struct Node{ int parent, left, right; };

Node T[MAX];
int D[MAX], H[MAX];
int n;

void set_depth(int u, int v){
    if(u == NIL) return;
    D[u] = v;
    set_depth(T[u].left, v + 1);
    set_depth(T[u].right, v + 1);
}

int set_height(int u){
    int h1 = 0, h2 = 0;
    if(T[u].left != NIL){
        h1 = set_height(T[u].left) + 1;
    }
    if(T[u].right != NIL){
        h2 = set_height(T[u].right) + 1;
    }
    if(h1 > h2){
        H[u] = h1;
    }else{
        H[u] = h2;
    }
    return H[u];
}

int get_sibling(int u){
    if(u == 0) return -1;
    if(T[T[u].parent].left != u && T[T[u].parent].left != NIL){
        return T[T[u].parent].left;
    }
    if(T[T[u].parent].right != u && T[T[u].parent].right != NIL){
        return T[T[u].parent].right;
    }
    return NIL;
}

void print(int u){
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].parent << ", ";
    cout << "sibling = " << get_sibling(u) << ", ";
    int deg = 0;
    if(T[u].left != NIL) deg++;
    if(T[u].right != NIL) deg++;
    cout << "degree = " << deg << ", ";
    cout << "depth = " << D[u] << ", ";
    cout << "height = " << H[u] << ", ";
    if(u == -1){
        cout << "root\n";
    }else if(T[u].left == NIL && T[u].right == NIL){
        cout << "left\n";
    }else{
        cout << "Internal node\n";
    }
}

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        T[i].parent = NIL;
    }
    int p, l, r, root = 0;
    
    for(int i=0; i<n; i++){
        cin >> p >> l >> r;
        T[i].left = l;
        T[i].right = r;
        if(l != NIL) T[l].parent = p;
        if(r != NIL) T[r].parent = p;
    }
    
    for(int i=0; i<n; i++){
        if(T[i].parent == NIL){
            root = i;
            break;
        }
    }
    
    set_depth(root, 0);
    set_height(root);
    
    for(int i=0; i<n; i++){
        print(i);
    }
    
    return 0;
}