/*
 * =====================================================================================
 *       Filename : TheGreatGame.cpp
 *    Description : So Funny
 *    Version     : 0.1
 *        Created : 04/29/14 07:58
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  judge
 *  Description:  who win?
 * =====================================================================================
 */
	int
judge ( char a, char b )
{
	if ( a=='[' ) {
		if ( b=='[' ) {
			return 0;
		}
		else if ( b=='(' ) {
			return 1;
		}
		else {
			return -1;
		}
	}
	if ( a=='(' ) {
		if ( b=='[' ) {
			return -1;
		}
		else if ( b=='(' ) {
			return 0;
		}
		else {
			return 1;
		}
	}
	if ( a=='8' ) {
		if ( b=='[' ) {
			return 1;
		}
		else if ( b=='(' ) {
			return -1;
		}
		else {
			return 0;
		}
	}
	return 0;
}		/* -----  end of function judge  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	char a[21], b[21];
	scanf ( "%s%s", a, b );
	int len = strlen(a), wina = 0, winb = 0;
	for ( int i = 0; i < len; i+=2 ) {
		int tmp = judge(a[i], b[i]);
		if ( tmp > 0 ) {
			++wina;
		}
		else if ( tmp < 0 ) {
			++winb;
		}
	}
	if ( wina > winb ) {
		printf ( "TEAM 1 WINS\n" );
	}
	else if ( wina < winb ) {
		printf ( "TEAM 2 WINS\n" );
	}
	else {
		printf ( "TIE\n" );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

