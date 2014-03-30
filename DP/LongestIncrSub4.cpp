/*
 * =====================================================================================
 *       Filename : LongestIncrSub4.cpp
 *    Description : Longest increasing subsequence
 *    Version     : 0.4
 *        Created : 03/30/14 06:03
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

const int MAXN = 1000+1;
int a[MAXN], dp[MAXN], preindex[MAXN];

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printsub
 *  Description:  print the subsequence
 * =====================================================================================
 */
	void
printsub ( int i )
{
	if ( -1 != i ) {
		printsub(preindex[i]);
		if ( -1 != preindex[i] ) {
			printf ( " " );
		}
		printf ( "%d", a[i] );
	}
	return ;
}		/* -----  end of function printsub  ----- */

	int
main ( int argc, char *argv[] )
{
	int n;
	while ( ~scanf("%d", &n) ) {
		int i, j;
		fill(dp, dp + n, 1);
		fill(preindex, preindex + n, -1);
		for ( i = 0; i < n; ++i ) {
			scanf ( "%d", &a[i] );
		}
		for ( i = 0; i < n; ++i ) {
			for ( j = i + 1; j < n; ++j ) {
				if ( a[i] < a[j] ) {
					if ( dp[j] < dp[i] + 1 ) {
						dp[j] =dp[i] + 1;
						preindex[j] =i;
					}
				}
			}
		}
		int result = 1, End = -1;
		for ( i = 0; i < n; ++i ) {
			if ( result < dp[i] ) {
				result = dp[i];
				End = i;
			}
		}
		printf ( "%d\n", result );
		printsub(End);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

