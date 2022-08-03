public static void kLargest ( Integer [ ] arr, int k ) {
  Arrays . sort ( arr, Collections . reverseOrder ( ) );
  for ( int i = 0;
  i < k;
  i ++ ) System . out . print ( arr [ i ] + " " );
}