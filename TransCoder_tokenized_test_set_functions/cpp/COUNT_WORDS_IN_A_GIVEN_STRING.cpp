unsigned countWords ( char * str ) {
  int state = OUT;
  unsigned wc = 0;
  while ( * str ) {
    if ( * str == ' ' || * str == '\n' || * str == '\t' ) state = OUT;
    else if ( state == OUT ) {
      state = IN;
      ++ wc;
    }
    ++ str;
  }
  return wc;
}