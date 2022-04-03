/*
The Problem

The ages of Maria, Mithun, Mac, Moni and Mala are respectively Y1, Y2, Y3, Y4 and Y5 years. What is their average age ?

 

Example:

if Y1 = 10, Y2 = 12, Y3 = 13, Y4 = 11 and Y5 = 14 years then

Average age is 12 years.

 



 

The Input

The input file contains only 5 integer numbers Y1, Y2, Y3, Y4 and Y5 (Y1, Y2, Y3, Y4, Y5<=30).

 

The Output

Output will show the one integer number which is the average age in a separate line.

 

Sample Input

10 12 13 11 14

 

Sample Output

12
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int f=(a+b+c+d+e)/5;
	cout<<f;
}

