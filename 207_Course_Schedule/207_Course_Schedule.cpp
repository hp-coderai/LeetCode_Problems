class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto v: prerequisites){
            int course = v[0];
            int pre = v[1];
            adj[pre].push_back(course);
        }

        vector<int> indegree(numCourses, 0);
        for(int i=0; i<numCourses; i++){
            for(auto v: adj[i]){
                indegree[v]++;
            }
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++){
            if(indegree[i] == 0) q.push(i);
        }

        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto v: adj[node]){
                indegree[v]--;
                if(indegree[v] == 0) q.push(v);
            }
        }
        if(ans.size() == numCourses) return true;
        else return false;
    }
};
