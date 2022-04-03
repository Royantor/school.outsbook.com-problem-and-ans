/*
The Problem

 A book is bought for X taka and sold for Y taka. What is the percentage loss ?

[Note: here X > Y]

 

Example:

if X = 50, and Y = 46 then

The percentage loss is 8 taka.

 



 

 

The Input

The input file contains only 2 integer numbers X, Y (Y < 10000 <= X <= 30000).

 

The Output

Output will show the one integer numbers which is loss percentage in a separate line.

 

Sample Input

50 46

 

Sample Output

8 

*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int c=a-b;
	int x=c*100/a;
	cout<<x;
}



