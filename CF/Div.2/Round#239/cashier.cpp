/*
 * =====================================================================================
 *       Filename : cashier.cpp
 *    Description : cash
 *    Version     : 0.1
 *        Created : 03/30/14 15:03
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std; 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	
#ifndef  ONLINE_JUDGE
	freopen("cashier.txt", "r", stdin);
#endif     /* -----  not ONLINE_JUDGE  ----- */
	int n;
	int k[101] ;
	int i, j;
	while ( ~scanf("%d", &n) ) {
		for ( i = 0; i < n; ++i ) {
			scanf ( "%d", &k[i] );
		}
		int result = 1 << 30, tmp, sum;
		for ( i = 0; i < n; ++i ) {
			sum = 0;
			for ( j = 0; j < k[i]; ++j ) {
				scanf ( "%d", &tmp );
				sum += tmp * 5;
			}
			sum += (k[i] * 15);
			result = min(sum, result);
		}
		printf ( "%d\n", result );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

