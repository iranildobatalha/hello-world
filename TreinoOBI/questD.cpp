#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

map<int,int> album;

int main(){_
    int n,c,m;
    cin >> n >> c >> m;
    int en,cont = c;
    for(int i=0;i<c;i++){
        cin >> en;
        album[en] = 1;
    }
    for(int i=0;i<m;i++){
        cin >> en;
        if(album[en] == 1){
            album[en] = 0;
            cont--;
        }
    }
    cout << cont << endl;
    return 0;
}
