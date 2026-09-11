class Solution {
public:
    string reverseWords(string s) {

    stringstream ss(s);
    string word;                        //temporary storage space for s string 
    vector<string> words;               //permanent storage for s string 


    while(ss >> word) {
        words.push_back(word);
        }   

    string result = "";

    for(int i = words.size() - 1; i >= 0; i--) {
        result += words[i];

        if(i != 0) {
            result += " ";
        }
    }  
    return result;   
    }
};