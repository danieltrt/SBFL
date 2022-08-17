int singleNumber ( vector < int > & nums ) {
  return ( 3 * sum ( set ( nums ) ) - sum ( nums ) ) / 2 ;
}
