int printFun ( int test ) {
  if ( ( test < 1 ) || ( test > 2 ) ) return 0 ;
  else {
    cout << test << " " ;
    printFun ( test - 1 ) ;
    cout << test << " " ;
    return 1 ;
  }
}
