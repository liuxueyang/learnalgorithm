/*
 * =====================================================================================
 *       Filename : triangle.cpp
 *    Description : triangle
 *    Version     : 0.1
 *        Created : 03/30/14 15:57
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  gcd
 *  Description:  gcd
 * =====================================================================================
 */
	int
gcd ( int a, int b )
{
	return b == 0 ? a : gcd(b, a % b);
}		/* -----  end of function gcd  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  test
 *  Description:  test
 * =====================================================================================
 */
	void
test ( int xa, int ya, int xb, int yb )
{
	if ( xa == xb || ya == yb ) {
		return;
	}
	printf ( "YES\n" );
	printf ( "0 0\n" );
	printf ( "%d %d\n", xa, ya );
	printf ( "%d %d\n", xb, yb );
	exit(0);
	return ;
}		/* -----  end of function test  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int a, b;
	scanf ( "%d%d", &a, &b );
	for ( int x = 1; x < a; ++x ) {
		for ( int y = 1; y < a; ++y ) {
			if ( x * x + y * y == a * a ) {
				int g = gcd(x, y);
				int dx = x / g, dy = y / g, u = dx * dx + dy * dy;
				int v = b * b, ratio = v / u, k = (int)sqrt(ratio) ;
				if ( v % u ) {
					continue;
				}
				if ( k * k != ratio ) {
					continue;
				}
				test(x, y, dy * k, -dx * k);
				test(x, y, -dy * k, dx * k);
			}
		}
	}
	puts("NO");

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
