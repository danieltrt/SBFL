void printFirstRepeating ( int arr [ ] ) {
  int min = - 1 ;
  set < int > set ;
  for ( int i = arr [ arr . size ( ) - 1 ] ;
  i >= 0 ;
  i -- ) {
    if ( set . find ( arr [ i ] ) != set . end ( ) ) {
      min = i ;
    }
    else {
      set . insert ( arr [ i ] ) ;
    }
  }
  if ( min != - 1 ) {
    cout << "The first repeating element is " << arr [ min ] << endl ;
  }
  else {
    cout << "There are no repeating elements" << endl ;
  }
}
