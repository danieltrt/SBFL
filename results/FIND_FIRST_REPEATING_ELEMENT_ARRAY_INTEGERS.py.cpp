void printFirstRepeating ( int * arr , int n ) {
  int Min = - 1 ;
  map < int , int > myset ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( arr [ i ] == myset . find ( i ) ) Min = i ;
    else myset [ arr [ i ] ] = 1 ;
  }
  if ( ( Min != - 1 ) && ( Min < n ) ) cout << "The first repeating element is" << arr [ Min ] << endl ;
  else cout << "There are no repeating elements" << endl ;
}
