#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        int num = 23;
        char ans="";
        int i=0;
        while(num){
            while(val[i]<=num){
                
                num -= val[i];
                ans += sym[i];
            }
            i++;
        }
        cout << ans;

    return 0;
}