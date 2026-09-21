# Questions

---

## KS_what_we_know_esp32

**Scenarie**
Martin, din chef, har netop givet dig en ESP32-mikrocontroller og bedt dig om at teste en knap. Han siger: *"Jeg ved ikke noget om programmering, men jeg har hørt, at man kan få den her ting til at fortælle, om en knap er trykket eller ej. Kan du ikke bare få den til at skrive '1' eller '0' i konsollen, afhængigt af om knappen er trykket?"*
Du kigger på koden i filen `KS_what_we_know_esp32.ino` og tænker: *"Okay, det her ser ud til at være et godt sted at starte..."*

**What we know**
Du har arbejdet med følgende værktøjer og begreber:
- `pinMode`: Til at konfigurere en pin som input eller output.
- `digitalRead`: Til at læse en digital værdi (HIGH/LOW) fra en pin.
- `Serial.begin`: Til at starte seriell kommunikation med computeren.
- `printf`: Til at udskrive tekst og værdier til konsollen.
- ESP32's GPIO-pins: Du ved, at ESP32 har specielle pins som `0` og `35`, der har særlige egenskaber.

**Task**
1. Analyser programmet:
   - Hvad gør programmet i filen `KS_what_we_know_esp32.ino`?
   - Forklar, hvordan det fungerer, og hvad outputtet vil være, når knappen trykkes.

2. Forklar funktionerne:
   - Hvad gør følgende funktioner i programmet?
      - a. `pinMode`
      - b. `digitalRead`
      - c. `Serial.begin`
      - d. `printf`

3. Specielle pins:
   - Hvad er der specielt ved værdierne `0` og `35`, når man bruger dem med `digitalRead`?
      - a. `0`
      - b. `35`
   - *Hint*: Hvad betyder `GPIO35`, hvis man kigger på ESP32's board layout? (Se recap slides).

4. Problembaseret læringsopgave:
   Martin kommer tilbage og siger: *"Jeg vil gerne have, at programmet udskriver 'Knap trykket!' i konsollen, når knappen trykkes, og 'Knap ikke trykket', når den ikke er trykket. Kan du ændre programmet, så det gør det?"*
   - Ændr programmet, så det opfylder Martins ønske. Du skal bruge en `if-else` kontrolstruktur til at løse opgaven.

**Hints**
- Husk, at `INPUT_PULLUP` betyder, at pinnen trækker op til `HIGH` (1), når knappen ikke er trykket, og `LOW` (0), når den er trykket.
- `GPIO35` er en input-only pin på ESP32. Hvad betyder det for dit program?
- `Serial.begin(115200)` starter kommunikationen med en baud rate på 115200. Hvad sker der, hvis du ikke kalder denne funktion?
- `printf` bruges til at udskrive værdier. Hvordan kan du bruge det til at udskrive tekst?

---

---

## KS_conditional_esp32

**Scenarie**
Martin, din chef, har igen bedt dig om at kigge på til ESP32-programmer. Han siger: *"Jeg forstår ikke, hvorfor det ene program skriver hele tiden i konsollen, mens det andet kun skriver, når der sker noget med knappen. Kan du ikke finde ud af, hvad forskellen er?"*

**What we know**
Du har arbejdet med følgende værktøjer og begreber:
- `pinMode`: Til at konfigurere en pin som input eller output.
- `digitalRead`: Til at læse en digital værdi (HIGH/LOW) fra en pin.
- `Serial.begin`: Til at starte seriell kommunikation med computeren.
- `printf`: Til at udskrive tekst og værdier til konsollen.
- `if`-betingelser: Til at udføre kode baseret på en betingelse.

**Task**
1. Sammenlign de til programmer, `KS_what_we_know_esp32` og `KS_conditional_esp32`:
   - Hvad er forskellen på de til programmer?
   - Hvor bruger vi en condition (`if`) til at ændre funktionen af programmet? Og hvad sker der i denne condition?

2. Hvad gør programmet `KS_conditional_esp32` anderledes end `KS_what_we_know_esp32`?
   - Forklar, hvordan `KS_conditional_esp32` opfører sig, og hvorfor det er mere effektivt i visse situationer.

3. Problembaseret læringsopgave:
   Martin spørger: *"Kan du ændre `KS_conditional_esp32`, så det udskriver 'Knap trykket!' når knappen trykkes, og 'Knap sluppet!' når den sluppes?"*
   - Ændr programmet, så det opfylder Martins ønske. Du skal bruge en `if-else` kontrolstruktur til at løse opgaven.

**Hints**
- I `KS_conditional_esp32` bruges variablen `lprev` til at huske den tidligere tilstand af knappen. Hvorfor er det nyttigt?
- `if (left != lprev)` betyder, at koden inde i `if`-blokken kun udføres, når værdien af `left` ændrer sig. Hvordan kan dette reducere antallet af udskrivninger til konsollen?
- Husk at opdatere `lprev` inde i `if`-blokken, så den altid indeholder den seneste værdi af `left`.

---

---

## p04_KS5

**Scenarie**
Martin, din chef, har bedt dig om at lave et program, der kan udskrive en persons navn, alder og BMI. Han siger: *"Jeg vil gerne have, at programmet også fortæller, om personen er undervægtig, normalvægtig, overvægtig eller svært overvægtig. Og det skal også sige, om personen er han eller hun. Kan du ikke bare lave det?"*

**What we know**
Du har arbejdet med følgende værktøjer og begreber:
- Variabler: `char[]`, `int`, `float`
- `printf`: Til at udskrive tekst og værdier til konsollen
- Kontrolstrukturer: `if-else` til at træffe beslutninger i koden

**Task**
1. I VS Code:
    - a. Åbn mappen `selective_kontrolstrukturer`
    - b. Opret en fil kaldet `p04_ks5.c`

2. I filen `p04_ks5.c`:
    - a. Definer følgende variabler inde i `main()`:
      ```c
      char name[] = "Dit Navn";
      int gender = 'F'; // eller 'M'
      int age = 20; // skriv din alder
      float bmi = 23.5; // skriv din BMI
      ```
    - b. Udskriv personens navn, alder og BMI til terminalen ved hjælp af `printf`. Overvej, hvordan du formaterer string, integer og float korrekt.

    - c. Udskriv enten `, male, meaning he is` eller `, female, meaning she is` afhængigt af `gender`-variablen:
      - i. Overvej, hvilken type kontrolstruktur der er egnet til at vælge mellem "he" eller "she".
      - ii. Overvej, hvad der sker, hvis man sætter køn til enten 'f' eller 'F'.

3. Udskriv BMI-kategorien baseret på følgende:
   - BMI under 18.5: "Underweight"
   - BMI 18.5 til 24.9: "Normal weight"
   - BMI 25.0 til 29.9: "Overweight"
   - BMI 30.0 og derover: "Obese"
   Brug de korrekte kontrolstrukturer til at bestemme kategorien.

4. Problembaseret læringsopgave:
   - Test programmet med følgende input:
     - Kelly, 13 år, 'F', BMI 23. Output skal være:
       ```
       Kelly, age 13, has a bmi of 23.0, female, meaning she is Normal weight
       ```
     - Mogens, 45 år, 'M', BMI 31. Output skal være:
       ```
       Mogens, age 45, has a bmi of 31.0, male, meaning he is Obese
       ```

**Hints**
- Brug `%s` til strings, `%d` til integers og `%.1f` til floats i `printf`.
- Brug en `if-else` struktur til at vælge mellem "he" og "she".
- Brug en `if-else if-else` struktur til at bestemme BMI-kategorien.

---

---

## p04_KS6

**Scenarie**
Martin, din chef, har bedt dig om at lave et program, der kan udskrive en persons navn, alder og BMI. Han siger: *"Jeg vil gerne have, at programmet også fortæller, om personen er undervægtig, normalvægtig, overvægtig eller svært overvægtig. Og det skal også sige, om personen er han eller hun. Kan du ikke bare lave det?"*

**What we know**
Du har arbejdet med følgende værktøjer og begreber:
- Variabler: `char[]`, `int`, `float`
- `printf`: Til at udskrive tekst og værdier til konsollen
- Kontrolstrukturer: `if-else` til at træffe beslutninger i koden
- BMI-formel: `BMI = vægt (kg) / (højde (m) * højde (m))`

**Task**
1. I VS Code:
    - a. Åbn mappen `selective_kontrolstrukturer`
    - b. Opret en fil kaldet `p04_ks6.c`

2. I filen `p04_ks6.c`:
    - a. Definer følgende variabler inde i `main()`:
      ```c
      char name[] = "Dit Navn";
      int gender = 'F'; // eller 'M'
      int age = 20; // skriv din alder
      float h = 1.75; // højde i meter
      float w = 70.0; // vægt i kg
      float bmi;
      ```
    - b. Udregn BMI ved hjælp af formlen: `bmi = w / (h * h)`.

    - c. Udskriv personens navn, alder og BMI til terminalen ved hjælp af `printf`.

    - d. Udskriv enten `, male, meaning he is` eller `, female, meaning she is` afhængigt af `gender`-variablen.

3. Udskriv BMI-kategorien baseret på følgende:
   - BMI under 18.5: "Underweight"
   - BMI 18.5 til 24.9: "Normal weight"
   - BMI 25.0 til 29.9: "Overweight"
   - BMI 30.0 og derover: "Obese"

4. Problembaseret læringsopgave:
   - Test programmet med følgende input:
     - Kelly, 13 år, 'F', 2m høj, vægt 30 kg. Output skal være:
       ```
       Kelly, age 13, has a bmi of 7.5, female, meaning she is Underweight
       ```
     - Mogens, 45 år, 'M', 2m høj, vægt 500 kg. Output skal være:
       ```
       Mogens, age 45, has a bmi of 125.0, male, meaning he is Obese
       ```

**Hints**
- Brug `%s` til strings, `%d` til integers og `%.1f` til floats i `printf`.
- Brug en `if-else` struktur til at vælge mellem "he" og "she".
- Brug en `if-else if-else` struktur til at bestemme BMI-kategorien.

---

---
## p04_KS7

**Scenarie**
Martin, din chef, har bedt dig om at lave et program, der kan tælle en counter `c` op, når man trykker på højre knap på ESP32, og ned, når man trykker på venstre knap. Han siger: *"Jeg vil gerne have, at programmet sender den nye værdi af `c` over seriell forbindelse hvert 100. millisekund. Kan du lave det?"*

**What we know**
Du har arbejdet med følgende værktøjer og begreber:
- `pinMode`: Til at konfigurere en pin som input eller output.
- `digitalRead`: Til at læse en digital værdi (HIGH/LOW) fra en pin.
- `Serial.begin`: Til at starte seriell kommunikation med computeren.
- `Serial.print`: Til at sende data over seriell forbindelse.
- Kontrolstrukturer: `if-else` til at træffe beslutninger i koden.
- Variabler og scope: Global og lokal variabeldeklaration.

**Task**
1. I Arduino IDE:
    - a. Lav et nyt Arduino-projekt kaldet `p04_ks7`.

2. Aktiver venstre og højre knap på ESP32.

3. I global scope:
    - a. Deklarer en integer variabel `c` og initialiser den til `0`.

4. I `loop()`-funktionen:
    - a. Hvert 100. millisekund:
      - i. Vurder, om venstre knap er trykket. Hvis ja, dekrementer `c` med 1.
      - ii. Vurder, om højre knap er trykket. Hvis ja, inkrementer `c` med 1.
      - iii. Send den nye værdi af `c` over seriell forbindelse.

5. Problembaseret læringsopgave:
   - Observer, at dit program virker via Serial Plotter og Serial Monitor.

**Hints**
- Brug `pinMode()` til at konfigurere knapperne som input.
- Brug `digitalRead()` til at læse tilstanden af knapperne.
- Brug `delay(100)` til at vente 100 millisekunder mellem hver opdatering.
- Brug `Serial.print()` til at sende værdien af `c` til Serial Monitor.
- Overvej, hvordan du kan bruge `if`-strukturer til at tjekke knappernes tilstand.
- Overvej, hvordan du kan bruge `++` og `--` operatorer til at inkrementere og dekrementere `c`.