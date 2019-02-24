#define button 2 // define pino 2 com o nome button
int tempo=0; // cria a variavel tempo
int lidomaximo=0; // cria a variavel lidomaximo

void setup(){
pinMode(10,OUTPUT); pinMode(9,OUTPUT); pinMode(8,OUTPUT); pinMode(7,OUTPUT); // definindo os pinos como saida para o display
pinMode(6,OUTPUT); pinMode(5,OUTPUT); pinMode(4,OUTPUT); pinMode(3,OUTPUT);
pinMode(2,INPUT); // entrada de sinal do push button
Serial.begin(9600); // inicia a comunicação serial

 digitalWrite(4,HIGH);   delay(1000); digitalWrite(4,LOW);  // aquecimento do sensor
 digitalWrite(6,HIGH);  delay(1000); digitalWrite(6,LOW);
 digitalWrite(8,HIGH); delay(1000); digitalWrite(8,LOW);
 digitalWrite(4,HIGH);   delay(1000); digitalWrite(4,LOW);
 digitalWrite(6,HIGH);  delay(1000); digitalWrite(6,LOW);
 digitalWrite(8,HIGH); delay(1000); digitalWrite(8,LOW); 
 digitalWrite(4,HIGH);   delay(1000); digitalWrite(4,LOW);
 digitalWrite(6,HIGH);  delay(1000); digitalWrite(6,LOW);
 digitalWrite(8,HIGH); delay(1000); digitalWrite(8,LOW);
 digitalWrite(4,HIGH);   delay(1000); digitalWrite(4,LOW);
 digitalWrite(6,HIGH);  delay(1000); digitalWrite(6,LOW);
 digitalWrite(8,HIGH); delay(1000); digitalWrite(8,LOW);
}

void loop(){


  digitalWrite(10,HIGH);
  int leitura_button = digitalRead(button);
  if (leitura_button == 1){

    for(tempo=0;tempo<=31;tempo++){ // Leitura do sensor "31 amostras" 
      int sensor = analogRead(A0);
      digitalWrite(10,HIGH);
      Serial.println(lidomaximo);
      delay(100);
      digitalWrite(10,LOW);
      delay(100);
      if(sensor > lidomaximo) // guarda na variavel "lidomaximo" o valor máximo recebido pelo sensor
      {
        lidomaximo = sensor; 
      }

    }

//******************************************RESULTADO


      if (lidomaximo < 250) // ZERO
  {
    digitalWrite(8,HIGH);digitalWrite(7,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);digitalWrite(9,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;

  }
  else if (2250<lidomaximo&&lidomaximo<275) // UM
  {
    digitalWrite(9,HIGH); digitalWrite(5,HIGH); // pinos em HIGH para indicar o numeral no display
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW);// limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
  else if (275<lidomaximo&&lidomaximo<300) // DOIS
  {
    digitalWrite(8,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (300<lidomaximo&&lidomaximo<325) // TRES
  {
    digitalWrite(8,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (325<lidomaximo&&lidomaximo<350) // QUATRO
  {
    digitalWrite(5,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(7,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (350<lidomaximo&&lidomaximo<375) // CINCO
  {
    digitalWrite(8,HIGH); digitalWrite(4,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(7,HIGH);
    digitalWrite(5,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (400<lidomaximo&&lidomaximo<450) // SEIS
  {
    digitalWrite(3,HIGH); digitalWrite(6,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(5,HIGH); digitalWrite(4,HIGH);
    digitalWrite(7,HIGH); digitalWrite(8,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (450<lidomaximo&&lidomaximo<500) // SETE
  {
    digitalWrite(8,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(5,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
    else if (500<lidomaximo&&lidomaximo<550) // OITO
  {
    digitalWrite(8,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(7,HIGH);
    digitalWrite(5,HIGH); digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
   else if (lidomaximo>550) // NOVE
  {
    digitalWrite(8,HIGH); digitalWrite(9,HIGH); // pinos em HIGH para indicar o numeral no display
    digitalWrite(6,HIGH); digitalWrite(7,HIGH);
    digitalWrite(5,HIGH); digitalWrite(4,HIGH);
    delay(10000);
    digitalWrite(3,LOW); digitalWrite(4,LOW); // limpa o digito apresentado no display
    digitalWrite(5,LOW); digitalWrite(6,LOW);
    digitalWrite(7,LOW); digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    lidomaximo = 0;
  }
}}
    
