class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>vec;
        for(int i=0;i<m-1;i++){
            string s = ".";
            for(int j = 0;j<n-1;j++){
                s += '#';
            }
            vec.push_back(s);
        }

        string str = "";
        for(int i=0;i<n;i++){
            str += '.';
        }
        vec.push_back(str);

        return vec;
    }
};