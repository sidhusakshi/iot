
int b1 = 2;
int d1 = 5;

int cnt=0,cnt2;
int timer=0;
                // a maximum of eight servo objects can be created 
int pos = 0;    // variable to store the servo position 
void setup() {
  Serial.begin(9600);      //initialize serial
pinMode(b1, INPUT_PULLUP);
pinMode(d1, OUTPUT);    
digitalWrite(d1, HIGH);
digitalWrite(d1,LOW);
  delay(300);               // wait for a second
 cnt=0;
}

void loop() {

  if(digitalRead(b1) == HIGH){  
Serial.println("VIBRATION ALERT"); 

  digitalWrite(d1, HIGH);
  delay(300);               // wait for a second
  digitalWrite(d1, LOW);
  delay(300);               // wait for a second
  
  digitalWrite(d1, HIGH);
  delay(300);               // wait for a second
  digitalWrite(d1, LOW);
  delay(300);               // wait for a second
  
  digitalWrite(d1, HIGH);
  delay(300);               // wait for a second
  digitalWrite(d1, LOW);
  delay(300);               // wait for a second
  
  }
}
