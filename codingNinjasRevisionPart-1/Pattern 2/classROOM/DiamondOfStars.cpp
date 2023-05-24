/*

Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++)
    {
      for(int j=1;j<=(n+1)/2-i;j++)
      {
        cout<<" ";
      }
      for(int j=1;j<=2*i-1;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
   
    for(int i=(n+1)/2-1;i>=1;i--)
    {
      for(int j=1;j<=(n+1)/2-i;j++)
      {
        cout<<" ";
      }
       for(int j=1;j<=2*i-1;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
    
return 0;
}
