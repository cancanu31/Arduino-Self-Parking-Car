#define enA 9
#define enB 6
#define in11 5
#define in12 4
#define in21 3
#define in22 2
#define car_widht 15 //latimea masini(cm)
#define car_length 20 //lungimea masinii(cm)

void setup()
{
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(in11,OUTPUT);//de la motoare i11..i22
  pinMode(in12,OUTPUT);
  pinMode(in21,OUTPUT);
  pinMode(in22,OUTPUT);

  digitalWrite(in11,LOW);
  digitalWrite(in12,HIGH);
  digitalWrite(in21,LOW);
  digitalWrite(in22,HIGH);
  Serial.begin(9600);//lib de in out
}

void loop()
{
  analogWrite(enA,255);
  analogWrite(enB,255);
  Serial.print("MASINA MERGE");
}
