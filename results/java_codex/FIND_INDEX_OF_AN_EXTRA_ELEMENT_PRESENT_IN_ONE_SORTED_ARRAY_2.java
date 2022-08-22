int find_extra_element_index ( int arrA [ ], int arrB [ ] ) {
  int extra_element = sum ( arrA ) - sum ( arrB );
  return indexOf ( arrA, extra_element );
}