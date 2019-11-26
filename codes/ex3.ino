/*
 João Paulo Ferreira Guimarães
 joao.guimaraes@ifrn.edu.br
 https://jp-guimaraes.github.io/

*/

// variáveis globaiss
int pino_led_embutido = 13;
int pino_led_externo = 12;

void piscar(int tempo){
	digitalWrite(pino_led_embutido, HIGH);
	digitalWrite(pino_led_externo, LOW);
	delay(tempo); // espera
	digitalWrite(pino_led_embutido, LOW);
	digitalWrite(pino_led_externo, HIGH);
	delay(tempo); // espera 
}

// Inicialização de variávies, módulos e pinos
void setup(){
	pinMode(pino_led_embutido, OUTPUT);
	pinMode(pino_led_externo, OUTPUT);
}

// Laço principal 	
void loop(){
	for(int i=250;i<=2000;i=i+250){
	piscar(i);
}					