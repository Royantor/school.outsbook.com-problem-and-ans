/*
The Problem

In a hostel there is food for X students for M days. If Y new students arrive, how long will the food last ?

 

Example:

if X = 40, M = 20 and Y = 10 then

food will last 16 days



The Input

The input file contains only 3 integer numbers X ,M and Y (X<=1000, M<365 and Y<=1000).

 

The Output

Output will show the one integer number which is the days food will last in a separate line.

 

Sample Input

40 20 10

 

Sample Output

16

 
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d=(a*b)/(a+c);
    cout<<d;
	return 0;
}
