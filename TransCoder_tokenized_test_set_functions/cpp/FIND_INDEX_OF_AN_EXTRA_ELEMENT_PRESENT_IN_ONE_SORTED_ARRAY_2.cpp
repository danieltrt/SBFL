int find_extra_element_index ( int arrA [ ], int arrB [ ], int n, int m ) {
  int extra_element = sum ( arrA, n ) - sum ( arrB, m );
  return indexOf ( arrA, extra_element, n );
}