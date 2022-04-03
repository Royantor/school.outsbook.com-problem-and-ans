/*
The Problem

The population of Barahatia village is X. P% of the population of that village is educated. Find the number of educated persons.

 

Example:

if X = 1280, and P = 40 then

512 persons are educated.

 



 

 

The Input

The input file contains only 2 integer numbers X, P (X < 10000, P<=100).

 

The Output

Output will show the one integer numbers which is educated persons in the village in a separate line.

 

Sample Input

1280 40

 

Sample Output

512
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int x=a*b/100;
	cout<<x;
}

