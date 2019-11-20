/*
 João Paulo Ferreira Guimarães
 joao.guimaraes@ifrn.edu.br
 https://jp-guimaraes.github.io/

*/

//Inicializa o pino 13 como saída para ligar ao led padrão da placa
void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(13, HIGH);
  delay(1000); // espera 1000 milissegundos
  digitalWrite(13, LOW);
  delay(1000); // espera 1000 milissegundos
}