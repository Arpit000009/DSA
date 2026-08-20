class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0){
            return {};
        }
        sort(changed.begin(),changed.end());
        int n = changed.size();
        map<int,int>mpp;

        for(int i=0;i<n;i++){
            mpp[changed[i]]++;
        }
        vector<int>vec;
       
       for(int num:changed){
        int twice = num *2;
        if(mpp[num]==0) continue;

        if(mpp.find(twice)==mpp.end() || mpp[twice]==0){
            return {};
        }

        vec.push_back(num);
        mpp[num]--;
        mpp[twice]--;
       }
        return vec;
    }
};