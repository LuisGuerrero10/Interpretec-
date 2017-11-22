%option noyywrap
%{
#include "parser.h"
#include <QString>
#include <QPlainTextEdit>
int lines =1;
int errorLine = 1;
QPlainTextEdit* error;
int errorLineNumber(){
       return errorLine;
};

void setTextEditError(QPlainTextEdit* edit1)   {
    lines=1;
    error=edit1;
}

void printError(QString val){
    error->appendPlainText(val);
    errorLine=lines;
}
%}

ignorar " "|\t|\r
caracter [A-Za-z]
digito [0-9]

%%

{ignorar}							{;}
"\n"								{lines++;}
"#"									{return ('#');}
"."									{return ('.');}
";"									{return (';');}
","									{return (',');}
"("									{return ('(');}
")"									{return (')');}
"["									{return ('[');}
"]"									{return (']');}
"para"								{return PARA;}
"hasta"								{return HASTA;}
"con paso"							{return CONPASO;}
"mientras"							{return MIENTRAS;}
"++"								{return AUMENTO;}
"--"								{return DECREMENTO;}
"="									{return ASIGNAR;}
"+"									{return SUMA;}
"-"									{return RESTA;}
"%"									{return MODULO;}
"/"									{return DIVISION;}
"*"									{return MULTIPLICACION;}
"<"									{return MENOR;}
">"									{return MAYOR;}
"<="								{return MENOR_IGUAL;}
">="								{return MAYOR_IGUAL;}
"=="								{return IGUAL;}
"!=" 								{return DIFERENTE;}
"y"									{return LOGICO_Y;}
"o"									{return LOGICO_O;}
"mostrar"							{return ESCRIBIR;}
"leer"								{return LEER;}
"si"								{return SI;}
"sino si"							{return SINOSI;}
"sino"								{return SINO;}
"finsi"								{return FINSI;}
"finpara"							{return FINPARA;}
"finmientras"						{return FINMIENTRAS;}
"definir"							{return DECLARAR;}
{digito}+							{return ENTERO;}
{digito}+"."{digito}+				{return REAL;}
"\""({digito}|{caracter}|" ")*"\""	{return TEXTO;}
{caracter}({caracter}|(digito))*	{return VARIABLE;}
.					{printError(QString("Error en la linea [%1], sentencia: \"%2\"").arg(lines).arg(yytext)); }

%%

void set_input_string(const char* in) {
  yy_scan_string(in);
}

void end_lexical_scan(void) {
  yy_delete_buffer(YY_CURRENT_BUFFER);
}
