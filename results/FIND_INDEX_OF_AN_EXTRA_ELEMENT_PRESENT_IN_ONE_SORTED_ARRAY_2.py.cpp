int findExtraElementIndex ( int * arrA , int * arrB ) {
  int extraElement = std :: distance ( arrA , arrB ) - std :: distance ( arrA , arrB ) ;
  return arrA [ extraElement ] ;
}
