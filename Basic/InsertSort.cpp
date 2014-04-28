/*
 * =====================================================================================
 *       Filename : InsertSort.cpp
 *    Description : insert sorting method
 *    Version     : 0.1
 *        Created : 04/14/14 14:15
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertSort
 *  Description:  insert sort method
 * =====================================================================================
 */
	void

{
	for ( int i = 1; i < n; ++i ) {
		for ( int j = i; j; --j ) {
			if ( a[j-1] <= a[j] ) {
				break;
			}
			swap(a[j], a[j-1]);
		}
	}

	return ;
}		/* -----  end of function InsertSort  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  print the array 
 * =====================================================================================
 */
	void
Print ( int a[], int n )
{
	for ( int i = 0; i < n; ++i ) {
		printf ( "%d ", a[i] );
	}
	printf ( "\n" );

	return ;
}		/* -----  end of function Print  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	int n;
	int a[1000];
	while ( ~scanf("%d", &n) ) {
		
		for ( int i = 0; i < n; ++i ) {
			scanf ( "%d", &a[i] );
		}

		InsertSort(a, n);
		Print(a, n);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

