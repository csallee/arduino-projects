void setup() {                                        // put your setup code here, to run once:
  Serial.begin(9600);                                 //establish Serial connection with scanner
}

const int Kakarot = 9001;                             //Goku's minimum base strength
const int Krillin = 7000;                             // krillin base strength
const int Yamcha = 500;                               // yamcha base strength
int scream_count = 0;                                 // length of screaming

void loop() {
  int opponent = random(0,3);                        //set range of values to 3 (0,1,2) for use cases
  delay(5000);                                       //set loop cycle to 5 seconds

  switch (opponent) {                                // checks which opponent is up next
    case 0:                                          // Use case for weak opponents
      Serial.print(Yamcha);                          //call for yamcha power level
      Serial.println("? Lets get this over with.."); //throw shade at yamcha
      break;                                         //get out of yamcha case
    case 1:                                          // use case for moderate opponents
      Serial.print(Krillin);                         // call for krillin power level
      Serial.println("? You might keep me entertained.... for a minute."); //throw shade at krillin
      break;                                         // get out of krillin case
    case 2:                                          // use case for space monkeys
      Serial.println("WHAT!? Its over NINE THOUSA"); // proceed to loose mind
          while (scream_count < 10) {                // checks to see if mind is lost yet
            Serial.print("AAA");                     // loseing mind cont.
            scream_count++;                          // add one to the scream count
            delay(1000);                             // wait one second
          }
          while (scream_count == 10) {               // waits for breath to run out
            Serial.println("AAAND!!!");              // lose_yourself.exe has completed
            scream_count = 0;                        // take a new breath
            delay(1000);                             // wait one second
          }
      break;
  }
}