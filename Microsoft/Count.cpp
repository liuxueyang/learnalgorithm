#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

int n, m, A[120][110];
int Min = 1 << 30;
int a[120];
	void
backtrack ( int k, int row )
{
	if ( k == row ) {
		int sum = 0;
		for ( int i = 1; i <= row; ++i ) {
			sum += A[i][a[i]];
		}
		if ( sum < Min ) {
			Min = sum;
		}
	}
	else {
		k = k + 1;
		int c[120], num = 0, flag;
		memset(c, 0, sizeof(c));
		for ( int i = 1; i <= n; ++i ) {
			flag = 1;
			for ( int j = 1; j < k; ++j ) {
				if ( i == a[j] ) {
					flag = 0;
				}
			}
			if ( flag ) {
				c[num++] = i;
			}
		}
		for ( int i = 0; i < num; ++i ) {
			a[k] = c[i];
			backtrack(k, row);
		}
	}
	return ;
}		

	int
main ( int argc, char *argv[] )
{
//	freopen("Count.in", "r", stdin);
	int nCase = 0;
//	while (~scanf ( "%d", &nCase ))
	for (int nc = 1; nc <= nCase; ++nc)
	{
		Min = 1 << 30;
		scanf ( "%d%d", &m, &n );
		for ( int i = 1; i <= m; ++i ) {
			for ( int j= 1; j <= n; ++j ) {
				scanf ( "%d", &A[i][j] );
			}
		}
		backtrack(0, m);
		printf ( "Case %d: %d\n", nc, Min );
	}
		return EXIT_SUCCESS;
}				
