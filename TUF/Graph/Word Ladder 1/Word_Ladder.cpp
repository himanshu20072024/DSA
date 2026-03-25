class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string, int> mpp;

        for(auto it: wordList) {
            mpp[it] = 1;
        }

        if(mpp.count(endWord) == 0) return 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while(!q.empty()) {
            auto it =  q.front();
            q.pop();

            string word = it.first;
            
            int length = it.second;

            if(word == endWord) return length;

            
            for(int i = 0; i < word.size(); i++) {
                char original = word[i];
                
                for(char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;
                    if(ch == original) continue;
                    if(mpp.count(word) > 0) {
                        q.push({word, length+1});
                        mpp.erase(word);
                    }
                }
                word[i] = original;
            }
        }

        return 0;
        
    }
};