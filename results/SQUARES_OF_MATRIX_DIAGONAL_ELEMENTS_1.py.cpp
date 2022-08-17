void diagonalsquare ( int * * mat , int row , int column ) {
  cout << "Diagonal one: " ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) cout << mat [ i ] [ i ] * mat [ i ] [ i ] << " " ;
  cout << "\n\nDiagonal two : " ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) cout << mat [ i ] [ row - i - 1 ] * mat [ i ] [ row - i - 1 ] << " " ;
}
