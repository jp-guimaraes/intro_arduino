/*
 João Paulo Ferreira Guimarães
 joao.guimaraes@ifrn.edu.br
 https://jp-guimaraes.github.io/

*/

// variáveis globais
int pino_led_embutido = 13;
int pino_led_externo = 12;

// Inicialização de variávies, módulos, pinos, etc
void setup(){
	pinMode(pino_led_embutido, OUTPUT);
	pinMode(pino_led_externo, OUTPUT);
}

// Laço principal 	
void loop(){
	digitalWrite(pino_led_embutido, HIGH);
	digitalWrite(pino_led_externo, LOW);
	delay(1000); // espera 1000 milissegundos
	digitalWrite(pino_led_embutido, LOW);
	digitalWrite(pino_led_externo, HIGH);
	delay(1000); // espera 1000 milissegundos
}