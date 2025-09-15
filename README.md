# L298N motor sürücü ile 4 DC motoru Bluetooth üzerinden kontrol etme

<img width="350" height="280" alt="image" src="https://github.com/user-attachments/assets/84fdda87-d0be-48e4-9cad-3192e78905a1" /> 
<img width="400" height="280" alt="image" src="https://github.com/user-attachments/assets/31248872-a7a1-46a6-81ac-b22f2f66352f" />
 <br>

## L298N Motor Sürücüsü	Hakkında Genel Bilgiler					
**Girişler:** Arduino'dan gelen yön kontrol sinyallerini kullanır.(IN1-IN2 "SOL" , IN3-IN4 "SAĞ" )						
						
						
**Aktif Pinler:** Motorların PWM sinyali ile güç ve hız ayarları kontrol edilir.(ENA-ENB)						
						
**NOT:** bu kısa devre pinleri çıkartılırsa PWM kullanıcı tarafından kontrol edilebilir. Eğer takılır bırakılırsa motorlara giden güç ve hız en yüksek kademede olacaktır. ( analogWrite(pin, 0–255) )						
						
						
**NOT2:** Bu kartın içerisinde 5V ENABLE pin mevcuttur. Kısa devre pini TAKILI ise kart 5V çıkış verir arduino için. Ancak sürücüye 12 volttan yüksek bir voltaj verilirse, bu 5V ENABLE pini TAKILMAMALIDIR aksi takdirde regülatör yanacaktır.Giriş gerilimi 12V+ ise pini takma. Giriş gerilimi 5<12 ise takabilirsin. (Arduino kartlarına en fazla 20 VDC'ye kadar uygulanabilir. VIN ile harici güç kaynak bağlanabilir.)	

# Bağlantı Şekli

#### Arduino'ya bağlanacak pinler

**int IN1 = 7; //Arduino'dan motor sürücüye**

**int IN2 = 6; //Arduino'dan motor sürücüye**

**int IN3 = 5; //Arduino'dan motor sürücüye**

**int IN4 = 4; //Arduino'dan motor sürücüye**


# Kod atılması

**Kodu atarken lütfen bluetoothun RX/TX pinlerini Arduino'ya takılı bir şekilde bırakmayınız. Bırakırsanız kodunuz gitmeyecektir. Rx[(Receiver)= Alıcı], Tx[(Transmitter)= Verici]**
**Ayrıca hangi karta atacağınızı seçmeyi ve port ayarları yapmayı unutmayınız**
						
						
						
					

