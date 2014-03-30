/*
 * =====================================================================================
 *       Filename : LongestIncrSub5.cpp
 *    Description : longest increasing subsequence
 *    Version     : 0.5
 *        Created : 03/30/14 09:18
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int position[1000+1], sub[1000+1];
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LIS
 *  Description:  longest increasing subsequence function
 * =====================================================================================
 */
	int
LIS ( vector<int> &v, int n )
{
	vector<int> s;
	s.push_back(v[0]);
	vector<int>::iterator tmp;
	for ( int i = 0; i < n; ++i ) {
		if ( v[i] > s.back() ) {
			s.push_back(v[i]);
			position[i] = s.end() - s.begin() - 1;
//			position[i] = s.size() - 1;
		}
		else {
			tmp = lower_bound(s.begin(), s.end(), v[i]);
			*tmp = v[i];
			position[i] = tmp - s.begin();
		}
	}
	return s.size();
}		/* -----  end of function LIS  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int n;
	freopen("LongestIncrSub.txt", "r", stdin);
	while ( ~scanf("%d", &n) ) {
		vector<int> v;
		int tmp;
		for ( int i = 0; i < n; ++i ) {
			scanf ( "%d", &tmp );
			v.push_back(tmp);
		}
		int result = LIS(v, n);
		printf ( "%d\n", result );
		int t = result - 1;
		for ( int i = n - 1 ; i >= 0; --i ) {
			if ( t == position[i] ) {
				sub[t] = v[i];
				--t;
			}
		}
		for ( int i = 0; i < result; ++i ) {
			if ( i ) {
				printf ( " " );
			}
			printf ( "%d", sub[i] );
		}
		printf ( "\n" );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

