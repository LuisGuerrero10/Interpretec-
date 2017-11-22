%{
#include "lexer.h"
#include <QString>
extern int lines;
extern char *yytext;
extern void printError(QString val);
int yyerror(const char* mens)
{
    printError(QString("Ha ocurrido un error en la linea [%1], sentencia: %2").arg(lines).arg(yytext));
    return 0;
}
%}

%token VARIABLE
%token ENTERO
%token REAL
%token TEXTO
%token ESCRIBIR
%token DECLARAR
%token ASIGNAR
%token LEER
%token AUMENTO
%token DECREMENTO
%token SUMA
%token RESTA
%token MODULO
%token DIVISION
%token MULTIPLICACION
%token MENOR
%token MAYOR
%token HASTA
%token CONPASO
%token MENOR_IGUAL
%token MAYOR_IGUAL
%token IGUAL
%token DIFERENTE
%token LOGICO_Y
%token LOGICO_O
%token SI
%token SINOSI
%token SINO
%token FINSI
%token PARA
%token FINPARA
%token MIENTRAS
%token FINMIENTRAS

%start lineas

%%

lineas 		:	escribir ';' lineas | leer ';' lineas| declarar_variable ';' lineas| asignaciones ';' lineas| ciclos_condicionales lineas| ; 
escribir 	: 	ESCRIBIR escribible;
escribible 	: 	TEXTO | VARIABLE | ENTERO | REAL ;
leer 		:	LEER VARIABLE;
una_variable : DECLARAR VARIABLE | DECLARAR VARIABLE inicializar;
declarar_variable : DECLARAR VARIABLE | DECLARAR VARIABLE ',' declarar_otra | DECLARAR VARIABLE inicializar | DECLARAR VARIABLE inicializar ',' declarar_otra;

declarar_otra : VARIABLE | VARIABLE ',' declarar_otra | VARIABLE inicializar | VARIABLE inicializar ',' declarar_otra ;

inicializar : ASIGNAR tipo_de_dato;
tipo_de_dato : ENTERO | REAL | TEXTO;

asignaciones : VARIABLE ASIGNAR operacion_simple | VARIABLE aumenta_decrementa;
operacion_simple : operandos signo operandos | operandos signo operandos logico operandos | operandos logico operandos;
operandos : operando |operacion_simple;
operando : ENTERO | REAL | TEXTO | VARIABLE;
signo : MULTIPLICACION | DIFERENTE | IGUAL | MAYOR | MENOR | MAYOR_IGUAL | MENOR_IGUAL | SUMA | RESTA | MODULO | DIVISION;
logico: LOGICO_Y | LOGICO_O ; 
aumenta_decrementa : AUMENTO | DECREMENTO;

ciclos_condicionales: condicional_si | ciclo_para | ciclo_mientras;
condicional_si	: si FINSI | si sino FINSI | si sino_si sino FINSI;
si 	: SI '(' operacion_simple ')' '#' lineas;
sino:	SINO '#' lineas ;
sino_si : SINOSI '(' operacion_simple ')''#' lineas | SINOSI '(' operacion_simple ')' '#' lineas sino_si;

ciclo_para: PARA '('inicia_para HASTA hasta_para CONPASO pasos_para ')' '#' lineas FINPARA;
inicia_para : VARIABLE inicializar | una_variable | ;
hasta_para : operando | ;
pasos_para: VARIABLE aumenta_decrementa | ;

ciclo_mientras: MIENTRAS '(' operacion_simple ')' '#' lineas FINMIENTRAS ;

%%

void set_input_string(const char* in);
void end_lexical_scan(void);

/* This function parses a string */
int parse_string(const char* in) {
  set_input_string(in);
  int rv = yyparse();
  end_lexical_scan();
  return rv;
}