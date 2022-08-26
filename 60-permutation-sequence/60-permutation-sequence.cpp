class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        vector<string> ans ;
        for(int  i = 1; i<=n; i++)
        {
            s.append(to_string(i));
        }
        
        sort(s.begin(), s.end());
        do{
            ans.push_back(s);
        }
        while((next_permutation(s.begin(), s.end())));
        
        return ans[k-1];
        
        
    }
};