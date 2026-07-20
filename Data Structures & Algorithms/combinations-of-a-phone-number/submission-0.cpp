class Solution {
private:
    void backtrack(int index, string current, const string& digits, 
                   const unordered_map<char, string>& phoneMap, vector<string>& result){
        if (index==digits.length()){
            result.push_back(current);
            return;
        }
        string possibleLetters=phoneMap.at(digits[index]);
        for (char letter:possibleLetters){
            backtrack(index + 1, current + letter, digits, phoneMap, result);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<char, string> phoneMap = {
            {'2',"abc"},{'3',"def"}, {'4',"ghi"},
            {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},
            {'8',"tuv"},{'9',"wxyz"}
        };

        vector<string>result;
        backtrack(0, "",digits,phoneMap,result);
        return result;
    }
};