int b1Pin = 2;//Correspondente ao botão +
int b2Pin = 3;//Correspondente ao botão -
int b3Pin = 12;//Correspondete do botão RESET
int leitura1 = 0;//Leitura do botão +
int leitura2 = 0;//Leitura do botão -
int leitura3 = 0;//LEitura do botão RESET
int ultleitura1 = 0;//Última leitura do botão +
int ultleitura2 = 0;//Última leitura do botão -
int contador_display_1 = 0;//Correspondente ao contador
int contador_display_2 = 0;//Correspondente ao contador



void setup(){
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(b1Pin, INPUT);//Define b1Pin como entrada
  pinMode(b2Pin, INPUT);//Define b2Pin como entrada
  pinMode(b3Pin, INPUT);//Define o b3Pin como entrada

}


void loop(){ 
  leitura1 = digitalRead(b1Pin);//Lê o estado de b1Pin e armazena em leitura1
  leitura2 = digitalRead(b2Pin);//Lê o estado de b2Pin e armazena em leitura2
  leitura3 = digitalRead(b3Pin);//Lê o estado de b3Pin e armazena em leitura2

  if(leitura3 == HIGH){
    contador_display_1 =0;
    contador_display_2 = 0;
  }

  if (leitura1 != ultleitura1) {//Se leitura1 não for igual a ultleitura1
    if (leitura1 == HIGH) {//Se leitura1 for igual a HIGH
      
        contador_display_2++;//Incrementa contador em 1
      //contador_display_1++;//Incrementa contador em 1
      if(contador_display_2 > 9){
        delay(1000);
        contador_display_2 = 0;
        contador_display_1++;
      }
      
    }
  }
  ultleitura1 = leitura1;//Atribui a ultleitura1 o conteúdo de leitura1

  if (leitura2 != ultleitura2) {//Se leitura2 não for igual a ultleitura2
    if (leitura2 == HIGH) {//Se leitura2 for igual a HIGH
      if(contador_display_2 == 0){
        delay(100);
        contador_display_1 = contador_display_1 - 1;//Decrementa contador em 1
        contador_display_2 = 10;
        
      }
      contador_display_2 = contador_display_2 -1;//Decrementa contador em 1
        
        
    }
  }
  ultleitura2 = leitura2;//Atribui a ultleitura2 o conteúdo de leitura2

  switch (contador_display_1) {
    case 0:
      zero_1();//Executa a função zero
      break;
    case 1:
      um_1();//Executa a função um
      break;
    case 2:
      dois_1();//Executa a função dois
      break;
    case 3:
      tres_1();//Executa a função três
      break;
    case 4:
      quatro_1();//Executa a função quatro
      break;
    case 5:
      cinco_1();//Executa a função cinco
      break;
    case 6:
      seis_1();//Executa a função seis
      break;
    case 7:
      sete_1();//Executa a função sete
      break;
    case 8:
      oito_1();//Executa a função oito
      break;
    case 9:
      nove_1();//Executa a função nove
      break;

  }
  
  switch (contador_display_2) {
    case 0:
      zero();//Executa a função zero
      break;
    case 1:
      um();//Executa a função um
      break;
    case 2:
      dois();//Executa a função dois
      break;
    case 3:
      tres();//Executa a função três
      break;
    case 4:
      quatro();//Executa a função quatro
      break;
    case 5:
      cinco();//Executa a função cinco
      break;
    case 6:
      seis();//Executa a função seis
      break;
    case 7:
      sete();//Executa a função sete
      break;
    case 8:
      oito();//Executa a função oito
      break;
    case 9:
      nove();//Executa a função nove
      break;

  }

}



void zero_1() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  delay(100);
}
void um_1() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  delay(100);
}
void dois_1() {
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);


  delay(100);
}
void tres_1() {
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);


  delay(100);
}
void quatro_1() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);


  delay(100);
}
void cinco_1() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);


  delay(100);
}
void seis_1(){
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);

  delay(100);
}
void sete_1(){
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);

  delay(100);
}

void oito_1() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);

  delay(100);
}

void nove_1() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);


  delay(100);
}

void zero() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(100);
}
void um() {

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(100);
}
void dois() {

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(100);
}
void tres() {

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(100);
}
void quatro() {

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(100);
}
void cinco() {

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);


  delay(100);
}
void seis(){

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(100);
}
void sete(){

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(100);
}

void oito() {

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(100);
}

void nove() {

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(100);
}