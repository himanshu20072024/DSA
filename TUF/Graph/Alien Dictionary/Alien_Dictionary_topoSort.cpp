class Solution {
  public:
    string findOrder(vector<string> &words) {
       
       int n = words.size();
       
       unordered_set<int> st;
       for(int i = 0; i < n; i++) {
           for(char ch: words[i]) {
               st.insert(ch - 'a');
           }
       }
       
       vector<vector<int>> adj(26);
       
       // lets create a graph
       for(int i = 0; i < n-1; i++) {
           string s1 = words[i];
           string s2 = words[i+1];
           
           int len = min(s1.size(), s2.size());
           bool found = 0;
           
           for(int j = 0; j < len; j++) {
               if(s1[j] != s2[j]) {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    found = 1;
                    break;
               }
           }
           if(!found && s1.size() > s2.size()) {
               return "";
           }
       }
       
        //   lets do topo sort and return the answwr 
        vector<int> inDegree(26, 0);
        
        for(int i = 0; i < adj.size(); i++) {
            for(auto it: adj[i]) {
                inDegree[it]++;
            }
        }
        
        // lets create a queue
    
        queue<int> q;
        for(auto it: st) {
            if(inDegree[it] == 0) {
                q.push(it);
            }
        }
        
        string ans ="";
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            ans += (node + 'a');
            
            for(auto it: adj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        
        if(ans.size() == st.size()) return ans;
        return "";
        
    }
};