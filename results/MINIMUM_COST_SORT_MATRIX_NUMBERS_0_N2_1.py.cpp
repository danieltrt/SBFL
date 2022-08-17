int calculateEnergy ( int * * mat , int n ) {
  int totalEnergy = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int q = mat [ i ] [ j ] / n ;
      int iDES = q ;
      int jDES = mat [ i ] [ j ] - ( n * q ) ;
      totalEnergy += ( abs ( iDES - i ) + abs ( jDES - j ) ) ;
    }
  }
  int returntot_energy = 0 ;
  return totalEnergy ;
}
