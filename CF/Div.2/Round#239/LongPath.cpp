/*
 * =====================================================================================
 *       Filename : LongPath.cpp
 *    Description : dp
 *    Version     : 0.1
 *        Created : 03/31/14 11:45
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */
int dp[1001], p[1001];
int MOD = 1000000000+7;
	int
main ( int argc, char *argv[] )
{
	int n;
	scanf ( "%d", &n );
	for ( int i = 1; i < n + 1; ++i ) {
		scanf ( "%d", &p[i] );
	}
	fill(dp, dp + n + 1, 0);
	dp[1] = 2;
	for ( int i = 2; i < n + 1; ++i ) {
		dp[i] = 2;
		for ( int j = p[i]; j < i; ++j ) {
			dp[i] += dp[j];
			if ( dp[i] >= MOD ) {
				dp[i] -= MOD;
			}
		}
	}
	int sum = 0;
	for ( int i = 1; i < n + 1; ++i ) {
		sum += dp[i];
		if ( sum >= MOD ) {
			sum -= MOD;
		}
	}
	printf ( "%d\n", sum );

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

