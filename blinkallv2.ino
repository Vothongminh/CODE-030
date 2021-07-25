/*
This example shows how to control LED with keybpard using only a Maker UNO.
Tutorial page:
  http://makeruno.com.my/control-led-with-keyboard-using-only-maker-uno/
  
Original written by:
  26/01/18  Asyraf (Intern), Cytron Technologies
*/

void setup() 
{
  for (int i=2; i<14; i++)
      {
        pinMode(i, OUTPUT);
      }
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Input 1 to Turn LED on and 2 to off");
}

void loop()
{
  if (Serial.available())
  {
    int state = Serial.parseInt();
    if (state == 1)
    {
      for (int j=2; j<14; j++)
      {
        digitalWrite(j, HIGH);
      }
      Serial.println("Command completed LED turned ON");
    }
    if (state == 2)
    {
      for (int k=2; k<14; k++)
      {
        digitalWrite(k, LOW);
      }
      Serial.println("Command completed LED turned OFF");
    }  
  }
}
