class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string item;
       int index=1;
        while (ss >> item) {
            if(item.find(searchWord)==0){
                return index;
            }
            index++;
        }
      
        return -1;
    }
};