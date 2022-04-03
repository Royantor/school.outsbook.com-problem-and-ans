/*
Father Age

Time Limit: 1 sec

The Problem

The average age of two children and their father is X years. The average age of these children and their mother is Y years. Mother's age is M years; what is the father's age?

Example:

if X = 17, Y = 13, and M = 25 then

Father's age is 37 years.


The Input

The input file contains only 3 integer numbers X, Y, M (X, Y, M<=50).

 

The Output

Output will show the one integer numbers which is father's age in a separate line.

 

Sample Input

17 13 25

 

Sample Output

37 


*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d=(b*3)-c;
	int f=(a*3)-d;
	cout<<f;
}
