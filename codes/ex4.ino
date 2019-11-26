/*
 João Paulo Ferreira Guimarães
 joao.guimaraes@ifrn.edu.br
 https://jp-guimaraes.github.io/

*/

const int buttonPin = 8;     // pino de entrada (ligar o botão)
const int ledPin =  13;      // Pino de saída (ligar o led)


int buttonState = 0;         // Variável para salvar o estado do botão

void setup() {
  // Inicializa o pino do led como saída
  pinMode(ledPin, OUTPUT);
  // Inicializa o pino do botão como entrada
  pinMode(buttonPin, INPUT);
}

void loop() {
  // le o pino de entrada de forma digital
  buttonState = digitalRead(buttonPin);

  // Se o botão tiver sido pressionado
  if (buttonState == HIGH) {
    // liga o led
    digitalWrite(ledPin, HIGH);
  }
  else {
    // Senão desliga o led
    digitalWrite(ledPin, LOW);
  }
}