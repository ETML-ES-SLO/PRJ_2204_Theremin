/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */
#include <xc.h> // include processor files - each processor file is guarded. 
#include <stdio.h>
#include <stdlib.h>
#include <p18cxxx.h>
#include <pic18.h>
#include  "main.h"

void main(void)
{
   // Pour une fréquence de 8 MHz
   OSCCONbits.IRCF = 0b111;
   // Utiliser l'oscillateur interne
OSCCONbits.SCS = 1;

    TRISEbits.TRISE2 = 1;  // Output
 while(1)
 {
    
        LED_PWR_State = 0;
          for ( int x=0; x<=10; x++ )
            {
              delay (1000);
              //__delay_ms(20);   // 20x10 200ms

            }
           LED_PWR_State = 1;

          for ( int x=0; x<=10; x++ )

            {
              delay (1000);
             // __delay_ms(20);

            }
       }
}

/* THE END */
void delay(unsigned long cntr)
{
    while (--cntr != 0);
}