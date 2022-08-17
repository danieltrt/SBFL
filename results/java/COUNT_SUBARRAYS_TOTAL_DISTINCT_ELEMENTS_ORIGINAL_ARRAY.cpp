int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > vis ;
  if ( ! find ( vis . begin ( ) , vis . end ( ) , arr [ 0 ] ) ) return 0 ;
  return find ( vis . begin ( ) , vis . end ( ) , arr [ 1 ] ) -> second ;
}
