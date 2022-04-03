/*
The Problem

Mina and Rina together have X taka. Mina has Y taka more than Rina. What amount of money does Mina and Rina each have.

 

Example:

if X = 7532, and Y = 560 then

Mina has 4046 taka and Rina has 3486 taka.

 



 

 

The Input

The input file contains only 2 integer numbers X and Y (X<=10000 and Y<4000).

 

The Output

Output will show the two integer numbers first one is Mina's and second one is Rina's taka which is seperate by space in a separate line.

 

Sample Input

7532 560

 

Sample Output

4046 3486
*/


#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int d=(a-b)/2;
	int e=d+b;
	cout<<e<<" "<<d;
	return 0;
}
