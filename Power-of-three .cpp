Power of Three
easy
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Swapnil is challenged to build a tower of height greater than or equal to N. To build the tower he is given blocks of heights which are powers of 3. He can only use one type of block only once and is given infinite types of blocks. Help him make a tower of minimum height just greater than or equal to N.
Input
The first line of the input contains one integer T the number of tests. Then T test cases follow.
Each test case contains a single integer N.

Constraints:-
1 ≤ t ≤ 100
0 ≤ N ≤ 1e18 (10 to the power 18)
Output
For each testcase, print height of minimum possible tower greater than equal to N.
Example
Sample Input
5
1
8
4
6
5

Sample Output
1
9
4
9
9

Explanation:
N=1 => use one brick of height 30
N=8 => use one brick of height 32
N=4 => use two bricks of heights 30 and 31
N=6 => use one brick of height 32 . We can not use 2 bricks of same type so can't use two bricks of height 31.
  
  #include "bits/stdc++.h"

#pragma GCC optimize "03"

using namespace std;

 

#define int long long int

#define ld long double

#define pi pair<int, int>

#define pb push_back

#define fi first

#define se second

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#ifndef LOCAL

#define endl '\n'

#endif

 

const int N = 2e5 + 5;

const int mod = 1e9 + 7;

const int inf = 1e9 + 9;



int p[N], s[N];



int f(int x){

	if(x <= 0)

		return 0;

	int ans = 0;

	for(int i = 0; i <= 39; i++){

		if(s[i] >= x){

			ans = p[i] + f(x-p[i]);

			break;

		}

	}

	return ans;

}



signed main() {

	IOS;

	int t;	cin >> t;

	p[0] = s[0] = 1;

	for(int i = 1; i <= 39; i++){

		p[i] = 3*p[i-1];

		s[i] = s[i-1] + p[i];

	}

	while(t--){

		int n;	cin >> n;

		cout << f(n) << endl;

	}	

	return 0;

}
