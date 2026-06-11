class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        for(int i=1;i<n;i++){
            fact = fact*i;
        }

        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        k--;
        string s = "";
        while(true){
            s = s + to_string(arr[k/fact]);
            arr.erase(arr.begin()+k/fact);
            if(arr.empty()){
                break;
            }
            k = k%fact;
            fact = fact/arr.size();
        }
        return s;
    }
};