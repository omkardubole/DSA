class Solution {
public:

    int romanSym(char symbol) {

        if(symbol == 'I') return 1;
        if(symbol == 'V') return 5;
        if(symbol == 'X') return 10;
        if(symbol == 'L') return 50;
        if(symbol == 'C') return 100;
        if(symbol == 'D') return 500;
        if(symbol == 'M') return 1000;

        return 0;
    }

    int romanToInt(string s) {

        int n = s.size();
        int result = 0;

        for(int i = 0; i < n; i++) {

            int current = romanSym(s[i]);

            if(i + 1 < n && current < romanSym(s[i + 1])) {
                result -= current;
            }
            else {
                result += current;
            }
        }

        return result;
    }
};