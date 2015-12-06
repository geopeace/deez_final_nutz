#include<stdio.h>
#include<time.h>
#include<iostream>
#include<stdlib.h>

int r_m[20][20],m;
int determinant(int f[20][20], int a);

int main(){
	int i,j;
	printf("Please enter size of matrix : \n");
	scanf("%d", &m);
	printf("\n");
//	int r_m[m][m];

	srand( time(NULL));
	
	for(i = 1; i <= m; i++){
		for (j = 1; j <= m; j++){
			r_m[i][j] = rand() %5 + 1;
		
		}
}

	int row, columns;
	printf("\n---------- Deez Nutz Matrix Is ----------\n");
	for(row = 1; row <= m; row++)
	{
		printf("\n");
		for(columns = 1; columns <= m; columns++){
			printf("\t%d \t", r_m[row][columns]);
		}
	}
	printf("\n \n");
	printf("\n Determinant of Matrix A is %d .", determinant(r_m,m));
}

int determinant(int f[20][20], int m){
	int pr, j, p, q, t;
	int d;
	int c[20], b[20][20];
	if (m == 2){
	//	d = 0;
		d = (f[1][1]*f[2][2]) - (f[1][2]*f[2][1]);
		return (d);
	}
	else{
		for(j = 1; j <= m; j++)
		{
			int r = 1, s = 1;
			for(p = 1; p <= m; p++)
			{
				for(q = 1; q <= m; q++)
				{
					if(p!=1 && q!=j)
					{
						b[r][s]=f[p][q];
						s++;
						if(s>m-1)
						{
							r++;
							s = 1;
						}
					}
				}
			}
			for(t = 1, pr = 1; t<=(1+j); t++)
			pr = (-1)*pr;
			c[j] = pr*determinant(b, m-1);
		}
		for(j = 1, d = 0; j<=m; j++)
		{
			d = d+(f[1][j]*c[j]);
		}
		return(d);
	}
}
		





				















	
	
	
//	int row, columns;
//	for (int row = 0; row < MAXROWS; row++){
//		for (int columns = 0; columns < MAXCOLS; columns++){
//		printf("%d    ", random_matrix[row][columns]);
//		
//		}
//		printf("\n");
//	}	
//	int x = MAXROWS;
//	int d = 0, pr, l, p, q, t, b[20][20], c[20];
	//int determinant(int b, int x)	
	


						


	
