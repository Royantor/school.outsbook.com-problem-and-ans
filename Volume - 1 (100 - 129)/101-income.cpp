/*
Income

Time Limit: 1 sec

 

The Problem

A persons's daily income is X taka. What is her income in one year.

 

Example:

if X = 216 then

In one year the income of the person is 78840 taka. 

 



 

The Input

The input file contains one integer number X (X<=300).

 

The Output

Output will show the one integer numbers in a separate line.

 

Sample Input

216 

 

Sample Output

78840
*/

#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b=a*365;
	cout<<b;
}
