# C-Course-Exercise-3

/*****exercise3.1*****/

:pushpin:Aşağıdaki deseni çıkartan disp_crown isimli fonksiyonu yazınız. Fonksiyonun parametrik yapısı şöyle olmalıdır:

void disp_crown(int n);

Buradaki n aşağıdaki desenlerdeki en yüksek sayıyı belirtmektedir. 

1      1      1
12    212    21
123  32123  321 
123443212344321

Burada n = 4'tür.

1        1        1
12      212      21
123    32123    321 
1234  4321234  4321  
1234554321234554321

Burada n = 5'tir. n = 6 için şu desen çıkartılmalıdır:

1          1          1
12        212        21
123      32123      321 
1234    4321234    4321  
12345  543212345  54321
12345665432123456654321
 
Bu desende şu noktalara dikkat ediniz:

- En aşağı satırda boşluk yoktur ve sayılar 1'den n'e kadar artıp eksilmektedir. Girilen sayı yükselme ve alçalmada yinelenmektedir. 

- En aşağı satırın yukarısında 2'şer boşluk daha yukarısında 4'er boşluk biçiminde bir desen vardır. En tepedeki boşluk girilen sayı * 2 – 2 tanedir. Klavyeden bir değer girerek fonksiyonu o değerle çağırıp deseni ekrana bastırınız.

/*****exercise3.2*****/

:pushpin:Armstrong sayısı basamaklarının küpleri toplamı sayının kendisine eşit olan sayıya denilmektedir. Yani örneğin xyz üç basamaklı bir sayı olmak üzere x3+y3+z3 = xyz olan sayıdır. Örneğin 153 sayısı bir Armstrong sayıdır. Çünkü 13 + 53 + 33 = 153'tür. Parametresi ile aldığı sayının Armstrong olup olmadığına geri dönen is_armstrong isimli fonksiyonu yazınız. Fonksiyonun prototipi şöyledir:

int is_armstrong(int val);

Fonksiyon eğer parametresiyle belirtilen sayı Armstrong sayı ise sıfır dışı herhangi bir değere, 0 ise 0 değerine geri dönmelidir.  

Sonra bir döngü içersinde klavyeden sayı okuyarak bu sayıyla fonksiyonu çağırınız. Geri dönüş değerine bakarak sayının Armstrong olup olmadığını ekrana yazdırınız. 0 girildiğinde döngüden çıkınız. (Örneğin 370, 378, 407 birer Armstrong sayıdır.) Bu kod aşağıda verilmiştir:


Bu soruyu yaptıktan sonra 1'den n'e kadar olan tüm Armstrong sayıları aralarına boşluk karakteri bırakarak yazdıran print_armstrong isimli fonksiyonu yazıp 1000000 değeriyle çağırınız. print_armstrongs fonksiyonunun parametrik yapsı şöyle olmalıdır:

void print_armstrongs(int n);

Fonksiyon bir döngü içerisinde is_armstrong fonksiyonunu çağırarak yazılmalıdır

/*****exercise3.3*****/

:pushpin:Bir karakteri parametre olarak alıp (karakter büyük harf ya da küçük harf olabilir) aşağıdaki kalıbı ekrana yazdıran disp_char_pattern isimli fonksiyonu yazınız:

void disp_char_pattern(int ch);

![image](https://user-images.githubusercontent.com/88037846/229814589-7c5de7fe-57af-48b9-b5d9-73f78374282e.png)

Bu şekil disp_char_pattern('F') çağırması ile elde edilmiştir. 

/*****exercise3.4*****/

Pi sayısını geri dönüş değeri olarak veren fonksiyonları aşağıda belirtildiği gibi yazınız:

3.4.1)Newton tarafından önerilen aşağıdaki seriyi newton_pi isimli fonksiyon ile gerçekleştiriniz. Fonksiyonun prototipi şöyledir:

double newton_pi(int k);

![image](https://user-images.githubusercontent.com/88037846/229815089-58774e0d-15bd-4bb0-a289-2a630b8a97f0.png)

Burada k n'in alabileceği son değeri belirtmektedir. Fonksiyon seri toplamına geri dönmelidir. 

3.4.2)Nilakantha Somayaji tarafından önerilen seriyi somajaji_pi isimli fonksiyon ile gerçekleştiriniz:

double somayaji_pi(int n);

![image](https://user-images.githubusercontent.com/88037846/229815417-c46c3b77-5b89-4d9c-89e8-3914025b5d15.png)

Fonksiyonun parametresi olan n terim sayısını belirtmektedir. Örneğin yukarıdaki resimde belirtilmiş 4 tane terim vardır. Fonksiyon seri toplamına geri dönmelidir.

3.4.3)Bailey, Borwein ve Plouffe tarafından önerilen seriyi bailey_borwein_plouffe_pi isimli fonksiyon ile gerçekleştiriniz:

double bailey_borwein_plouffe_pi(int k);

![image](https://user-images.githubusercontent.com/88037846/229815722-55f318fa-2790-4f5d-880d-328821d8e055.png)

Fonksiyonun k parametresi n'nin alabileceği son değeri belirtmektedir. Fonksiyon seri toplamına geri dönmelidir.




