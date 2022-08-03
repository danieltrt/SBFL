void swap ( int * xp, int * yp ) {
  * xp = * xp ^ * yp;
  * yp = * xp ^ * yp;
  * xp = * xp ^ * yp;
}