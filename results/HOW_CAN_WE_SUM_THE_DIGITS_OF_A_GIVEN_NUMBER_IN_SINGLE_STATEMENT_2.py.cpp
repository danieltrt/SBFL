int sumDigits ( int no ) {
  return no == 0 ? 0 : ( int ) ( no % 10 ) + sumDigits ( ( int ) ( no / 10 ) ) ;
}
