/******************************************************************************
**   Projecte 7.2 Entrades/Sortides Analògiques.                             **
**   Aquest programa permet reproduir paraules en morse.                     **
**   Aquest programa requereix un montatge físic amb un altaveu.             **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
// pin for speaker
const int pin = 8;

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //H   ** HELLO WORLD **
  punt();
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiP();

  //W
  punt();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //D
  ratlla();
  punt();
  punt();
  //Espai entre paraules
  espaiP();
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000 / velocitat);
  delay(1000 / velocitat);
  delay(1000 / velocitat);
}

void ratlla()
{
  tone(pin, note, 3 * (1000 / velocitat));
  delay(3 * (1000 / velocitat));
  delay(1000 / velocitat);
}

void espaiL()  //Espai entre lletres
{
  delay(2 * (1000 / velocitat));
}

void espaiP()  //Espai entre paraules
{
  delay(6 * (1000 / velocitat));
}

