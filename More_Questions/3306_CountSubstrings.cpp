class Solution {
    public:
        long long atMostK(string word, int k) {
            int length = word.size(), left = 0, consonants = 0;
            long long result = 0;
            map<char, int> vowelCount;
    
            set<char> vowelsSet = {'a', 'e', 'i', 'o', 'u'};
    
            for (int i = 0; i < length; i++) {
    
                if (vowelsSet.count(word[i]))
                    vowelCount[word[i]]++;
                else
                    consonants++;
    
                while (vowelCount.size() == 5 && consonants > k) {
                    if (vowelsSet.count(word[left])) {
                        vowelCount[word[left]]--;
                        if (vowelCount[word[left]] == 0)
                            vowelCount.erase(word[left]);
                    } else
                        consonants--;
                    left++;
                }
    
                result += (i - left + 1);
            }
            return result;
        }
        long long countOfSubstrings(string word, int k) {
            return atMostK(word, k) - atMostK(word, k - 1);
        }
    };