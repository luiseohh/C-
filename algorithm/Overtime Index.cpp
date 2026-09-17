#include<iostream>
#include<queue>
#include <vector>

using namespace std;

long long solution(int n, vector<int> works){
    priority_queue<int> pq;

    // filling pq
    for(auto factor : works){
        pq.push(factor);
    }

    while(n > 0 && !pq.empty()){
        int max_work = pq.top();
        pq.pop();

        // if pq index is <= 0 => break;
        if(max_work <= 0) break;

        pq.push(max_work - 1);
        n--;
    }

    long long answer = 0;

    // add overtime index
    while(!pq.empty()){
        long long val = pq.top();
        answer += val * val;
        pq.pop();
    }

    return answer;
}

int main(){
    auto result = solution(1, vector<int>{2, 1, 2});
    cout << result << endl; 
    return 0;
}
