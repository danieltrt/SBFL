static int countPairs ( int arr1 [ ], int arr2 [ ], int m, int n, int x ) {
  int count = 0;
  HashSet < Integer > us = new HashSet < Integer > ( );
  for ( int i = 0;
  i < m;
  i ++ ) us . add ( arr1 [ i ] );
  for ( int j = 0;
  j < n;
  j ++ ) if ( us . contains ( x - arr2 [ j ] ) ) count ++;
  return count;
}