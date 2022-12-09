#include <iostream>
using namespace std;

int func(void){
    
    
    int x1,y1,r1,x2,y2,r2,ans;
    cin >> x1 >> y2 >> r1 >> x2 >> y2 >> r2;
    
    long int tmp = ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2));
    int range2 = (r1+r2)*(r1+r2);
    int range1 = (r1-r2)*(r1-r2);
    
    //cout << tmp << " " << range1 << " " << range2 << "\n";
    if(tmp==range1){
        ans = -1;
    }
    else if(tmp > range1 & tmp < range2){
        ans = 2;
    }
    else if(tmp==range2){
        ans = 1;
    }
    else{
        ans = 0;
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

