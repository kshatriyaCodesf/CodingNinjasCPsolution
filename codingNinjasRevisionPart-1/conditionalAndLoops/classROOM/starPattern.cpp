/*
Start Pattern
Send Feedback
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r = n;
    for(int i = 1 ;i<=n;i++)
    {
        for(int j=1;j<=n*2-1;j++)
        {
            if(j<=r)
            {
                if(j<=n-i)
                {
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;r++;
    }
return 0;
}