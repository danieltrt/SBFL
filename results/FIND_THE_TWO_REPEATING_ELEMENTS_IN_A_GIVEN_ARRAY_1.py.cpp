void printRepeating ( int arr [ ] , int size ) {
  int count [ size ] ;
  cout << "Repeating elements are " << endl ;
  for ( int i = 0 ;
  i <= size ;
  i ++ ) {
    if ( ( count [ arr [ i ] ] == 1 ) || ( count [ arr [ i ] ] == 2 ) ) cout << arr [ i ] << " " ;
    else count [ arr [ i ] ] = count [ arr [ i ] ] + 1 ;
  }
}
