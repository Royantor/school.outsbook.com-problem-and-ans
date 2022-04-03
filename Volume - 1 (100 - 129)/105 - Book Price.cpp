/*

The Problem

The price of 7 books is X taka, what is the price of M books ?

 

Example:

if X = 623 and M = 15 then

price of 15 books is 1335.

 



 

The Input

The input file contains only 2 integer numbers X and M (X<=10000 and M<30).

 

The Output

Output will show the one integer number which is the price of M book in a separate line.

 

Sample Input

623 15

 

Sample Output

1335

*/


#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int d=(a/7)*b;
    cout<<d;
	return 0;
}
