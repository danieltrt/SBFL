void maxelement ( int no_of_rows , vector < vector < int >> arr ) {
  int i = 0 ;
  int max = 0 ;
  vector < int > result ;
  result . reserve ( no_of_rows ) ;
  while ( i < no_of_rows ) {
    for ( int j = 0 ;
    j < arr [ i ] . size ( ) ;
    j ++ ) {
      if ( arr [ i ] [ j ] > max ) max = arr [ i ] [ j ] ;
    }
    result . push_back ( max ) ;
    max = 0 ;
    i ++ ;
  }
  print_vector ( result ) ;
}
