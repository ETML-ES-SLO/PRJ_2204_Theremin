//----------------------------------------------------------------------------//
// Nom du projet 		:	Reglage Encodeur
// Nom du fichier 		:   configModuleOscillateur.c
// Date de cr�ation 	:   02.12.2020
// Date de modification : 	27.01.2021
// 
// Auteur 				: 	Philou (Ph. Bovey) 
//                      :   Michel Bonzon 
//                      :   Kevin Bougnon 
//
// Description 			: 	Canevas pour le laboratoire de r�glage avec la carte
//                          1601_HalfBridge 
//                         
// Remarques			: 
// 	    chemin pour trouver le headerfile 
//		C:\Program Files\Microchip\MPLAB C30\support\dsPIC33F\h
//
//      Hardware de la carte 
//      K:\ES\PROJETS\SLO\1601x_HalfBridge3x\doc 
//
//	    doc pour le DSP : 
//		K:\ES\PROJETS\SLO\1601x_HalfBridge3x\doc\datasheets
// 
//----------------------------------------------------------------------------//

//--- librairie � inclure ---// 
#if defined(_pic18f4550_)
#include "pic18f4550.h"
#endif

#include "xc.h"                     // appel de directive du compilateur C pour le Dspic 

//----------------------------------------------------------------------------//
//-- nom 				: InitOscillateur
//-- entr�e - sortie 	: - / - 
//-- description 		: configuration oscillateur | clock � choix  
//----------------------------------------------------------------------------//

// Configuration des bits de configuration du microcontr�leur
#pragma config FOSC = HSPLL_HS    // Oscillateur externe haute vitesse avec PLL
#pragma config PLLDIV = 5         // Division du PLL pr�-diviseur (20 MHz d'entr�e)
#pragma config CPUDIV = OSC1_PLL2 // Division du PLL post-diviseur (96 MHz d'horloge CPU)
#pragma config USBDIV = 2         // Division de l'horloge USB (96 MHz / 2 = 48 MHz)

