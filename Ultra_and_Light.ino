//Output
const int ledPin = 7;

//Add servos
//Add second servo
//sdjafka;ofakij

//Sensor
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;


void setup()
{
  Serial.begin(9600);
 // pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
 // pinMode(piezoPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

}

void loop()
{
       

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
   
    if(distance <= 50 && distance != 0){
       
       digitalWrite(ledPin, HIGH);
  
    } else {
      digitalWrite(ledPin, LOW);
    }

 
   
   
}
