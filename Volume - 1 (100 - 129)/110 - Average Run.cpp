/*

The Problem

In a test series of five cricket matches, the average of the runs made by six batsmen of the visiting team was R1; the average of the runs made by four bowlers was R2. What average run did those players make in that series ?

 

Example:

if R1 = 76, and R2 = 21 then

Players of the visiting team made 54 runs on average in that series.

 



 

 

The Input

The input file contains only 2 integer numbers R1 and R2 (R1, R2<=200).

 

The Output

Output will show the integer number which is the average run of visiting team seperate by space in a separate line.

 

Sample Input

76 21

 

Sample Output

54

*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int f=(a*6+b*4)/10;
	cout<<f;
}

