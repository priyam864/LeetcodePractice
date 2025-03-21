class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes,
                                  vector<vector<string>>& ingredients,
                                  vector<string>& supplies) {

        unordered_map<string, int> inDegree;
        unordered_map<string, vector<string>> graph;
        unordered_set<string> available(supplies.begin(), supplies.end());
        queue<string> q;
        for (int i = 0; i < recipes.size(); i++) {
            inDegree[recipes[i]] = ingredients[i].size();
            for (auto& ing : ingredients[i]) {
                graph[ing].push_back(recipes[i]);
            }
        }
        for (auto& item : supplies) {
            q.push(item);
        }

        vector<string> result;
        while (!q.empty()) {
            string item = q.front();
            q.pop();
            if (inDegree.count(item)) {
                result.push_back(item);
            }
            for (auto& r : graph[item]) {
                inDegree[r]--;
                if (inDegree[r] == 0) {
                    q.push(r);
                }
            }
        }

        return result;
    }
};

// we have to first create a graph -> add supplies to queue->check if this
// ingredient completes the recipie -> return all the list af recipes that can
// be prepard.