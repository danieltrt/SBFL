static void findMajority ( int * arr ) {
  unordered_map < int , int > :: iterator it ;
  for ( it = arr -> begin ( ) ;
  it != arr -> end ( ) ;
  it ++ ) {
    if ( it -> first == arr -> first ) {
      int count = it -> second + 1 ;
      if ( count > it -> second / 2 ) {
        cout << "Majority found :- " << it -> first << endl ;
        return ;
      }
      else {
        it -> second = count ;
      }
    }
    else {
      it -> second = 1 ;
    }
  }
  cout << " No Majority element" << endl ;
}
