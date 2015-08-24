#include <string>
#include <unordered_set>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool helper(string s, unordered_set<string>& wordDict, 
                unordered_map<string, bool>& record) {
        if(s == "")
            return false;
        if(wordDict.find(s) != wordDict.end())
            return true;
        for(int i=0; i<s.size(); i++) {
            string left_half = s.substr(0,i);
            string right_half = s.substr(i,s.size()-i);
            bool left_ok = false, right_ok = false;
            if(record.find(left_half) != record.end()) {
                left_ok = record[left_half];
            }
            else {
                left_ok = helper(left_half, wordDict, record);
                record[left_half] = left_ok;
            }
            if(!left_ok)
                continue;
            if(record.find(right_half) != record.end()) {
                right_ok = record[right_half];
            }
            else {
                right_ok = helper(right_half, wordDict, record);
                record[right_half] = right_ok;
            }
            if(!right_ok)
                continue;
            if(left_ok && right_ok) {
                return true;
            }
        }
        return false;
    }

    bool wordBreak(string s, unordered_set<string>& wordDict) {
        unordered_map<string, bool> record;
        return helper(s, wordDict, record);
    }
};

int main() {
    unordered_set<string> wdict;
    wdict.insert("a");
    Solution sol;
    cout << sol.wordBreak("a", wdict) << endl;
}
