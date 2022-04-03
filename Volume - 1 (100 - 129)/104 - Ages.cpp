/*

The Problem

The sum of ages of a father and his daughter is X years. Father's age is four times the age of the daughter. What are their ages ?

 

Example:

if X = 80 then

Father's age is 64 years and daughter's age is 16 years.

 



 

 

The Input

The input file contains only 1 integer number X (X<=10000).

 

The Output

Output will show the two integer numbers first one is father's and second one is daughter's age which is seperate by space in a separate line.

 

Sample Input

80

 

Sample Output

64 16

*/

#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int d=a/5;
	int e=d*4;
	cout<<e<<" "<<d;
	return 0;
}


