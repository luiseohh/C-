/*#include <string>
#include <vector>

using namespace std;

vector<bool> visit; // check vector
vector<vector<int>> group; // group area

// identify
void identify(){

}

// after dfs and add values
void dfs(const int& cur, const int& group_idx, const vector<vector<int>>& edges){
    visit[cur] = true;
    group[group_idx].push_back(cur);

    for(const auto& edge : edges){
        int a = edge[0];
        int b = edge[1];

        if(a == cur && !visit[a]) dfs(a, group_idx, edges);
        if(b == cur && !visit[b]) dfs(b, group_idx, edges);
    }
}

vector<int> solution(vector<int> nodes, vector<vector<int>> edges) {
    visit.assign(nodes.size(), false); // initialize visit vector

    // group
    for(int node : nodes){
        if(!visit[node]){ // visit[node] => false -> loop
            group.push_back(vector<int>());
            dfs(node, group.size() - 1, edges);
        }
    } 

    //identify


    vector<int> answer;
    return answer;
}*/