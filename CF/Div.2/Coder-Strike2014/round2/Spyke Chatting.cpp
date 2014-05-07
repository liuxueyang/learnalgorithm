/*
 * =====================================================================================
 *       Filename : Spyke Chatting.cpp
 *    Description : Spyke chatting implementation
 *    Version     : 0.1
 *        Created : 05/06/14 07:44
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
int a[20001][11], room[11], p[20001];
/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int n, m, k;
	scanf ( "%d %d %d", &n, &m, &k );
	for ( int i = 0; i < n; ++i ) {
		for ( int j= 0; j < m; ++j ) {
			scanf ( "%d", &a[i][j] );
		}
	}
	int person, nroom;
	for ( int i = 0; i < k; ++i ) {
		scanf ( "%d %d", &person, &nroom );
//		p[person-1]++;
		p[person-1]--;
		room[nroom-1]++;
	}
	for ( int i = 0; i < m; ++i ) {
		for ( int j= 0; j < n; ++j ) {
			if ( a[j][i] ) {
				p[j] += room[i];
			}
		}
	}
	for ( int i = 0; i < n; ++i ) {
		printf ( "%d ", p[i] );
	}
//	for ( int i = 0; i < n; ++i ) {
//		int t = 0;
//		for ( int j = 0; j < m; ++j ) {
//			if ( a[i][j] == 1 ) {
//				t += room[j];
//			}
//		}
//		printf ( "%d ", t - p[i] );
//	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

