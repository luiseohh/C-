/*#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<vector<bool>> visit; 

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int solve(int row, int col, vector<vector<int>>& map, vector<vector<vector<bool>>>& visited){
    // Queue for BFS, tuple{x, y, enter dist}
    queue<tuple<int, int, int>> que;
    // Destination reach count
    int count = 0;

    que.push({1, 1, 1});
    visited[1][1][1] = true;
    que.pop();
    
    while(!que.empty()){
        // e_dist -> 1 -> up, 2 -> down, 3 -> right, 4 -> left
        auto[x, y, e_dist] = que.front();

        int nx, ny;

        switch (e_dist){
        case 1:
            nx = x; ny = y + 1;
            break;
        case 2:
            nx = x; ny = y - 1;
            break;
        case 3:
            nx = x + 1; ny = y;
            break;
        case 4:
            nx = x - 1; ny = y;
            break;
        }

        for(int i = 0; i < 4; i++){
            if()
        }
        
    }
}

void initialize(vector<vector<int>>& copy, const vector<vector<int>>& origin){
    int n = origin.size();
    int m = origin[0].size();

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            copy[i][j] = origin[i][j];
        }
    }
}


// grid =>  -1 -> tree, 0 -> visit x , 1 -> visit o
int main(vector<vector<int>> grid) {

// visit -> [x][y][enter dist], enter dist -> traks(1 ~ 7)
    vector<vector<vector<bool>>> visited;
    // map
    vector<vector<int>> map;

    // initialize map
    initialize(map, grid);


    return solve(grid.size(), grid[0].size(), map, visited);


}*/

