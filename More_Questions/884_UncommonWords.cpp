class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {              
        vector<string> result;
        unordered_map<string, int> feqTable;                                 //UNORDERED_MAP WHICH WILL STORE THE OCCURENCE OF A WORD AND ITS FREQUENCY
        string word;                                                          
        stringstream ss(s1);                                                 // STRINGSTREAM LIBRARY WHICH CONVERTS THE S1 STRING TO STREAM OF WORDS
        while (ss >> word) {                                                 //BY DEFAULT THE SS WILL SPLIT BASED ON WHITESPACES AND STORE IT INTO WORD
            feqTable[word]++;                                                //UPDATES EACH VALUE OF WORD BY ONE
        }
        stringstream ss1(s2);
        while (ss1 >> word) {
            feqTable[word]++;
        }

        for (auto i : feqTable) {                                            //CHECKS IF ANY VALUE HAS FREQUENCY ONE AND STORES IT INTO RESULT ARRAY
            if (i.second == 1) {
                result.push_back(i.first);
            }
        }
        return result;
    }
};