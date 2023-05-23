/*
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/

#include<iostream>
using namespace std;
int main(){
    int r,n ;
    cin>>n;
    r = n;

    for(int i=1;i<=n;i++)
    {
        int nx=i;
        int m;
        for(int j=1;j<=n*2-1;j++)
        {
            if(j<=r)
            {
                if(j<=n-i)
                {
                    cout<<" ";
                }
                else if(j>n-i && j<=n)
                {
                    cout<<nx;
                    m = nx;
                    nx++;
                }
                else if(j>n)
                {
                    m--;
                    cout<<m;
                }
            }
        }
        r++;
        cout<<endl;
    }
return 0;
}