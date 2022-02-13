int M1A = 2;//Right
int M1B = 3;
int M2A  = 4;//left
int M2B = 5;

int x;

void setup() { 
Serial.begin(9600); // initiates the serial port for communication with Bluetooth
pinMode(M1A, OUTPUT);
pinMode(M1B, OUTPUT);
pinMode(M2A, OUTPUT);
pinMode(M2B, OUTPUT);

digitalWrite(M1A,LOW);
digitalWrite(M1B,LOW);
digitalWrite(M2A,LOW);
digitalWrite(M2B,LOW);
} 

void loop() { 

if(Serial.available()>0){ // read bluetooth and store in state
x = Serial.read();
}
Serial.println(x);

if(x == 83){
 Stop();
  }

if(x == 70 ){
Forward();
}

if(x == 66 ){
Backward();
}

if(x == 82 ){
Right_Sharp();
}

if(x == 76 ){
Left_Sharp();
}

if(x == 73 ){
F_Right();
}

if(x == 71 ){
F_Left();
}

if(x == 74 ){
B_Right();
}

if(x == 72 ){
B_Left();
}

}

void Forward(){
  digitalWrite(M1A,HIGH);
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,LOW);
  digitalWrite(M2B,HIGH);
  }

void Backward(){
  digitalWrite(M1A,LOW);
  digitalWrite(M1B,HIGH);
  digitalWrite(M2A,HIGH);
  digitalWrite(M2B,LOW);
  }

void Right_Sharp(){
  digitalWrite(M1A,LOW);
  digitalWrite(M1B,HIGH);
  digitalWrite(M2A,LOW);
  digitalWrite(M2B,HIGH);
  }

void Left_Sharp(){
  digitalWrite(M1A,HIGH);
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,HIGH);
  digitalWrite(M2B,LOW);
  }

void F_Right(){
  digitalWrite(M1A,LOW);  //RIGHT
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,LOW);  //LEFT
  digitalWrite(M2B,HIGH);
  }

void F_Left(){
  digitalWrite(M1A,HIGH);
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,LOW);
  digitalWrite(M2B,LOW);
  }

void B_Right(){
  digitalWrite(M1A,LOW);
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,HIGH);
  digitalWrite(M2B,LOW);
  }

void B_Left(){
  digitalWrite(M1A,LOW);
  digitalWrite(M1B,HIGH);
  digitalWrite(M2A,LOW);
  digitalWrite(M2B,LOW);
  }

void Stop(){
  digitalWrite(M1A,LOW);
  digitalWrite(M1B,LOW);
  digitalWrite(M2A,LOW);
  digitalWrite(M2B,LOW);
  }
