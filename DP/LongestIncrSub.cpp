/*
 * =====================================================================================
 *       Filename : LongestIncrSub.cpp
 *    Description : O(n^2)
 *    Version     : Algorithm of O(n * n)
 *        Created : 03/22/14 20:20
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

const int MAXN = 1001;
int dp[MAXN], a[MAXN];
	int
main ( int argc, char *argv[] )
{
	int result, n;

#ifndef  ONLINE_JUDGE
		freopen("LongestIncrSub.txt", "r", stdin);
#endif     /* -----  not ONLINE_JUDGE  ----- */
	while ( ~scanf("%d", &n) ) {
		for ( int i = 0; i < n; ++i ) {
			scanf ( "%d", &a[i] );
		}
		result = 1;
		for ( int i = 0; i < n; ++i ) {
			dp[i] = 1;
			for ( int j = 0; j < i; ++j ) {
				if ( a[j] < a[i] ) {
					if ( dp[i] < dp[j] + 1 ) {
						dp[i] = dp[j] + 1;
					}
				}
			}
			if ( result < dp[i] ) {
				result = dp[i];
			}
		}
		printf ( "%d\n", result );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

