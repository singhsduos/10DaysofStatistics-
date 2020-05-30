/*
 An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

Declaration:

int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.
Accessing elements of an array:

Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]
You'll be given an array of  integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains ,where  is the number of integers.The next line contains  integers separated by a space.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order in a single line separated by a space.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1 
 */


#include <iostream>

using namespace std;


int main() {
    
        int N;
        cin>>N;
        int Arr[N];
        for(int i=0; i<N; i++){
            cin>>Arr[i];
        }

    /* Logic for reversed array */
            for(int i=N-1; i>=0; i--){
            cout<<Arr[i]<<" ";
            }
    
            return 0;
            
}


