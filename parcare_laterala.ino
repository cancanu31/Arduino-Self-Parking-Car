#define enA 9
#define enB 6
#define in11 5
#define in12 4
#define in21 3
#define in22 2

#define echo2 A0
#define trig2 A1

long duration2; 
int distance2;
unsigned long myTime;

void setup()
{
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(in11,OUTPUT);//de la motoare i11..i22
  pinMode(in12,OUTPUT);
  pinMode(in21,OUTPUT);
  pinMode(in22,OUTPUT);


  pinMode(echo2,INPUT);
  pinMode(trig2,OUTPUT);

  digitalWrite(in11,LOW);
  digitalWrite(in12,LOW);
  digitalWrite(in21,LOW);
  digitalWrite(in22,HIGH);
  Serial.begin(9600);//lib de in out
}

void loop()
{
  analogWrite(enA,184);
  analogWrite(enB,252);
  Serial.print("MASINA MERGE");

  ///SENZOR2
  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration2 = pulseIn(echo2, HIGH);
  distance2 = duration2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Serial.print("Distance2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  myTime = millis();
  ///roteste 45
  
  if(myTime<=255)
  {
     analogWrite(enA,0);
     analogWrite(enB,90);
  }  
   
  if(distance2>8)
  {
  digitalWrite(in11,HIGH);
  digitalWrite(in12,LOW);
  digitalWrite(in21,LOW);
  digitalWrite(in22,HIGH);
  analogWrite(enA,184);
  analogWrite(enB,230);
  }
  else
  {
     digitalWrite(in11,LOW);
      digitalWrite(in12,LOW);
      digitalWrite(in21,LOW);
      digitalWrite(in22,LOW);
      
  } 
}
  
