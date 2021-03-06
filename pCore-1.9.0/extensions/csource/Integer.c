/*------------------------------------------------------------------------------
! . File      : Integer.c
! . Program   : pDynamo-1.9.0                           (http://www.pdynamo.org)
! . Copyright : CEA, CNRS, Martin J. Field (2007-2014)
! . License   : CeCILL French Free Software License     (http://www.cecill.info)
!-----------------------------------------------------------------------------*/
/*==================================================================================================================================
! . Integer functions.
!=================================================================================================================================*/

# include "Integer.h"

/*----------------------------------------------------------------------------------------------------------------------------------
! . Integer GCD.
!---------------------------------------------------------------------------------------------------------------------------------*/
Integer Integer_GCD ( Integer a, Integer b )
{
    Integer t ;
    if    ( a <  b ) { t = b ; b = a     ; a = t ; }
    while ( b != 0 ) { t = b ; b = a % b ; a = t ; }
    return a ;
}
