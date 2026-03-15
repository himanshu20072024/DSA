class Solution {
    map<string, int> mpp;
    vector<vector<string>> ans;
    string b;

private:
    void dfs(string word, vector<string>& seq) {
        if(word == b) {
            reverse(seq.begin(), seq.end());
            ans.push_back(seq);
            reverse(seq.begin(), seq.end());
            return;
        }

        int steps = mpp[word];
        int sz = word.size();

        for(int i = 0; i < sz; i++) {
            char original = word[i];

            for(char ch = 'a'; ch <= 'z'; ch++) {
                word[i] = ch;

                if(mpp.find(word) != mpp.end() && mpp[word] + 1 == steps) {
                    seq.push_back(word);
                    dfs(word, seq);
                    seq.pop_back();
                }
            }

            word[i] = original;
        }
    }

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<string> q;

        q.push(beginWord);
        st.erase(beginWord);

        b = beginWord;
        mpp[beginWord] = 0;

        int sz = beginWord.size();

        // Step 1:  storing in map
        while(!q.empty()) {
            string word = q.front();
            int lvl = mpp[word];
            q.pop();

            if(word == endWord) break;

            for(int i = 0; i < sz; i++) {
                char original = word[i];

                for(char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;

                    if(st.count(word)) {
                        q.push(word);
                        st.erase(word);
                        mpp[word] = lvl + 1;
                    }
                }

                word[i] = original;
            }
        }

        // Step 2: doing dfs from back and coming to front to find the path 
        if(mpp.find(endWord) != mpp.end()) {
            vector<string> seq;
            seq.push_back(endWord);
            dfs(endWord, seq);
        }

        return ans;
    }
};