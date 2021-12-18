
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Solution {
  
    public:
        bool isPalindrome(int num);
};

/**
 * A brief description of function isPalindrome. 
'* @param int num -  input num 
 * @return true if it is palindrome else it return false
 */
bool Solution::isPalindrome(int num) {
    unsigned long int rem = 0,rev = 0,temp =num;
            
    if (num < 0)
        return false;
            
    while(num != 0){
        rem = num % 10;
        rev = rev*10 + rem;
        num /= 10;
        }
        
    return ((rev == temp) ? true:false);
}

int main() {
    int num = 0;
    bool ret = false;
    std::cout << "Enter the number"<<endl;
    cin>>num;
    Solution obj;
    ret = obj.isPalindrome(num);
    if(ret != 0)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}