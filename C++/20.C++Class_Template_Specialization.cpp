/*
You are given a main function which reads the enumeration values for two different types as input, then prints out the corresponding enumeration names. Write a class template that can provide the names of the enumeration values for both types. If the enumeration value is not valid, then print unknown.

Input Format

The first line contains , the number of test cases.
Each of the  subsequent lines contains two space-separated integers. The first integer is a color value, , and the second integer is a fruit value, .

Constraints

Output Format

The locked stub code in your editor prints  lines containing the color name and the fruit name corresponding to the input enumeration index.

Sample Input

2
1 0
3 3
Sample Output

green apple
unknown unknown
Explanation:

Since t=2, there are two lines of output.

The two input index values 1,  and 0, correspond to green in the color enumeration and apple in the fruit enumeration. Thus, we print green apple.
The two input values 3,  and 3, are outside of the range of our enums. Thus, we print unknown unknown.

 */


#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template <> 
struct Traits<Fruit>{
    static string name(int index){
        switch(index){
                case 0:return "apple";
                case 1: return "orange" ;
                case 2: return "pear";
        }  
        return "unknown";
    } 
};
template <> 
struct Traits<Color>{
    static string name(int index){
        switch(index){
                case 0:return "red";
                case 1: return "green" ;
                case 2: return "orange";           
        }
        return "unknown";  
    } 
};


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}


