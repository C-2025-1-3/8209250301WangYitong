#include <iostream>
using namespace std;

int main() {
    int letter = 0;   
    int space = 0;   
    int digit = 0;    
    int other = 0;    
    char c;           

    while (cin.get(c) && c != '\n') {  
        
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letter++;
        }
       
        else if (c == ' ') {
            space++;
        }
      
        else if (c >= '0' && c <= '9') {
            digit++;
        }
       
        else {
            other++;
        }
    }

   
    cout << "英文字母：" << letter << "个" << endl;
    cout << "空格：" << space << "个" << endl;
    cout << "数字字符：" << digit << "个" << endl;
    cout << "其它字符：" << other << "个" << endl;

    return 0;
}