/*
The Problem

The rate of interest is P% per annum. What is the interest on X taka for Y years ?

 

Example:

if P = 7, X = 800, and Y = 5 then

The interest is 280 taka.

 



 

 

The Input

The input file contains only 3 integer numbers P, X, Y (P < 100, X < 10000, Y < 30).

 

The Output

Output will show the one integer numbers which is the interest in a separate line.

 

Sample Input

7 800 5

 

Sample Output

280
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int x=(a*b*c)/100;
	cout<<x;
}

