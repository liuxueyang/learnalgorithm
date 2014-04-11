/*
 * =====================================================================================
 *       Filename : nqueens.cpp
 *    Description : calculate number of solutions of n queens
 *    Version     : 0.1
 *        Created : 04/11/14 20:09
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>

int nSolution = 0;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  nqueens
 *  Description:  backtrack solution
 * =====================================================================================
 */
	void
nqueens ( int a[], int k, int n )
{
	if ( k == n ) {
		nSolution++;
	}
	else {
		k = k + 1;
		int num = 0, c[100], flag = 1;
		memset(c, 0, sizeof(c));
		for ( int i = 1; i <= n; ++i ) {
			flag = 1;
			for ( int j = 1; j < k; ++j ) {
				if ( abs(k - j) == abs(a[j] - i) ) {
					flag = 0;
				}
				if ( a[j] == i ) {
					flag = 0;
				}
			}
			if ( flag ) {
				c[num++] = i;
			}
		}
		for ( int i = 0; i < num; ++i ) {
			a[k] = c[i];
			nqueens(a, k, n);
		}
	}
	return ;
}		/* -----  end of function nqueens  ----- */

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
		nSolution = 0;
		nqueens(a, 0, n);
		printf ( "%d\n", nSolution );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

