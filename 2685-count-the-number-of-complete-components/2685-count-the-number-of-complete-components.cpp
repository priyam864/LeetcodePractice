class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int completeComponents = 0;

        function<void(int, unordered_set<int>&, int&)> dfs =
            [&](int node, unordered_set<int>& nodes, int& edgeCount) {
                visited[node] = true;
                nodes.insert(node);
                for (int neighbor : adj[node]) {
                    edgeCount++;
                    if (!visited[neighbor]) {
                        dfs(neighbor, nodes, edgeCount);
                    }
                }
            };

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                unordered_set<int> nodes;
                int edgeCount = 0;
                dfs(i, nodes, edgeCount);

                int k = nodes.size();
                if (edgeCount / 2 == (k * (k - 1)) / 2) {
                    completeComponents++;
                }
            }
        }

        return completeComponents;
    }
};

// we are using dfs to traverse each connectedd component -> count its nodes and
// edges-> check if the component ffforms  a complete graph
