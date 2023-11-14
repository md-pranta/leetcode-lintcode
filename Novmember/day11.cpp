#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>graph[501];
    void createGraph(vector<vector<int>>routes, int n){
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(havePath(routes[i], routes[j])){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
    }

    bool havePath(vector<int>r1, vector<int>r2){
        int n=r1.size(), m = r2.size(), i=0, j=0;
        while(i < n and j < m){
            if(r1[i]==r2[j])return true;

            r1[i] < r2[j]? i++: j++;
        }
        return false;
    }
    void sourceNode(vector<vector<int>>& routes, queue<int>& q, int s, int n){
        for(int i = 0; i < n; i++){
            if(isExist(routes[i], s))q.push(i);
        }
    }

    bool isExist(vector<int>r, int s){
        for(int i = 0; i < r.size(); i++){
            if(r[i]==s)return true;
            if(s<r[i]) return false;
        }
        return false;
    }

    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        int n = routes.size();
        if (source == target)return 0;

        for(int i = 0; i<n;i++){
            sort(routes[i].begin(), routes[i].end());
        }
        
        createGraph(routes, n);

        queue<int>q;
        vector<int>visited(n, 0);
        sourceNode(routes,q,source, n);
        int ans  = 1;
        while(!q.empty()){
            int l = q.size();

            while(l--){
                int node = q.front();
                q.pop();

                if(isExist(routes[node], target)) return ans;

                for(int v:graph[node]){
                    if(!visited[v]){
                        visited[v] = 1;
                        q.push(v);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};

int main(){
    return 0;
    Solution s;
    vector<vector<int>>routes = {{1,2,7},{3,6,7}};
    cout << s.numBusesToDestination(routes, 1, 6) << endl;
}