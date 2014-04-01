/*
 * =====================================================================================
 *       Filename : HeapImplementation.cpp
 *    Description : heap
 *    Version     : 0.1
 *        Created : 03/31/14 23:10
 *         Author : Liu Xue Yang (LXY), liuxueyang457@163.com
 *         Motto  : How about today?
 * =====================================================================================
 */
#include <cstdio>
#include <cstdlib>

int Heap[100];
int sz;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Push
 *  Description:  push a value to a heap
 * =====================================================================================
 */
	void
Push ( int x )
{
	int i = sz++;
	while ( i > 0 ) {
		int p = (i - 1) / 2;
		if ( Heap[p] > x ) {
			Heap[i] = Heap[p];
			i = p;
			continue;
		}
		break;
	}
	Heap[i] = x;
	return ;
}		/* -----  end of function Push  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Pop
 *  Description:  pop the minimum value of the Heap
 * =====================================================================================
 */
	int
Pop (  )
{
	int ret = Heap[0];
	int x = Heap[--sz];
	int i = 0;
	while ( i * 2 < sz ) {
		int a = i * 2 + 1, b = i * 2 + 2;
		if ( b < sz && Heap[b] < Heap[a] ) {
			 a = b;
		}
		if ( Heap[a] >= x ) {
			break;
		}
		Heap[i] = Heap[a];
		i = a;
	}
	Heap[i] = x;
	return ret;
}		/* -----  end of function Pop  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: main
 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	sz = 0;
	Push(1);
	Push(2);
	Push(3);
	for ( int i = 0; i < sz; ++i ) {
		printf ( "%d ", Heap[i] );
	}

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
