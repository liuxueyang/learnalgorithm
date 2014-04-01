/*
 * =====================================================================================
 *       Filename : NPartition.cpp
 *    Description : calculate n partitions
 *    Version     : 0.1
 *        Created : 04/01/14 15:28
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int f[101][101];
	int n;
	scanf ( "%d", &n );
	for ( int i = 0; i <= n; ++i ) {
		for ( int j = 0; j <= n; ++j ) {
			f[i][j] = 0;
		}
	}
	for ( int i = 1; i <= n; ++i ) {
		f[0][i] = 1;;
		for ( int j = 1; j <= n; ++j ) {
			if ( i >= j ) {
				f[i][j] = f[i][j-1] + f[i-j][j];
			}
			else {
				f[i][j] = f[i][i];
			}
		}
	}
	printf ( "%d\n", f[n][n] );

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
