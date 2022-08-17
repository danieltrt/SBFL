int findMinRooms ( string * slots , int n , int m ) {
  int counts [ m ] ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( slots [ i ] [ j ] == '1' ) || ( slots [ i ] [ j ] == '2' ) || ( slots [ i ] [ j ] == '3' ) || ( slots [ i ] [ j ] == '4' ) || ( slots [ i ] [ j ] == '5' ) || ( slots [ i ] [ j ] == '6' ) || ( slots [ i ] [ j ] == '7' ) || ( slots [ i ] [ j ] == '8' ) || ( slots [ i ] [ j ] == '9' ) || ( slots [ i ] [ j ] == 'A' ) || ( slots [ i ] [ j ] == 'B' ) || ( slots [ i ] [ j ] == 'C' ) || ( slots [ i ] [ j ] == 'D' ) || ( slots [ i ] [ j ] == 'E' ) || ( slots [ i ] [ j ] == 'F' ) ||