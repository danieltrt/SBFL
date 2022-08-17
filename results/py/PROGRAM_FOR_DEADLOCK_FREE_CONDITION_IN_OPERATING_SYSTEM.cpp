int f_filled ( int process , int need ) {
  int minf_filled ;
  minf_filled = process * ( need - 1 ) + 1 ;
  return minf_filled ;
}
