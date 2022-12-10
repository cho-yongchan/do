#include <iostream>
#include <math.h>
using namespace std;

int func(void){

    int x1,y1,r1,x2,y2,r2,ans;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    long int range = (r1+r2)*(r1+r2);
    long int r = (r1-r2)*(r1-r2);

    long int tmp = ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2));

    if(tmp == 0 && (r1 == r2)){
        ans = -1;
    }

    else if((tmp==range)||(tmp==r)){
        ans = 1;
    }
    else if((tmp > range) || (tmp < r) || (tmp == 0 && r1 != r2)){
        ans = 0;
    }
    else{
        ans = 2;
    }

    return ans;

}
int main(void){

    int cnt;
    cin >> cnt;

    for(int i = 0; i< cnt; i++){
        cout << func() << "\n";
    }
    return 0;
}
