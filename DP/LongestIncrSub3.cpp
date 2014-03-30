/*
 * =====================================================================================
 *       Filename : LongestIncrSub3.cpp
 *    Description : longtest increasing subquence
 *    Version     : 0.4
 *        Created : 03/30/14 05:53
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000+1;
int a[MAXN], dp[MAXN], preindex[MAXN];

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  prinsub
 *  Description:  print subsequence
 * =====================================================================================
 */
	void
prinsub ( int End )
{
//	if ( -1 == End ) {
//		return;
//	}
//	prinsub(preindex[End]);
//	if ( -1 != preindex[End] ) {
//		printf ( " " );
//	}
//	printf ( "%d", a[End] );
	if ( -1 != preindex[End] ) {
		prinsub(preindex[End]);
		printf ( " " );
	}
	printf ( "%d", a[End] );
	return ;
}		/* -----  end of function prinsub  ----- */


	int
main ( int argc, char *argv[] )
{
//	freopen("LongestIncrSub.txt", "r", stdin);
	int n;
	while ( ~scanf("%d", &n) ) {
		int i, j;
		fill(dp, dp + n, 1);
		fill(preindex, preindex + n, -1);
		for ( i = 0; i < n; ++i ) {
			scanf("%d", a+i);
		}
		for ( i = 0; i < n; ++i ) {
			for ( j = 0; j < i; ++j ) {
				if ( a[j] < a[i] ) {
					if ( dp[i] < dp[j] + 1 ) {
						dp[i] = dp[j] + 1;
						preindex[i] = j;
					}
//					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
		}
		int result = 1, End = 0;
		for ( i = 0; i < n; ++i ) {
			if ( result < dp[i] ) {
				result = dp[i];
				End = i;
			}
//			result = max(result, dp[i]);
		}
		printf ( "%d\n", result );
		prinsub(End);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

