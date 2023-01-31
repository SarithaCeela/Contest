Number of unique ways
easy
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Find number of ways an integer N can be represented as a sum of unique natural numbers.
Input
First line contain an integer T denoting number of test cases. Each test case contains a single integer N.

Constraint:-
1 <= T <= 100
0 <= N <= 120
Output
Print a single integer containing number of ways.
Example
Sample input
4
6
1
4
2

Sample output:-
4
1
2
1

Explanation:-
TestCase1:-
6 can be represented as (1, 2, 3), (1, 5), (2, 4), (6)
  
  #include <bits/stdc++.h>



using namespace std;

long   cnt=0;

int j;

void sum(int X,int j) {

if(X==0){cnt++;}

 if(X<0)

 {return;}

 else {

     for(int i=j;i<=(X);i++){

       X=X-i;

       sum(X,i+1);

       X=X+i;

       



     }

 }





}



int main(){

int t;

cin>>t;

while(t--){

int n;

cin>>n;

if(n<1){cout<<0<<endl;continue;}

sum(n,1);

cout<<cnt<<endl;

cnt=0;

}

}
