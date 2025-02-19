#include <bitset>
#include <pins.h>
#include <setOutMuxBit.h>

std::bitset<4> readCols() {
  setOutMuxBit(0, true);            // Sets row select to R0, output to EN

  std::bitset<4> result;
  result[0] = digitalRead(C0_PIN);
  result[1] = digitalRead(C1_PIN);
  result[2] = digitalRead(C2_PIN);
  result[3] = digitalRead(C3_PIN);

  return result;
}

