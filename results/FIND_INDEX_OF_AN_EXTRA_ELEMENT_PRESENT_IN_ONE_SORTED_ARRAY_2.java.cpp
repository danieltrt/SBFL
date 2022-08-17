int findExtraElementIndex ( int * arrA , int * arrB ) {
  int extraElement = sum ( arrA ) - sum ( arrB ) ;
  return indexOf ( arrA , extraElement ) ;
}
