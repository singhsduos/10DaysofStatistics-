 /*Objective
In this challenge, we practice calculating quartiles. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given an array, a, of n integers, calculate the respective first quartile (), second quartile (), and third quartile (). It is guaranteed that , , and  are integers.

Input Format

The first line contains an integer,n , denoting the number of elements in the array.
The second line contains  space-separated integers describing the array's elements.


Output Format:

Print  lines of output in the following order:

The first line should be the value of q1.
The second line should be the value of q2.
The third line should be the value of q3.
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    cin>>a[i];
    
    sort(a, a+n);
    int q1, q2, q3;
    if (n&1)
    {    
        int k = n/2;
        q2 = a[k];
        if ((k) & 1)
        {
            q1 = a[k];
            q3 = a[3*k/2];
        }
        else
        {  
            q1 = (a[k/2] + a[k/2 - 1]) / 2;
            q3 = (a[3*k/2] + a[3*k/2 + 1]) / 2;
        }
    }
    else
    {   
        int l = n/2;
        q2 = (a[l] + a[l - 1]) / 2;
        if ((l) & 1)
        {
            q1 = a[l/2];
            q3 = a[3*l/2];
        }
        else
        {
            q1 = (a[l/2] + a[l/2 - 1]) / 2;
            q3 = (a[3*l/2] + a[3*l/2 - 1]) / 2;
        }
    }
    cout<<q1<<"\n"<<q2<<"\n"<<q3;
    return 0;
}
