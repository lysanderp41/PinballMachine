//Pin hole tests
const int hole1 = 3;
const int hole2 = 5;
const int hole3 = 6;

int stateOfPin1 = 0;
int prevState1  = 0;

int stateOfPin2 = 0;
int prevState2  = 0;

int stateOfPin3 = 0;
int prevState3  = 0;

int score = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(hole1,INPUT);
  pinMode(hole2,INPUT);
  pinMode(hole3,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  stateOfPin1 = digitalRead(hole1);
  stateOfPin2 = digitalRead(hole2);
  stateOfPin3 = digitalRead(hole3);

  if(stateOfPin1 != prevState1 || stateOfPin2 != prevState2 || stateOfPin3 != prevState3){
    if(stateOfPin1 == HIGH || stateOfPin2 == HIGH || stateOfPin3 == HIGH){
      score++;
      Serial.println("ITS ON");
      Serial.print("SCORE: ");
      Serial.println(score);
    }
    else{
      Serial.println("OFF");
    }
    //delay(500);
  }
  prevState1 = stateOfPin1;
  prevState2 = stateOfPin2;
  prevState3 = stateOfPin3;
}



