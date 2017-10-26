#include "Arduino.h"
#include "f401reMap.h"

int pinMap(int pin)
{
  switch (pin)
  {
    case 1: return 2;
      break;
    case 2: return 3;
      break;
    case 3: return 4;
      break;
    case 4: return 5;
      break;
    case 5: return 6;
      break;
    case 6: return 7;
      break;
    case 7: return 8;
      break;
    case 8: return 9;
      break;
    case 9: return 10;
      break;
    case 10: return 11;
      break;
    case 11: return 12;
      break;
    case 12: return 13;
      break;
    case 13: return 14;
      break;
    case 14: return 15;
      break;
    case 15: return 45;
      break;
    case 16: return 44;
      break;
    case 17: return 43;
      break;
    case 18: return 42;
      break;
    case 19: return 41;
      break;
    case 20: return 40;
      break;
    case 21: return 38;
      break;
    case 22: return 37;
      break;
    case 23: return 36;
      break;
    case 24: return 35;
      break;
    case 25: return 34;
      break;
    case 26: return 33;
      break;
    case 27: return 51;
      break;
    case 28: return 50;
      break;
    case 29: return 49;
      break;
    case 30: return 48;
      break;
    case 31: return 47;
      break;
    case 32: return 46;
      break;
    case 33: return 31;
      break;
    case 34: return 30;
      break;
    case 35: return 29;
      break;
    case 36: return 28;
      break;
    case 37: return 27;
      break;
    case 38: return 23;
      break;
    case 39: return 22;
      break;
    case 40: return 21;
      break;
    case 41: return 20;
      break;
    case 42: return 19;
      break;
    case 43: return 17;
      break;
    case 44: return 16;
      break;
  }
}

