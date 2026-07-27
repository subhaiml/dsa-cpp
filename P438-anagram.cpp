class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> recipe(26,0);
        vector<int> cart(26,0);
        for(int i=0;i<p.length();i++){
            recipe[p[i]-'a']++;
        }int pLen = p.length();
        int sLen = s.length();

        for (int r = 0; r < sLen; r++) {
            cart[s[r] - 'a']++;

            if (r >= pLen) {
                cart[s[r - pLen] - 'a']--;
            }

            if (cart == recipe) {
                ans.push_back(r - pLen + 1);
            }
        }

        return ans;
    }
};
