unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

/*
TODO:
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits
that begin at position p set to the rightmost n bits of y, leaving the other
bits unchanged.
*/

/*
TODO:
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that
begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving
the others unchanged.
*/

/*
TODO:
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the
integer x rotated to the right by n positions.
*/
