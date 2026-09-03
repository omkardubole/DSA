class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

    int prevDeviceCount = 0;
    int result = 0;
    int n = bank.size();

    for(int i=0; i<n; i++) {
    
    int currDeviceCount = 0;

     for(char &ch : bank[i]) {
        if(ch == '1') {
          currDeviceCount++;  
        }
     }

     result = result + (currDeviceCount * prevDeviceCount);

     if(currDeviceCount != 0) {
        prevDeviceCount = currDeviceCount;
     }
    }
    return result;
    }
};