#include <iostream>
using namespace std;

class Solution {
public:
    bool checkEqual(int a[26], int b[26]) {
        for(int i =0; i< 26; i++) {
            if(a[i] != b[i]) {
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {

        // base case 
        if(s1.length() > s2.length()) {
            return false;
        }
  
    // char count frequency of p
     int arr2[26] = {0};
       for(int i = 0; i < s1.length(); i++) {
           int index = s1[i] - 'a';
           arr2[index]++;
       }

        for(int x = 0; x < s2.length() - s1.length() + 1; x++) {
            string temp = "";
            int strSize = s1.length();
            temp = s2.substr(x, strSize); 
            int arr1[26] = {0};
            for(int j = 0; j < strSize; j++) {
                int index = temp[j] - 'a';
                arr1[index]++;
           if(checkEqual(arr1, arr2)) {
             return true;
           } 
         }
        }
     return false;    
    }
};

int main() {

  return 0;
}
