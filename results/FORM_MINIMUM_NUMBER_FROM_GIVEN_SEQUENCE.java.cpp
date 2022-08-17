void PrintMinNumberForPattern ( string arr ) {
  int currMax = 0 ;
  int lastEntry = 0 ;
  int j ;
  for ( int i = 0 ;
  i < arr . length ( ) ;
  i ++ ) {
    int noOfNextD = 0 ;
    switch ( arr [ i ] ) {
      case 'I' : j = i + 1 ;
      while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
        noOfNextD ++ ;
        j ++ ;
      }
      if ( i == 0 ) {
        currMax = noOfNextD + 2 ;
        cout << " " << ++ lastEntry ;
        cout << " " << currMax ;
        lastEntry = currMax ;
      }
      else {
        currMax = currMax + noOfNextD + 1 ;
        lastEntry = currMax ;
        cout << " " << lastEntry ;
      }
      for ( int k = 0 ;
      k < noOfNextD ;
      k ++ ) {
        cout << " " << -- lastEntry ;
        i ++ ;
      }
      break ;
      case 'D' : if ( i == 0 ) {
        j = i + 1 ;
        while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
          noOfNextD ++ ;
          j ++ ;
        }
        currMax = noOfNextD + 2 ;
        cout << " " << currMax << " " << ( currMax - 1 ) ;
        lastEntry = currMax - 1 ;
      }
      else {
        cout << " " << ( lastEntry - 1 ) ;
        lastEntry -- ;
      }
      break ;
    }
  }
  cout << endl ;
}
