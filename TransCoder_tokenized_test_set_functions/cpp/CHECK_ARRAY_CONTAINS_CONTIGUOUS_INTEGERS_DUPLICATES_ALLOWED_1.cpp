bool areElementsContiguous ( int arr [ ], int n ) {
  unordered_set < int > us;
  for ( int i = 0;
  i < n;
  i ++ ) us . insert ( arr [ i ] );
  int count = 1;
  int curr_ele = arr [ 0 ] - 1;
  while ( us . find ( curr_ele ) != us . end ( ) ) {
    count ++;
    curr_ele --;
  }
  curr_ele = arr [ 0 ] + 1;
  while ( us . find ( curr_ele ) != us . end ( ) ) {
    count ++;
    curr_ele ++;
  }
  return ( count == ( int ) ( us . size ( ) ) );
}