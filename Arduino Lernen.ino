// Hey! Ich bin ein Kommentar. Ich werde dich heute durch den Code begleiten und zeigen was alles mit dem Arduino möglich ist!

// Hier ist eine Bibliothek zu sehen. Viele schlaue entwickler haben hier schon Sachen für uns vorprogrammiert. Einbinden kannst du eine so:
#include <Servo.h>

int var_a = 3; // <- Das ist eine Variable. Diese kann NUR Ganzzahlen wie 3, 8 oder 2357 speichern. Das liegt an dem "int" hintendran.
long var_b = 9245; // <- Das ist auch eine Variable, die Ganzzahlen speichern kann. Jedoch kann diese höhere Zahlen abspeichern.
float var_c = 75.4; // Diese Variable kann eine Dezimalzahl mit Kommas speicher.
double var_d = 2745.34; // Und diese hier höhere Dezimalzahlen als float ;)
char text[] = "Diese hier kann Buchstaben speichern, aber auch text wenn die [] leer ist!";
// Nun, das war ja nicht schwer. Die Variablen kannst du so benennen wie du willst.
// Übrigens: Hinter jede Anweisung kommt ein ";" (semicolon)

// Was wir hier machen, ist dem Programm zu sagen dass es ein Servo gibt. Wir nennen aber nichts weiteres, das müssen wir dannach machen!
Servo testservo; // Das "Servo" sagt, dass es ein Servo sein soll, das "testservo" kannst du so umändern wie du willst. Es ist wie davor, eine Variablenname.


// Das unter mir, ist eine Funktion!
void setup() { // Das void heißt, dass nur etwas ausgeführt wird, ohne das uns die Funktion am ende etwas sagt.
  // Hier rein können wir nun, Code schreiben, der ganz am Anfang ein einziges mal ausgeführt wird.
  pinMode(3, OUTPUT); // Mit diesem Befehl kannst du den Pin 3 am Arduino als OUTPUT setzten. Achte hierbei auf die Groß- und Kleinschreibung!
  pinMode(4, INPUT); // Man kann Pins nicht nur als OUTPUT, sondern auch als INPUT definieren. So können wir sehen ob ein Pin ein Stromsignal bekommt.
  pinMode(var_a, OUTPUT); // Du kannst auch eine Variable als OUTPUT nehmen. Dann nimmt er den Pin, der die Zahl der Variable hat.

  Serial.begin(9600); // Damit startest du die Serielle Kommunikation, heißt, der Arduino kann etwas sagen und wir empfangen es!

  testservo.attach(8); // Jetzt kriegt das Programm endlich mal Infos über den Servo! Wir haben gesagt, dass er an Pin 8 ist :)
}

// So, das war jetzt die Vorbereitung für alles. Der ganze Spaß beginnt aber erst hier ^^

void loop() {
  // Alles was hier rein kommt, wird immer wieder und wieder und wieder un... wiederholt. Das passiert die ganze Zeit.
  Serial.print("Hallo"); // Hiermit kannst du über die Serielle Kommunikation "Hallo ausgeben"! Wichtig sind die Gänsefüßchen um das Hallo, das sagt, dass es Text ist.

  bool button = digitalRead(4); // Ein bool kann zwei Zustände haben. 0 (false) und 1 (true). Drücken wir jetzt einen Knopf, der mit Pin 4 verbunden ist, gibt dieser 1 zurück!

  if (button == 1) { // Mit dem "if", fragen wir, ob das, was in der Klammer steht, zutrifft. Wenn es darum geht, dass etwas true, also wahr ist, brauchen wir das "== 1" nicht!
    // Haben wir den Knopf jetzt gedrückt, gibt dieser den Wert 1 und es passiert alles folgende in den "{}"
    
    testservo.write(90); // So, jetzt haben wir gesagt, dass wir den Servo um 90° drehen. Das ganze passiert wie gesagt NUR, wenn die Variable "button" true ist.

  }

  delay(300); // Hier warten wir random mal 300 Millisekunden 

  if (var_b >= 300 || var_c < 395) { // Hier fragen wir ob etwas ODER etwas anderes zutrifft. Das machen wir mit "||"

    Serial.println("Joa, passt"); // Danach kommt wegen dem "ln" am Ende von "print" ein Absatz.

  } else if (var_b == 3 && var_c < 2349) { // Das else if, benutzt man um zu gucken ob eine andere Bedingung dafür zutrifft. 
    
    //Das "&&" bedeutet, dass beide Bedingungen zutrefen, dass was passiert. 
    Serial.println("Funktioniert auch!");
  
  } else {

    Serial.println("Bei allen anderen dingen, werde ich ausgegeben! Btw: Ich mag Mathe... also:");
    Serial.println(((60/20)*23+2)^5); // In dem Fall würde es "1804229351" ausgeben :D Cool, nicht wahr?

  }

  // Jedoch kannst du noch vieeeel, mehr machen. Hier ein letztes Beispiel
  var_a = analogRead(A3); // Hier verändern wir die Variable "var_a" so, dass es den Wert von dem Analogeingang 3 bekommt. Dieser liegt bei einem Wert von 0-5V zwischen 0 und 1023.

  if (var_a > 512) {
    digitalWrite(5, HIGH); // Hier geben wir Strom auf den pin *5*. Mit dem "HIGH" sagen wir das Strom draufkommt. Das ganze passier nur, wenn var_a größer als 512 ist.
  } else {
    digitalWrite(5, LOW); // Falls var_a nicht größer als 512 ist, wird Pin 5 wieder der Strom weggenommen. Das sagen wir mit "LOW"!
  }

  // Nun hast du alles Grundlegende über das Programmieren gelernt! Ich hoffe du hast es verstanden und wenn du etwas nicht verstehst, einfach melden ^^ Ich bin stolz auf dich <3
  // Falls das ganze dich so sehr vom Programmieren überzeugt hast, dass du es weitermachen willst, bringe ich dir gerne mehr bei!! :)))
  // Tschüssiiiii

}
