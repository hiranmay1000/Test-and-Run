#include <iostream>
#include <string>
#include <unordered_map>

std::string longestSubstringWithoutRepeatingChars(std::string s) {
    std::unordered_map<char, int> charToIndex;
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int maxStart = 0;
    int maxEnd = 0;
    for (int i = 0; i < s.length(); i++) {
        if (charToIndex.count(s[i]) && charToIndex[s[i]] >= start) {
            if (end - start > maxLength) {
                maxLength = end - start;
                maxStart = start;
                maxEnd = end;
            }
            start = charToIndex[s[i]] + 1;
        }
        charToIndex[s[i]] = i;
        end = i + 1;
    }
    if (end - start > maxLength) {
        maxStart = start;
        maxEnd = end;
    }
    return s.substr(maxStart, maxEnd - maxStart);
}

int main() {
    std::string s = "abcabcbb";
    std::cout << longestSubstringWithoutRepeatingChars(s) << std::endl;
    return 0;
}