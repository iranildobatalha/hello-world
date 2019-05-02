#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    int n;
    cin >> n;
    int v,soma=0;
    for(int i=0;i<n;i++){
        cin >> v;
        soma += v-1;
    }
    cout << soma << endl;
    return 0;
}
