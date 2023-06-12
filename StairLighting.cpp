// StairLighting.cpp

#include "StairLighting.h"

StairLighting::StairLighting(int* pinovi, int brojSvetala) {
  _pinovi = pinovi;
  _brojSvetala = brojSvetala;
}

void StairLighting::pocetak() {
  for (int i = 0; i < _brojSvetala; i++) {
    pinMode(_pinovi[i], OUTPUT);
  }
}

void StairLighting::efekat1(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
    digitalWrite(_pinovi[i], LOW);
  }
}

void StairLighting::efekat2(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
  }
  delay(vremeKasnjenja);
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], LOW);
  }
  delay(vremeKasnjenja);
}

void StairLighting::efekat3(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
  }
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], LOW);
    delay(vremeKasnjenja);
  }
}

void StairLighting::efekat4(int vremeKasnjenja) {
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
    digitalWrite(_pinovi[i], LOW);
    delay(vremeKasnjenja);
  }
}

void StairLighting::efekat5(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i += 2) {
    digitalWrite(_pinovi[i], HIGH);
  }
  delay(vremeKasnjenja);
  for (int i = 0; i < _brojSvetala; i += 2) {
    digitalWrite(_pinovi[i], LOW);
  }
  delay(vremeKasnjenja);
  for (int i = 1; i < _brojSvetala; i += 2) {
    digitalWrite(_pinovi[i], HIGH);
  }
  delay(vremeKasnjenja);
  for (int i = 1; i < _brojSvetala; i += 2) {
    digitalWrite(_pinovi[i], LOW);
  }
  delay(vremeKasnjenja);
}

void StairLighting::efekat6(int vremeKasnjenja) {
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
  }
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], LOW);
    delay(vremeKasnjenja);
  }
}

void StairLighting::efekat7(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
  }
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], LOW);
    delay(vremeKasnjenja);
  }
}

void StairLighting::efekat8(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
  }
  delay(vremeKasnjenja);
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], LOW);
  }
  delay(vremeKasnjenja);
}

void StairLighting::efekat9(int vremeKasnjenja) {
  for (int i = 0; i < _brojSvetala; i++) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
    digitalWrite(_pinovi[i], LOW);
  }
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
    digitalWrite(_pinovi[i], LOW);
  }
}

void StairLighting::efekat10(int vremeKasnjenja) {
  for (int i = _brojSvetala - 1; i >= 0; i--) {
    digitalWrite(_pinovi[i], HIGH);
    delay(vremeKasnjenja);
    digitalWrite(_pinovi[i], LOW);
  }
}
