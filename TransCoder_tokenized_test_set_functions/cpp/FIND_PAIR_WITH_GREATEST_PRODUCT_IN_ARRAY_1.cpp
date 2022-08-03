int findGreatest ( int arr [ ], int n ) {
  unordered_map < int, int > m;
  for ( int i = 0;
  i < n;
  i ++ ) m [ arr [ i ] ] ++;
  sort ( arr, arr + n );
  for ( int i = n - 1;
  i > 1;
  i -- ) {
    for ( int j = 0;
    j < i && arr [ j ] <= sqrt ( arr [ i ] );
    j ++ ) {
      if ( arr [ i ] % arr [ j ] == 0 ) {
        int result = arr [ i ] / arr [ j ];
        if ( result != arr [ j ] && m [ result ] > 0 ) return arr [ i ];
        else if ( result == arr [ j ] && m [ result ] > 1 ) return arr [ i ];
      }
    }
  }
  return - 1;
}