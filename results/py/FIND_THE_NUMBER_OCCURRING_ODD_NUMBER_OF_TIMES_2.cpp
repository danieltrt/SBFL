int f_filled ( int arr [ ] ) {
  int res = 0 ;
  for ( int element : arr ) {
    res = res ^ element ;
  }
  return res ;
}
