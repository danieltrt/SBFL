double f_filled ( double p ) {
  return ceil ( sqrt ( 2 * 365 * log ( 1 / ( 1 - p ) ) ) ) ;
}
