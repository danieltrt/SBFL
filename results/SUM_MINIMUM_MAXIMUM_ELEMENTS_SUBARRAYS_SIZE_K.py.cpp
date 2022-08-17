int SumOfKsubArray ( int arr [ ] , int n , int k ) {
  int Sum = 0 ;
  deque < int > S ;
  deque < int > G ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    while ( ( S . size ( ) > 0 && arr [ S [ S . size ( ) - 1 ] ] >= arr [ i ] ) || ( S . size ( ) > 0 && arr [ G [ G [ S . size ( ) - 1 ] ] ] <= arr [ i ] ) ) S . pop_back ( ) ;
    while ( ( G . size ( ) > 0 && arr [ G [ G [ S . size ( ) - 1 ] ] ] <= arr [ i ] ) || ( G . size ( ) > 0 && arr [ S [ S . size ( ) - 1 ] ] <= arr [ i ] ) ) G . pop_back ( ) ;
    G . push_back ( i ) ;
    S . push_back ( i ) ;
  }
  for ( int i = k ;
  i < n ;
  i ++ ) {
    Sum += arr [ S [ 0 ] ] + arr [ G [ 0 ] ] ;
    while ( ( S . size ( ) > 0 && S [ 0 ] <= i - k ) || ( G . size ( ) > 0 && G [ 0 ] <= i - k ) ) S . pop_back ( ) ;
    while ( ( S . size ( ) > 0 && arr [ S [ S . size ( ) - 1 ] ] >= arr [ i ] ) || ( S . size ( ) > 0 && arr [ G [ S . size ( ) - 1 ] ] <= arr [ i ] ) ) S . pop_back ( ) ;
    while ( ( G . size ( ) > 0 && arr [ G [ S . size ( ) - 1 ] ] >= arr [ i ] ) || ( G . size ( ) > 0 && arr [ S . size ( ) - 1 ] ] <= arr [ i ] ) ) G . pop_back ( ) ;
    G . push_back ( i ) ;
    S . push_back ( i ) ;
  }
  Sum += arr [ S [ 0 ] ] + arr [ G [ 0 ] ] ;
  return Sum ;
}
