void diagonalsquare ( int * * mat , int row , int column ) {
  cout << "Diagonal one : " << endl ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) {
    for ( int j = 0 ;
    j <= column ;
    j ++ ) {
      if ( ( i == j ) && ( mat [ i ] [ j ] * mat [ i ] [ j ] ) ) {
        cout << "{} " << ( mat [ i ] [ j ] * mat [ i ] [ j ] ) << " " ;
      }
    }
  }
  cout << " \n\nDiagonal two : " << endl ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) {
    for ( int j = 0 ;
    j <= column ;
    j ++ ) {
      if ( ( i + j == column - 1 ) && ( mat [ i ] [ j ] * mat [ i ] [ j ] ) ) {
        cout << "{} " << ( mat [ i ] [ j ] * mat [ i ] [ j ] ) << " " ;
      }
    }
  }
}
