int A=4, B=5, C=6, D=7;




int num[10][4] = {
  {A,B,C,D}, //zero
  {A}, //um
  {B}, //dois
  {A,B}, //tres
  {C}, //quatro
  {A,C}, //cinco
  {B,C}, //seis
  {A,B,C}, //sete
  {D}, //oito
  {D,A}, //nove
};

void setup(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}

void loop(){
  for(int i=0;i<10;i++){
  	apagaTela();
    numero(i);
    delay(1000);
  }
}
void apagaTela(){
	digitalWrite(A, LOW);
  	digitalWrite(B, LOW);
  	digitalWrite(C, LOW);
  	digitalWrite(D, LOW);
}
void numero(int n){
	for(int i=0;i<4;i++) digitalWrite(num[n][i], HIGH);
}

