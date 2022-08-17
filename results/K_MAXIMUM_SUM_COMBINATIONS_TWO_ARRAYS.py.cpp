int KMaxCombinations ( int * A , int * B , int N , int K ) {
  priority_queue < int , vector < int > , greater < int >> pq ;
  for ( int i = 0 ;
  i != N ;
  i ++ ) {
    for ( int j = 0 ;
    j != N ;
    j ++ ) {
      int a = A [ i ] + B [ j ] ;
      pq . push ( make_pair ( - a , a ) ) ;
    }
  }
  int count = 0 ;
  while ( ( count < K ) && ( pq . top ( ) < pq . top ( ) ) ) {
    cout << pq . top ( ) . second << endl ;
    count = count + 1 ;
  }
  return count ;
}
