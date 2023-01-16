#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int t,m,n,i,a;
int main(void){

    cin >> t;
    while(t--){

        scanf("%u%u",&n,&m);

        for( i=a=1; i <= n; i++,m--){

            a *= m;
            a /= i;
        }

        printf("%u\n",a);
    }

    return 0;

}
