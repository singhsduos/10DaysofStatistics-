/*Objective
In this challenge, we practice calculating standard deviation. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given an array X , of N integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of  decimal place (i.e.,  format). An error margin of  will be tolerated for the standard deviation.

Input Format

The first line contains an integer, , denoting the number of elements in the array.
The second line contains  space-separated integers describing the respective elements of the array.

Constraints

, where  is the  element of array .
Output Format

Print the standard deviation on a new line, rounded to a scale of  decimal place (i.e.,  format).

Sample Input

5
10 40 30 50 20
Sample Output

14.1
Explanation

First, we find the mean:
Next, we calculate the squared distance from the mean, , for each :

Now we can compute , so:

Once rounded to a scale of 1 decimal place, our result is 14.1.
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    float mean,sum=0.0,nsum=0.0,SD;
    for(i=0;i<n;i++){
    sum+=a[i];}
    mean=sum/n;
     
    for(i=0;i<n;i++)
    nsum += pow(a[i] - mean, 2);
    nsum=nsum/n;
    SD = sqrt(nsum);
    cout<<fixed<<setprecision(1)<<SD<<endl;   
    return 0;
}
