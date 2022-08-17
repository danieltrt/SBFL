void sortString ( string str ) {
  char * arr = str . c_str ( ) ;
  std :: sort ( arr , arr + str . size ( ) ) ;
  cout << string ( arr ) << endl ;
}
