bool isPermutedMatrix ( int * * mat , int n ) {
  string strCat ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) strCat = strCat + "-" + to_string ( mat [ 0 ] [ i ] ) ;
  strCat = strCat + strCat ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    string currStr ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) currStr = currStr + "-" + to_string ( mat [ i ] [ j ] ) ;
    if ( ( strCat . find ( currStr ) != string :: npos ) ) return true ;
  }
  return false ;
}
