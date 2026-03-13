class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while(!q.empty()) {
            string word = q.front().first;
            int length = q.front().second;
            q.pop();
            if(word == endWord) return length;

            for(int i = 0; i < word.size(); i++) {
                char original = word[i];
                for(char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;
                    if(st.find(word) != st.end()) {
                        q.push({word, length+1});
                        st.erase(word);
                    }
                }
                word[i] = original;
            }
        }
        return 0;
    }
}; 

// time : O(word.size() * 26 * N * 1 if unorderedSet or log N id set)
// space : O(N)