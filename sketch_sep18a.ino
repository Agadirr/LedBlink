/*
  Blink
  Menyalakan LED pada Pin 7 selama 5 detik dan Mematikanya selama 5 detik.
 
  Ini Kode Programnya.
 */
 
int  led = 7;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 7.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(3000);               // Tunggu sampai 5 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(3000);               // Tunggu samapi 5 detik.
}
