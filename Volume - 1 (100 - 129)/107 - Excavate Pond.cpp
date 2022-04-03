/*
The Problem

X persons need D1 days to excavate a pond. How many additional persons must be employed if the pond is to be excavated in D2 days ?

 

Example:

if X = 200, D1 = 15 and D2 = 10 then

100 additional persons must be employed.

 



 

The Input

The input file contains only 3 integer numbers X , D1 and D2 (X<=1000, D1<=365, D2<=365 and D2 < D1).

 

The Output

Output will show the one integer number which is additional persons must be employed in a separate line.

 

Sample Input

200 15 10

 

Sample Output

100

 
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d=((a*b)/c)-a;

	cout<<d;
}

