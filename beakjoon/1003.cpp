#include <iostream>
using namespace std;
    
int arr[100];
int j;

void gen(void){
    for(j=0; j<100; j++){
        arr[j] = 0;
    }
}
    
int fib(int n){
    
    if(arr[n] != 0){
        return arr[n];
    }
    
    for(int i = 2; i<=n; i++){
        arr[i] = fib(i-2) + fib(i-1);
    }
    return arr[n];
    
}

int main(void){
    gen();
    
    arr[0] = 0, arr[1] = 1;
    
    int cnt, n, ans, ans2;
    cin >> cnt;
    
    for(int i=0; i<cnt; i++){
        cin >> n;
        if(n==0){
            cout << 1 << " " << 0 << "\n";
            continue;
        }
        ans = fib(n);
        ans2 = fib(n-1);
        cout << ans2 << " " << ans << "\n";
    }
    
    return 0;
    
}