int search ( int mat [ 4 ] [ 4 ], int n, int x ) {
  if ( n == 0 ) return - 1;
  int smallest = a [ 0 ] [ 0 ], largest = a [ n - 1 ] [ n - 1 ];
  if ( x < smallest || x > largest ) return - 1;
  int i = 0, j = n - 1;
  while ( i < n && j >= 0 ) {
    if ( mat [ i ] [ j ] == x ) {
      cout << "n Found at " << i << ", " << j;
      return 1;
    }
    if ( mat [ i ] [ j ] > x ) j --;
    else i ++;
  }
  cout << "n Element not found";
  return 0;
}