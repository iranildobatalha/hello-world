#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if(n <= a && n <= b && n <= c) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}
