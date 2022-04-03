/*
 
 The Problem

In a division problem, the divisor is D, the quotient is Q and the remainder is one-third of the divisor. What is the dividend ?

 

Example:

if D = 3 and Q = 5 then

Dividend is 16

 



 

The Input

The input file contains only 2 integer numbers D, and Q (D<=4000, Q<100).

 

The Output

Output will show the one integer numbers in a separate line.

 

Sample Input

3 5

 

Sample Output

16

*/


#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int d=(a*b)+(a/3);

	cout<<d;
}
