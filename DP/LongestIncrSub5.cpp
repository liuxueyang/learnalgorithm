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
	for ( int i = 0; i < n; ++i ) {
		if ( v[i] > s.back() ) {
			s.push_back(v[i]);
		}
		else {
			*lower_bound(s.begin(), s.end(), v[i]) = v[i];
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
	while ( ~scanf("%d", &n) ) {
		vector<int> v;
		int tmp;
		for ( int i = 0; i < n; ++i ) {
			scanf ( "%d", &tmp );
			v.push_back(tmp);
		}
		printf ( "%d\n", LIS(v, n) );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

