int getOddOccurrence ( int ar [ ], int ar_size ) {
  int res = 0;
  for ( int i = 0;
  i < ar_size;
  i ++ ) res = res ^ ar [ i ];
  return res;
}