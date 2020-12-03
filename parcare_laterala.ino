// Pinii motor 1
#define mpin00 5
#define mpin01 6
// Pinii motor 2
#define mpin10 3
#define mpin11 11

#define left 0 //left direction command
#define right 1 //right direction command
#define forward 2 //forward command 
#define reverse 3 //reverse command 
#define car_widht 15 //width of the car(cm)
#define car_length 20 //car length(cm)

//trebe definiti senzorii ultrasonici

void motor_setup() {
// configurarea pinilor motor ca iesire, initial valoare 0
digitalWrite(mpin00, 0);
digitalWrite(mpin01, 0);
digitalWrite(mpin10, 0);
digitalWrite(mpin11, 0);
pinMode (mpin00, OUTPUT);
pinMode (mpin01, OUTPUT);
pinMode (mpin10, OUTPUT);
pinMode (mpin11, OUTPUT);

}

// Funcție pentru controlul unui motor
// Intrare: pinii m1 și m2, direcția și viteza
void StartMotor (int m1, int m2, int forward, int speed)
{
if (speed==0) // oprire
{
digitalWrite(m1, 0);
digitalWrite(m2, 0);
}
else
{
if (forward)
{
digitalWrite(m2, 0);
analogWrite(m1, speed); // folosire PWM
}
else
{
digitalWrite(m1, 0);
analogWrite(m2, speed);
}
}
}

// Funcție de siguranță
// Execută oprire motoare, urmată de delay
void delayStopped(int ms)
{
StartMotor (mpin00, mpin01, 0, 0);
StartMotor (mpin10, mpin11, 0, 0);
delay(ms);
}

bool Park_Location_Check()
{
 //verifica daca are loc sa faca parcarea
 //daca e totul ok returneaza o valoare booleana 
 //urmeaza a fi implementat
}

void Car_Park()
{
  //se va apela la inceput Park_Location_Check()
  //daca este totul in ordine se face parcarea propriu zisa
  //urmeaza a fi implementat

}

void setup()
{
  
}

void loop() {
Car_Park();
}
