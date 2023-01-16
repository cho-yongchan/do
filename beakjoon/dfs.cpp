#include <iostream>
using namespace std;

int visited[5];

int graph[5][5] =  {{0,0,0,0,1},
                    {0,0,1,0,1},
                    {0,1,0,0,0},
                    {0,0,0,0,0},
                    {1,1,0,0,0}};
                    
void dfs(int idx){
    if(visited[idx]){return;}
    visited[idx] = 1;
    cout << idx << " ";
    for(int i=0; i<5; i++){
        if(graph[idx][i] && !visited[i]){
            dfs(i);
        }
    }
    return;
}

int main(void){
    dfs(0);
    cout << endl;
}