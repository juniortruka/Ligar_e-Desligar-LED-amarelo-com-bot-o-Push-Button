/* 
  Tabela de pinos Analógico/Digitas  e seus valores  : 
Pino: GPIO16 , Constante : D0 , Valor : 16 
Pino: GPIO5 , Constante : D1 , Valor : 5
Pino: GPIO4 , Constante : D2  , Valor : 4
Pino: GPIO0 , Constante : D3 , Valor : 0
Pino: GPIO2 , Constante : D4 , Valor : 2
Pino: GPIO14 , Constante : D5  , Valor : 14
Pino: GPIO12 , Constante :D6  , Valor : 12
Pino: GPIO13 , Constante :D7  , Valor : 13
Pino: GPIO15 , Constante :D8  , Valor : 15
Pino: Analógico, Constante: A0, Valor: 17
*/
int buttonPin=4; // variável para o botão no pino D2 (GPIO4)
int ledYellow=14; // variavel para o led amarelo no pino D5(GPIO14)
int ledGreen=5; // variavel para o led amarelo no pino D1(GPIO5)
int estadoButton=0; // variavel responsavel para amarzenar o estado de do botão (ligar/desligar LED)

void setup() {
  //função configurações do código em relação ao hardware
  // configurações do LED e botão 
pinMode(ledYellow, OUTPUT); // Atribuir o led amarelo como saida para ligar-lo
pinMode(ledGreen, OUTPUT); // Atribuir o led verde como saida para ligar-lo
pinMode(buttonPin, INPUT); // atrbuir o botão como entrada  para receber a informação que foi prescionado. 

}

void loop() {

     // Verificação se o botão foi pressionado

estadoButton= digitalRead(buttonPin); // Verificar a entrada do pino do botão se está HIGH ou LOW

 if (estadoButton==LOW) {
   // função "se": 
   
   digitalWrite(ledYellow, HIGH); // se o botão não estiver pressionado, ligue o LED amarelo
   delay(500); // duração de 500 milisegundos 
   
   digitalWrite(ledYellow, LOW); // se o botão não estiver pressionado, ligue o LED amarelo
   delay(500); // duração de 500 milisegundos

   // Observação: Agora o Led amarelo assumirá o papel de alerta que o botão não está pressionado. Por isso, ele fixará ligando e desligando infinitamente. 
 }
 else{
// função "caso contrário": 
digitalWrite(ledGreen, HIGH); // Caso o botão não esteja pressionado, deslique o LED amarelo 
delay(1000); // duração de 1000 milisegundos

 }

    /*   
    Resumo: os leds irá ligar um por um, sendo que quando um estiver ligado, os outros deveram ficar deligados. 
    Poderia criar uma variável chamada "tempo ou time do tipo int ou float (dependendo da situação)" para inserir nos delay, mas ficou opcional.
   
   Materiais utilizados: 

   1. NODEMCU ESP8266;
   2. Cabo micro USB;
   3. Protoboard;
   4. Resistores de 220 Ω;
   5. Resistor de 10 kΩ;
   6. Botão tipo push button;
   7. LED difuso;
    Fios de jumper.
   */
}
