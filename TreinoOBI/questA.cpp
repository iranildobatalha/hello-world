#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    int n;
    cin >> n;
    if(n == 0) cout << 'E' << endl;
    else if(n >= 1 && n <= 35) cout << "D" << endl;
    else if(n >= 36 && n <= 60) cout << "C" << endl;
    else if(n >= 61 && n <= 85) cout << "B" << endl;
    else if(n >= 86 && n <= 100) cout << "A" << endl;
    return 0;
}
