/*

Sum of even & odd
Send Feedback
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15

*/
#include<iostream>
using namespace std;
int main(){
    int n, sumEven=0 , sumOdd=0;
    cin>>n;
    while(n!=0)
    {
        int digit = n%10;
        if(digit%2==0)
        sumEven+=digit;

        else
        sumOdd+=digit;

         n/=10;
    }
    cout<<sumEven<<" "<<sumOdd<<endl;
return 0;
}