class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(),wordList.end());

        queue<pair<string,int>> q;
        q.push({beginWord,1});
        words.erase(beginWord);

        while(!q.empty()){
            string word = q.front().first;
            int step = q.front().second;
            q.pop();

            if(word == endWord) return step;

            for(int i = 0; i < word.size();i++){
                char original = word[i];
                for(char ch = 'a'; ch <= 'z'; ch++){
                    word[i] = ch;

                    if(words.find(word) != words.end()){
                        words.erase(word);
                        q.push({word,step+1});
                    }
                }
                word[i] = original;
            }
        }
        return  0;
    }
};
