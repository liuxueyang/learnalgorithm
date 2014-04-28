/*
 * =====================================================================================
 *       Filename : SelectSort.cpp
 *    Description : select sorting method
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
 *         Name:  SelectSort
 *  Description:  select sort function
 * =====================================================================================
 */
	void
SelectSort ( int a[], int n )
{
	for ( int i = 0; i < n ; ++i ) {
		int MinIndex = i;
		for ( int j = i + 1; j < n; ++j ) {
			if ( a[j] < a[MinIndex] ) {
				MinIndex = j;
			}
		}
		if ( i != MinIndex ) {
			swap(a[i], a[MinIndex]);
		}
	}
	return ;
}		/* -----  end of function SelectSort  ----- */

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

		SelectSort(a, n);
		Print(a, n);
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

