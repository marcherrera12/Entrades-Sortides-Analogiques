/********************************************************************************
**  Projecte 4 Entrades/Sortides Analògiques.                                  **
**  Aquest programa permet regular la frequencia i la durada d'una sirena.     **
**  Aquest programa requereix un montatge físic amb un altaveu.                **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int durada = 1;
int vdurada;
int frequencia = 5;
int vfrequencia;
int altaveu = 9;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);
  // Configració del pins de sortida

  pinMode(altaveu, OUTPUT);

  //Configració del pins d'entrada

  pinMode(durada, INPUT);
  pinMode(frequencia, INPUT);

}

// La funció Loop es va repetin cada cop.
void loop()
{
  //Indicar on s'han de guardar el valor de les diferents variables
  vdurada = analogRead(durada);
  vfrequencia = analogRead(frequencia);

  //Serveix per veure els valors de les variables al monitor de l'arduino
  Serial.println(vdurada);
  Serial.println(vfrequencia);
  Serial.println();

  tone(altaveu, vfrequencia, vdurada);

  //Donar-li un temps despera entre cada cicle
  delay(1000);
}
