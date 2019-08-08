class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.length()) return 0;
        set<char> letters;
        for(int i = 0; i < needle.length(); i++) {
            letters.insert(needle[i]);
        }

        for(int i = 0; i < haystack.length(); i++) {
            for(int j = 0; j < needle.length(); j++) {
                if(haystack[i+j] != needle[j]) {
                    if(!letters.count(haystack[i+j])) {
                        i = i + j;
                    }
                    break;
                }
                if(j == needle.length() - 1) return i;
            }
        }

        return -1;
    }
};
