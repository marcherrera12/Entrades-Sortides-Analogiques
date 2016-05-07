/********************************************************************************
**  Projecte 5 Entrades/Sortides Analògiques.                                  **
**  Aquest programa regula la frequencia d'una sirena mitjançant 3 LDR's.      **
**  Aquest programa requereix un muntatge físic amb un altaveu i 3 LDR's.      **
********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int altaveu = 9;   
int ldr1 = A0;        
int ldr2 = A1;         
int ldr3 = A2;        
int durada;   

//Guardar els valors dels LDR's
int vLdr1;              
int vLdr2;
int vLdr3;

//********** Setup ****************************************************************
void setup()
{
  pinMode(altaveu, OUTPUT);     // Definir altaveu com a sortida
  pinMode (13, OUTPUT);
  }

//********** Loop *****************************************************************
void loop()
{
  // Atualizar valors dels LDR'S
  vLdr1 = analogRead(ldr1);
  vLdr2 = analogRead(ldr2);
  vLdr3 = analogRead(ldr3);

  // Comparar valors per saber de quin LDR dona la durada del so
  durada = min(vLdr1, vLdr2); 
  durada = min(vLdr3, durada);
 
  // Pasar el rang de 0-1023 a 5-2000
  durada = map(durada, 300, 1023,5,2000);

  // Definir durada del so
  tone(altaveu, 1000, durada);

  // Pausa entre loop's
  delay(2*durada);
  
}
