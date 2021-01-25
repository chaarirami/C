/**
 * \brief Alternative version of standard assertion macro. Just prints information
 * and doesn't terminate the programm. Additionally, a second form allows to 
 * add a self-defined text.
 *
 * File:   ti_expectations.h
 * \author Prof. Dr. Th. Lehmann
 * \version 1.0
 * \date    04.10.2017
 * \version 2.0
 * \date    15.10.2017
 * \version 3.0
 * \date    12.11.2017
 */

#ifndef TI_EXPECTATIONS_H
#define	TI_EXPECTATIONS_H

#ifdef	__cplusplus
  #include <cstdio>
  #include <cmath>
  using namespace std;
#else
  #include <stdio.h>
  #include <math.h>
#endif

// Some results needs only to be approximately the same. Difference must be 
// smaller than epsilon.  
#define EXPECT_EPSILON ((double)0.0001)

#define EXPECT_TRUE(e) do{ \
(e) ? 0 : printf("expectation %s fails, in %s, line %i\n", #e, __FILE__, __LINE__); \
} while(0)

#define EXPECT_TRUE_MESSAGE(m, e) do{ \
(e) ? 0 : printf(m ", expectation %s fails, in %s, line %i\n", #e, __FILE__, __LINE__); \
} while(0)

#define EXPECT_FALSE(e) do{ \
!(e) ? 0 : printf("expectation %s fails, in %s, line %i\n", #e, __FILE__, __LINE__); \
} while(0)

#define EXPECT_EQUAL(e,f) do{ \
((e)==(f)) ? 0 : printf("expectation %s equals %s fails, in %s, line %i\n", #e, #f,__FILE__, __LINE__); \
} while(0)

#define EXPECT_EQUAL_MESSAGE(m,e,f) do{ \
((e)==(f)) ? 0 : printf(m ", expectation %s equals %s fails, in %s, line %i\n", #e, #f, __FILE__, __LINE__); \
} while(0)

#define EXPECT_APPROX_EQUAL(e,f) do{ \
(abs((e)-(f))<EXPECT_EPSILON) ? 0 : printf("expectation %s approximately equals %s fails, in %s, line %i\n", #e, #f,__FILE__, __LINE__); \
} while(0)

#define EXPECT_APPROX_EQUAL_MESSAGE(m,e,f) do{ \
(abs((e)-(f))<EXPECT_EPSILON) ? 0 : printf(m ", expectation %s approximately equals %s fails, in %s, line %i\n", #e, #f, __FILE__, __LINE__); \
} while(0)

#endif	/* TI_EXPECTATIONS_H */
