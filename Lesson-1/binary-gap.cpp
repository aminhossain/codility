#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int N = 200005;

void inOut();


int solution(int N) {
    // Implement your solution here
    int maxZero = 0;
    for(int i = 0; i < 31; i++) {
        
        int bit = (N >> i) & 1;
      
        if(bit) {
            i++;
            int cnt = 0;
            while(((N >> i) & 1) != 1 && i < 31) {
                i++, cnt++;
            }
             
            if((N >> i) & 1) {
                maxZero = max(maxZero, cnt);
                i--;
            } 
        }
    }

    return maxZero;
}

int main() { 
    inOut();
    int tc = 1;
    // cin >> tc;

    while(tc--) {
        solution(1041);
    }

    return 0;
}

void inOut() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        // freopen("input-cpp.txt", "r", stdin);
        freopen("output-cpp.txt", "w", stdout);
    #endif
}