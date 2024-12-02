class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int word_count = 1;
        int n = sentence.size();
        int m = searchWord.size();
        int i = 0;
        int j = 0;

        while(i<n){

            if(i<n and j<m and sentence[i]==searchWord[j]){

                while(i<n and j<m and sentence[i]==searchWord[j]){
                    i++;
                    j++;
                }

                if(j>=m){
                    return word_count;
                } else{
                    while(i<n and sentence[i]!=' '){
                        i++;
                    }

                    j = 0;
                }
            } else {
                while(i<n and sentence[i]!=' ') {
                    i++;
                }
            }

            i++;
            word_count++;
        }

        return -1;
    }
};