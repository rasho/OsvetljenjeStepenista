# OsvetljenjeStepenista

# Stair Lighting biblioteka za Arduino

Ova biblioteka omogućava jednostavnu kontrolu osvetljenja stepenica pomoću Arduina. Svaka sijalica je vezana za jedan pin, a biblioteka pruža različite efekte paljenja svetla.

## Instalacija

1. Preuzmite biblioteku: [StairLighting.zip](link-ka-zip-fajlu)
2. Otvorite Arduino IDE
3. Izaberite "Sketch" → "Include Library" → "Add .ZIP Library"
4. Odaberite prethodno preuzeti `StairLighting.zip` fajl

## Korišćenje

### Pravljenje objekta

Nakon instalacije biblioteke, prvo treba da kreirate objekat `StairLighting` i definišete pinove koji su povezani sa sijalicama:

```cpp
#include <StairLighting.h>

int pins[] = {2, 3, 4, 5}; // Pinovi koji su povezani sa sijalicama
int numLights = sizeof(pins) / sizeof(pins[0]);

StairLighting stairLights(pins, numLights);
```

### Inicijalizacija

Pre upotrebe biblioteke, morate da inicijalizujete pinove i podešavanja:

```cpp
void setup() {
  stairLights.pocetak();
  // Ostali kod setup() funkcije
}
```

### Paljenje svetla

Za paljenje svetla, koristite odgovarajuću funkciju efekta i prosledite vreme kašnjenja između svake promene stanja svetla:

```cpp
void loop() {
  stairLights.efekat1(200); // Efekat 1, vreme kašnjenja 200ms
  delay(1000); // Sačekaj 1 sekundu između efekata
  stairLights.efekat2(300); // Efekat 2, vreme kašnjenja 300ms
  delay(1000); // Sačekaj 1 sekundu između efekata
  // Ostali efekti i kod loop() funkcije
}
```

## Efekti paljenja svetla

Biblioteka pruža sledeće efekte paljenja svetla:

- `efekat1(vremeKasnjenja)`: Paljenje svetla jedno po jedno
- `efekat2(vremeKasnjenja)`: Osvetljavanje svih sijalica odjednom, zatim gašenje
- `efekat3(vremeKasnjenja)`: Osvetljavanje svih sijalica jednu po jednu, zatim gašenje istim redosledom
- `efekat4(vremeKasnjenja)`: Paljenje svetla jedno po jedno, a zatim ih gasiti jedno po jedno
- `efekat5(vremeKasnjenja)`: Paljenje

 parnih i neparnih sijalica naizmenično
- `efekat6(vremeKasnjenja)`: Paljenje svetla od poslednje ka prvoj, a zatim ih gasiti od poslednje ka prvoj
- `efekat7(vremeKasnjenja)`: Paljenje svih sijalica od prvog ka poslednjem, a zatim ih gasiti od prvog ka poslednjem
- `efekat8(vremeKasnjenja)`: Paljenje svih sijalica od prvog ka poslednjem, a zatim ih gasiti od poslednjeg ka prvom
- `efekat9(vremeKasnjenja)`: Paljenje svetla jedno po jedno, a zatim ih gasiti jedno po jedno, istim redosledom, ali u suprotnom smeru
- `efekat10(vremeKasnjenja)`: Paljenje svetla od poslednje ka prvoj, a zatim ih gasiti jedno po jedno

Zamijenite `vremeKasnjenja` sa željenim vremenom kašnjenja između promene stanja svetla (u milisekundama).

---

Uživajte u korišćenju Stair Lighting biblioteke za Arduino! Ako imate bilo kakva pitanja ili probleme, slobodno se obratite.

Autor: Radenko Bogdanovic
