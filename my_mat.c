# include <stdio.h>

# define infinity 1000000000

# define size 10




int matrix [size] [size];
int shortestPathMatrix [size] [size];

// Floyd Warshell algorithm
	
	void buildShortestPathMatrix () {
		
		for ( int k = 0 ; k < size ; ++k) {
			
			for ( int n = 0 ; n < size ; ++n) {
				
				for ( int m = 0 ; m < size ; ++m) {
					
					if ( (shortestPathMatrix[n][k] + shortestPathMatrix[k][m] ) < shortestPathMatrix[n][m] ) {
						
						shortestPathMatrix[n][m] = (shortestPathMatrix[n][k] + shortestPathMatrix[k][m]);
					}
				}
			}
		}
		
	}

// A function

void insertMatrix () {
	for ( int i = 0 ; i < size ; ++i) {
		
		for ( int j = 0 ; j < size ; ++j) {
			
			scanf ("%d" , &matrix [i][j] );
			
			/*
			*  if i = j (we look within a cell that define a path from vertex to imself) 
			*  so the value remain 0
			*	if i != j and the value inside the cell is 0 it means that there is no path from the vertex,
			* therefore the value should change to infinity
			*/ 
			
			if (i != j && matrix[i][j] == 0) {    
				
				shortestPathMatrix[i][j] = infinity ;	
				
			} else {
				
				shortestPathMatrix[i][j] = matrix[i][j] ;
				
			}
				
		}
	}
			buildShortestPathMatrix() ;
}

// B function

void isPath (int i , int j) {
	
	if  (shortestPathMatrix[i][j] > 0 && shortestPathMatrix[i][j] < infinity) {
		
		printf ("true\n");
		
	} else {
		
		printf ("false\n");
	}
		
}

// C function

void shortestPath (int i , int j) {
	
	if  (shortestPathMatrix[i][j] > 0 && shortestPathMatrix[i][j] < infinity) {
		
		printf ("%d\n" , shortestPathMatrix[i][j]);
		
	} else {
		
		printf ("-1\n");
	}
}
		
	
	
	