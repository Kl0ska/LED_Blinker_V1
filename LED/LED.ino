

/* LED Blinken im Sekundentakt
 * Sven Kloska
 * 11.09.2020
 * Arduino Uno (Chinakopie)
 * Grüne LED an Pin 3
 */


int LED_GRN = 4; //Variable für den Ausgangspin der LED Grün

unsigned long time = millis();  //Variable um die Zeit zu speichern für das Blinken

int GRN_Status = 1;  //Variable für den Status, den die LED haben soll

void setup() {

//Pin zuweisen für die grüne LED
  pinMode(4, OUTPUT);

//Initialisiere die serielle Kommunikation
  Serial.begin(9600);

}


void loop() {


  if(millis()-time > 1000)     //Millis gibt die Laufzeit wieder, ist diese abzüglich time größer 1000 wird die Bedingung ausgeführt
  {
    GRN_Status = !GRN_Status;         //Setze den Status NOT Status
    digitalWrite(LED_GRN, GRN_Status);  //Schreibe den neuen Zustand
    time = millis();           //Schreibe die aktuelle Zeit in time, damit Laufzeit minus time 0 ergibt
  }


//Debugging Ausgabe:
Serial.print ("time: ");
Serial.print (time);
Serial.print (" Status Grüne: ");
Serial.println (GRN_Status);
//Serial.println (millis);

  
}
