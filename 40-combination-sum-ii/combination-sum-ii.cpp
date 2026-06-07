class Solution {
public:

    void func(vector<int>& arr,
              int index,
              int target,
              vector<int>& ans,
              vector<vector<int>>& res) {

        if(target == 0) {
            res.push_back(ans);
            return;
        }

        for(int i=index; i<arr.size(); i++) {

            if(i > index && arr[i] == arr[i-1])
                continue;

            if(arr[i] > target)
                break;

            ans.push_back(arr[i]);

            func(arr, i+1, target-arr[i], ans, res);

            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                        int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> ans;

        func(candidates, 0, target, ans, res);

        return res;
    }
};