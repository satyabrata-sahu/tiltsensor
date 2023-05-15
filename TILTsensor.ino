int tpin=3;//sensor pin connected to pin no.3
int ledpin=4;//led pin
void setup() {
  
pinMode(tpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {

int tilt=digitalRead(tpin);
Serial.println(tilt);
delay(80);

if(tilt==1){
  digitalWrite(ledpin,HIGH);
  }
  else{
    digitalWrite(ledpin,LOW);
  }
}
