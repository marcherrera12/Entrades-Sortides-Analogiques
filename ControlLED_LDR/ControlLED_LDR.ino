/********************************************************************************
**  Control de LED amb LDR.                                                    **
**  Aquest programa regula el funcionament d'un LED amb 3 LDR's.               **
**  Aquest programa requereix un muntatge físic 3 LDR's i el Led de la placa.  **
********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int ldr1 = A0;
int ldr2 = A1;
int ldr3 = A2;
int lluminositat;

//Guardar els valors dels LDR's
int vLdr1;
int vLdr2;
int vLdr3;

//********** Setup ****************************************************************
void setup()
{
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  // Atualizar valors dels LDR'S
  vLdr1 = analogRead(ldr1);
  vLdr2 = analogRead(ldr2);
  vLdr3 = analogRead(ldr3);

  Serial.println(lluminositat);
  // Comparar valors per saber de quin LDR dona la frequencia al so
  lluminositat = min(vLdr1, vLdr2);
  lluminositat = min(vLdr3, lluminositat);

  // Pasar el rang de 0-1023 a 2500-5
  lluminositat = map(lluminositat, 300, 1023, 5, 2000);

  // Definir condicions
  if (lluminositat < 1000)
  {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
  }
  // Pausa entre loop's
  delay(1000);
}
