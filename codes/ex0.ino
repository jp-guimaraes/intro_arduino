/*
 João Paulo Ferreira Guimarães
 joao.guimaraes@ifrn.edu.br
 https://jp-guimaraes.github.io/

*/
// variáveis globais
int pino_led = 12;

//Função de inicalização
void setup(){
	pinMode(pino_led, OUTPUT);								
}
// Loop principal
void loop(){
	digitalWrite(pino_led, HIGH);
	delay(1000); // espera 1000 milissegundos
	digitalWrite(pino_led, LOW);
	delay(1000); // espera 1000 milissegundos
}