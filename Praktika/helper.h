/*
  Helper functions for simple programm to 
  calculate the hypothenous.
  @author: Thomas Lehmann
  @date: 2018
*/

/* Show a simple splash screen. */
void showSplash(void);

/* Request the user to input a positive
   number. Returns the number only if
   it is positive. Otherwise the request
   will be repeated.*/
/* not safe against wrong input! */
double requestPosNumber(void);

/* Calculate the hypothenuse based on the 
   given cathets.
*/
double calculateHypothenuse(double a, double b);
