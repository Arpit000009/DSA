class Solution {
public:

    void phone(string digits,string arr[],string output,vector<string>&vec,int index){
        if(index==digits.size()){
            vec.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = arr[number];

        for(int i=0;i<value.size();i++){
            output = output + value[i];
            phone(digits,arr,output,vec,index+1);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string arr[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        vector<string>vec;
        phone(digits,arr,output,vec,0);
        return vec;
    }
};