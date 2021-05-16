/**
 * @file timer0.h
 * @brief Datoteka koja deklarise funkcije za upravljanje tajmerom 0
 * @author Nemanja Kusic
 * @date 16-05-2021
 * @version 1.0
 */

#ifndef TIMER0_H_
#define TIMER0_H_

#include <avr/interrupt.h>
#include <stdint.h>

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa uint32_t - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa uint32_t i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
uint32_t timer0DelayMs(uint32_t delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

/** timer0millis - Funkcija koja bezbedno vraca kaopovratnu vrednost brojmilisekundi
 * proteklih od pocetka merenja vremena
 * @return Povratna vrednost je tipa uint32_t i imavrednost brojamilisekundi
 * proteklih od pocetka merenja vremena
 */
uint32_t timer0millis();


#endif /* TIMER0_H_ */
