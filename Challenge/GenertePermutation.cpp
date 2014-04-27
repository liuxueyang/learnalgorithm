/*
 * =====================================================================================
 *       Filename : GenertePermutation.cpp
 *    Description : GenertePermutation
 *    Version     : 0.1
 *        Created : 04/11/14 19:17
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstring>
#include <cstdlib>


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  generatepermutation
 *  Description:  backtrack solution to generate permutation of 1..n
 * =====================================================================================
 */
	void
generatepermutation ( int a[], int k, int n )
{
	if ( k == n ) {
		for ( int i = 1; i <= n; ++i ) {
			printf ( "%d ", a[i] );
		}
		printf ( "\n" );
	}
	else {
		k = k + 1;
		int c[100];
		int in_per[100];
		int num = 0;
		memset(c, 0, sizeof(c));
		memset(in_per, 0, sizeof(in_per));
		for ( int i = 1; i < k; ++i ) {
			in_per[a[i]] = 1;
		}
		for ( int i = 1; i <= n; ++i ) {
			if ( !in_per[i] ) {
				c[num++] = i;
			}
		}
		for ( int i = 0; i < num; ++i ) {
			a[k] = c[i];
			generatepermutation(a, k, n);
		}
	}
	return ;
}		/* -----  end of function generatepermutation  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int n;
	int a[100];

	while ( ~scanf("%d", &n) ) {
		generatepermutation(a, 0, n);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

