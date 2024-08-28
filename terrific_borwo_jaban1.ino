// C++ code
//

int redPin1 = 2;
int redPin2 = 9;
int redPin3 = 10;
int greenPin1 = 4;
int greenPin2 = 7;
int greenPin3 = 12;
int bluePin1 = 5;
int bluePin2 = 6;
int bluePin3 = 11;
int yellowPin1 = 3;
int yellowPin2 = 8;


void setup()
{
  pinMode(redPin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
	pinMode(redPin3, OUTPUT);
	pinMode(greenPin1, OUTPUT);
	pinMode(greenPin2, OUTPUT);
	pinMode(greenPin3, OUTPUT);
	pinMode(bluePin1, OUTPUT);
	pinMode(bluePin2, OUTPUT);
	pinMode(bluePin3, OUTPUT);
	pinMode(yellowPin1, OUTPUT);
	pinMode(yellowPin2, OUTPUT);
}

void loop()
{
  digitalWrite(redPin1, HIGH);
  digitalWrite(redPin2, HIGH);
  
  digitalWrite(redPin3, 252);
  digitalWrite(greenPin3, 0);
  digitalWrite(bluePin3, 0); 
  delay(1000);
  
  digitalWrite(redPin1, LOW);
  digitalWrite(redPin2, LOW);
               
  digitalWrite(yellowPin1, HIGH);
  digitalWrite(yellowPin2, HIGH);
  
  digitalWrite(redPin3, 252);
  digitalWrite(greenPin3, 252);
  digitalWrite(bluePin3, 0);
  delay(1000);
               
  digitalWrite(yellowPin1, LOW);
  digitalWrite(yellowPin2, LOW);
  
  digitalWrite(greenPin1, HIGH);
  digitalWrite(greenPin2, HIGH);
               
  digitalWrite(redPin3, 0);
  digitalWrite(greenPin3, 252);
  digitalWrite(bluePin3, 0);
  delay(1000);
  
  digitalWrite(greenPin1, LOW);
  digitalWrite(greenPin2, LOW);
  
  digitalWrite(bluePin1, HIGH);
  digitalWrite(bluePin2, HIGH);
               
  digitalWrite(redPin3, 0);
  digitalWrite(greenPin3, 0);
  digitalWrite(bluePin3, 252);
  delay(1000);
  
  digitalWrite(bluePin1, LOW);
  digitalWrite(bluePin2, LOW);
}