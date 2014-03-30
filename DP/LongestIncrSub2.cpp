/*
 * =====================================================================================
 *       Filename : LongestIncrSub2.cpp
 *    Description : A better solution
 *    Version     : algorithm of O(nlogn)
 *        Created : 03/22/14 22:37
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

const int MAXN = 1001;
int a[MAXN], dp[MAXN], position[MAXN], sub[MAXN];
int i, n, result;

	int
main ( int argc, char *argv[] )
{
	
#ifndef  ONLINE_JUDGE
//	freopen("LongestIncrSub.txt", "r", stdin);
#endif     /* -----  not ONLINE_JUDGE  ----- */
	while ( ~scanf("%d", &n) ) {
		fill(dp, dp + n, INT_MAX);
		for ( i = 0; i < n; ++i ) {
			scanf ( "%d", &a[i] );
		}
		int *tmp;
		for ( i = 0; i < n; ++i ) {
			tmp = lower_bound(dp, dp + n, a[i]);
			position[i] = tmp - dp;
			*tmp = a[i];
		}
		result = lower_bound(dp, dp + n, INT_MAX) - dp;
		printf ( "%d\n", result );
		int t = result - 1;
		for ( i = n - 1; i >= 0; --i ) {
			if ( t == position[i] ) {
				sub[t] = a[i];
				--t;
			}
		}
		for ( i = 0; i < result; ++i ) {
			if ( i ) {
				printf ( " " );
			}
			printf ( "%d", sub[i] );
		}
		printf ( "\n" );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

