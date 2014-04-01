/*
 * =====================================================================================
 *       Filename : N2MPartion.cpp
 *    Description : part n to m partitions or less
 *    Version     : 0.1
 *        Created : 04/01/14 15:38
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int f[101][101];
	int n, m;
	scanf ( "%d%d", &n, &m );
	memset(f, 0, sizeof(f));
	for ( int i = 1; i <= n; ++i ) {
		f[0][i] = 1;
		for ( int j = 1; j <= m; ++j ) {
			if ( i >= j ) {
				f[i][j] = f[i-j][j] + f[i][j-1];
			}
			else {
				f[i][j] = f[i][i];
			}
		}
	}
	printf ( "%d\n", f[n][m] );

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

