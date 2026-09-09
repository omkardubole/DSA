class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int s_0 = 0;
        int s_1 = 0;

        for(int x : students) {
            if(x == 0)
                s_0++;
            else
                s_1++;
        }

        for(int k = 0; k < sandwiches.size(); k++) {

            if(sandwiches[k] == 0) {

                if(s_0 == 0) {
                    return sandwiches.size() - k;
                }
                else {
                      s_0--;
                }
                    
            }

            else {

                if(s_1 == 0) {
                    return sandwiches.size() - k;
                }
                else {
                     s_1--;
                }
                    
            }
        }

        return 0;
    }
};