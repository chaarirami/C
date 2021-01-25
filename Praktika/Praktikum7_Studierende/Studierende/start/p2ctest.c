/* 
Aufgabenblatt 5
@authors: Thomas Lehmann
@date: 2018-04-20
/* TODO: add your names here */
@cooperation: -
*/

#include <stdio.h>
/* TODO: add your header file here */
#include "ti_expectations.h"

int main(void){
	double a;
	double phi;
	double x;
	double y;

	a = 1;
	phi = 0;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x, 1.0);
	EXPECT_APPROX_EQUAL( y, 0.0);
	
	a = 1;
	phi = 90;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x, 0.0);
	EXPECT_APPROX_EQUAL( y, 1.0);
	
	a = 1;
	phi = 180;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x, -1.0);
	EXPECT_APPROX_EQUAL( y,  0.0);

	a = 1;
	phi = 270;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x,  0.0);
	EXPECT_APPROX_EQUAL( y, -1.0);

	a = 1;
	phi = 45;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x,  0.707107);
	EXPECT_APPROX_EQUAL( y,  0.707107);

	a = 1;
	phi = -45;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x,  0.707107);
	EXPECT_APPROX_EQUAL( y, -0.707107);
	
	a = 10;
	phi = 45;
	/* TODO: Add your function call here */
	EXPECT_APPROX_EQUAL( x,  7.07107);
	EXPECT_APPROX_EQUAL( y,  7.07107);

	return 0;
}