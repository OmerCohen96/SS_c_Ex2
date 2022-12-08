# include <stdio.h>
# include "my_mat.h"

int main () {

char input;

while ( scanf ("%c" , &input) != EOF ) {
	
	switch (input) {
		
		case 'A' : 
					insertMatrix ();
					break;
		
		case 'B' :
					int i, j;
					scanf ("%d%d" ,  &i,  &j) ;
					isPath (i, j);
					break;
					
		case 'C' :
					int m, n;
					scanf ("%d%d" ,  &m,  &n) ;
					shortestPath(m, n);
					break;
					
		}
	}	

	return 0;
}
		
			
