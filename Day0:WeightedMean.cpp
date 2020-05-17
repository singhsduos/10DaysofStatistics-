 /* Objective
 In the previous challenge, we calculated a mean. In this challenge, we practice calculating a weighted mean. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given an array, x, of  integers n  and an array, w, representing the respective weights of 's elements, calculate and print the weighted mean of 's elements. Your answer should be rounded to a scale of  decimal place (i.e.,  format).

Input Format

The first line contains an integer, , denoting the number of elements in arrays  and .
The second line contains  space-separated integers describing the respective elements of array .
The third line contains  space-separated integers describing the respective elements of array .

Constraints

x, where  is the  element of array .
w, where  is the  element of array .
Output Format

Print the weighted mean on a new line. Your answer should be rounded to a scale of  decimal place (i.e.,  format). 
*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main() {
    int n;
    cin>>n;
    int x[n];
    int w[n];
    for(int i=0; i<n; i++){
    cin>>x[i];}
    
    for(int i=0; i<n; i++){
    cin>>w[i];}

    float s=0;
    double a;
    float m = 0;
    
    for(int i=0; i<n; i++){
    m+=x[i]*w[i];
    s+=w[i];}

    a=m/s;

    cout<<fixed<<setprecision(1)<<a<<endl;

    return 0;
}



