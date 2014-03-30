/*
 * =====================================================================================
 *       Filename : triangle1.cpp
 *    Description : learn code of tourist
 *    Version     : 0.1
 *        Created : 03/30/14 19:27
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>
#include <cmath>
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
	while ( a > 0 && b > 0 ) {
		if ( a > b ) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}		/* -----  end of function gcd  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  test
 *  Description:  test the coordinate
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
	for ( int x = 1; x <= a; ++x ) {
		for ( int y = 1; y <= a; ++y ) {
			if ( x * x + y * y == a * a ) {
				int g = gcd(x, y);
				int dx = x / g, dy = y / g;
				int u = dx * dx + dy * dy;
				int v = b * b;
				if ( v % u != 0 ) {
					continue;
				}
				int ratio = v / u;
				int k = (int)sqrt(ratio);
				if ( k * k == ratio ) {
					test(x, y, dy * k, -dx * k);
					test(x, y, -dy * k, dx * k);
				}
			}
		}
	}
	puts("NO");

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

