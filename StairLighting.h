// StairLighting biblioteka za Arduino
// Autor: Radenko Bogdanovic
#ifndef StairLighting_h
#define StairLighting_h

#include <Arduino.h>

class StairLighting {
  public:
    StairLighting(int* pins, int brojSvetala);
    void pocetak();
    void efekat1(int vremeKasnjenja);
    void efekat2(int vremeKasnjenja);
    void efekat3(int vremeKasnjenja);
    void efekat4(int vremeKasnjenja);
    void efekat5(int vremeKasnjenja);
    void efekat6(int vremeKasnjenja);
    void efekat7(int vremeKasnjenja);
    void efekat8(int vremeKasnjenja);
    void efekat9(int vremeKasnjenja);
    void efekat10(int vremeKasnjenja);

  private:
    int* _pinovi;
    int _brojSvetala;
};

#endif
