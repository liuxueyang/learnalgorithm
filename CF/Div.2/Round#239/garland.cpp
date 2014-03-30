/*
 * =====================================================================================
 *       Filename : garland.cpp
 *    Description : garland
 *    Version     : 0.1
 *        Created : 03/30/14 15:22
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

	int
main ( int argc, char *argv[] )
{
#ifndef  ONLINE_JUDGE
	freopen("garland.txt", "r", stdin);
#else      /* -----  not ONLINE_JUDGE  ----- */
#endif     /* -----  not ONLINE_JUDGE  ----- */
	char a[1001], b[1001];
	int A[1001], B[1001];
	while ( ~scanf("%s%s", a, b) ) {
		int i, j;
		fill(A, A + 1000, 0);
		fill(B, B + 1000, 0);
		for ( i = 0; a[i]; ++i ) {
			++A[(int)a[i]];
		}
		for ( i = 0; b[i]; ++i ) {
			++B[(int)b[i]];
		}
		int flag = 1, sum = 0;
		for ( j = (int)'a'; j <= (int)'z'; ++j ) {
			if ( 0 == A[j] && B[j] ) {
				flag = 0; 
				break;
			}
			else if (A[j] > B[j]) {
				sum += B[j];
			}
			else {
				sum += A[j];
			}
		}
		if ( flag ) {
			printf ( "%d\n", sum );
		}
		else {
			printf ( "-1\n" );
		}
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

