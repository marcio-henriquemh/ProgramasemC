// curso de assembly para microcontroladores pic aula 001


list p=16f84a                    ;microcontrolador pic 16f84a



;---- Arquivos incluidos no projeto----
#include <p16f84a.inc>            ; inclui o arquivo pic16f84a


; -----FUSE bits-----
_; Cristal oscilador externo 4MHz, sem watchdog timer, com power up timer, sem proteção do código
	__config _XT_OSC & _WDT_OFF & _PWRTE_ON & _CP_OFF
	

; --- Paginação de Memória ---
 #define		bank0		bcf	STATUS,RP0		;Cria um mnemônico para o banco 0 de memória
 #define		bank1		bsf STATUS,RP0		;Cria um mnemônico para o banco 1 de memória
 ; --- Entradas ---
 #define		botao1		PORTB,RB0			;botão 1 ligado em RB0
 
 
; --- Saídas ---
 #define		led1		PORTB,RB7			;LED 1 ligado em RB7
                       
                             
; --- Vetor de RESET ---
				org			H'0000'				;Origem no endereço 0000h de memória
				goto		inicio				;Desvia do vetor de interrupção
				
; --- Vetor de Interrupção ---
				org			H'0004'				;Todas as interrupções apontam para este endereço
				retfie							;Retorna de interrupção
				

; --- Programa Principal ---				
inicio:
				bank1							;seleciona o banco 1 de memória
				movlw		H'7F'				;W = B'01111111'
				movwf		TRISB				;TRISB = H'7F' (apenas o RB7 como saída)
				bank0							;seleciona o banco 0 de memória (padrão do RESET)
				
				
				end								;Final do programa