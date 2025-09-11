class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int>sadusers;

        for(auto& friends:friendships){
            int u = friends[0]-1;
            int v = friends[1]-1;

            unordered_set<int>lang_set(begin(languages[u]),end(languages[u]));
            bool canttalk = false;
            for(int lang:languages[v]){
                if(lang_set.count(lang)){
                    canttalk = true;
                    break;
                }
            }
            if(!canttalk){
                sadusers.insert(u);
                sadusers.insert(v);
            }
        }
        vector<int>language(n+1,0);
        int most_used_lang = 0;

        for(int users:sadusers){
            for(int lang:languages[users]){
                language[lang]++;
                most_used_lang = max(most_used_lang,language[lang]);
            }
        }
        return sadusers.size() - most_used_lang;
    }
};