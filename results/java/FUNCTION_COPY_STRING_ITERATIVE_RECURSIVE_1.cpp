void f_filled ( char s1 [ ] , char s2 [ ] , int index ) {
  s2 [ index ] = s1 [ index ] ;
  if ( index == sizeof ( s1 ) - 1 ) return ;
  f_filled ( s1 , s2 , index + 1 ) ;
}
