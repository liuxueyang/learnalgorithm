/*
 * =====================================================================================
 *       Filename : GenerateSubset.cpp
 *    Description : generate subsets of 1...n
 *    Version     : 0.1
 *        Created : 04/11/14 18:50
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  generatesubset
 *  Description:  backtrack solution
 * =====================================================================================
 */
	void
generatesubset ( int a[], int k, int n )
{
	if ( k == n ) {
		for ( int i = 1; i <= k; ++i ) {
			if ( a[i] ) {
				printf ( "%d ", i );
			}
		}
		printf ( "\n" );
	}
	else {
		k = k + 1;
		int c[2];
		c[0] = 0; c[1] = 1;
		for ( int i = 0; i < 2; ++i ) {
			a[k] = c[i];
			generatesubset(a, k, n);
		}
	}
	return ;
}		/* -----  end of function generatesubset  ----- */

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
		generatesubset(a, 0, n);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

