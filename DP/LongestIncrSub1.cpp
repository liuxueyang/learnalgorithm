/*
 * =====================================================================================
 *       Filename : LongestIncrSub1.cpp
 *    Description : O(n^2)
 *    Version     : a better Algorithm of O(n^2)
 *        Created : 03/22/14 22:03
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <climits>
#include <cstdlib>

const int MAXN = 1001;
int dp[MAXN], a[MAXN];
int n, i, j;

	int
main ( int argc, char *argv[] )
{
	
#ifndef  ONLINE_JUDGE
	freopen("LongestIncrSub.txt", "r", stdin);
#endif     /* -----  not ONLINE_JUDGE  ----- */

	while ( ~scanf("%d", &n) ) {
		
		for ( i = 0; i < n; ++i ) {
			scanf ( "%d", &a[i] );
			dp[i] = INT_MAX;
		}
		for ( i = 0; i < n; ++i ) {
			for ( j = 0; j < n; ++j ) {
				if ( j == 0 || dp[j-1] < a[i] ) {
					if ( dp[j] > a[i] ) {
						dp[j] = a[i];
					}
				}
			}
		}
		int result = 1;
		for ( j = n - 1; j >= 0; --j ) {
			if ( dp[j] != INT_MAX ) {
				result = j + 1;
				break;
			}
		}
		printf ( "%d\n", result );
	}
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

