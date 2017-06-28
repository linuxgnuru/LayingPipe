const byte PROGMEM node_0[] = {
  8, 8, 
0x7E, 0xE7, 0xE7, 0x81, 0x81, 0xE7, 0xE7, 0x7E,
};

const byte PROGMEM node_1[] = {
  8, 8,
0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFE, 0x7E,
};

const byte PROGMEM node_2[] = {
  8, 8,
0x7E, 0xFF, 0xF3, 0xE3, 0xC7, 0xCF, 0xFF, 0x7E,
};

const byte PROGMEM node_3[] = {
  8, 8,
0x7E, 0xFF, 0xCF, 0xC7, 0xE3, 0xF3, 0xFF, 0x7E,
};

const byte PROGMEM node_4[] = {
  8, 8,
0x7E, 0xFF, 0x99, 0x99, 0x99, 0x99, 0xFF, 0x7E,
};

const byte PROGMEM node_5[] = {
  8, 8,
0x7E, 0xC3, 0xC3, 0xFF, 0xFF, 0xC3, 0xC3, 0x7E,
};

const byte PROGMEM node_6[] = {
  8, 8,
0x7E, 0xFF, 0xF3, 0xF3, 0xCF, 0xCF, 0xFF, 0x7E,
};

const byte PROGMEM node_7[] = {
  8, 8,
0x7E, 0xFF, 0xCF, 0xCF, 0xF3, 0xF3, 0xFF, 0x7E,
};

const byte PROGMEM node_8[] = {
  8, 8,
0x7E, 0xFF, 0xFF, 0x81, 0x81, 0xFF, 0xFF, 0x7E,
};

const byte PROGMEM node_9[] = {
  8, 8,
0x7E, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x7E,
};

const byte PROGMEM node_10[] = {
  8, 8,
0x7E, 0xE7, 0xC3, 0x99, 0x99, 0xC3, 0xE7, 0x7E,
};

const byte PROGMEM node_11[] = {
  8, 8,
0x7E, 0xEF, 0xE7, 0xE3, 0xE3, 0xE7, 0xEF, 0x7E,
};

const byte PROGMEM node_12[] = {
  8, 8,
0x7E, 0xE7, 0xC3, 0x81, 0x81, 0xC3, 0xE7, 0x7E,
};

const byte PROGMEM node_13[] = {
  8, 8,
0x7E, 0xE7, 0xE7, 0xF9, 0xF9, 0xFF, 0xFF, 0x7E,
};

const byte PROGMEM node_14[] = {
  8, 8, 
0x7E, 0xFF, 0xFF, 0x9F, 0x9F, 0xE7, 0xE7, 0x7E,
};

const byte PROGMEM node_15[] = {
  8, 8, 
0x7E, 0x9F, 0x9F, 0xE7, 0xE7, 0xF9, 0xF9, 0x7E,
};

const byte PROGMEM node_16[] = {
  8, 8, 
0x7E, 0xF9, 0xF9, 0xE7, 0xE7, 0x9F, 0x9F, 0x7E,
};

const byte PROGMEM node_17[] = {
  8, 8, 
0x7E, 0x99, 0x99, 0xE7, 0xE7, 0x99, 0x99, 0x7E,
};






const byte PROGMEM pipe_nothing[] = {
  7, 8,
  0x80,  0x00, 0x80, 0x00, 0x80, 
};


const byte PROGMEM pipe_horizontal[] = {
  12, 16,
/*  0x70,  0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, */
0x20,  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const byte PROGMEM pipe_vertical[] = {
  12, 16,
 /* 
  0x00,  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
*/
0x00,  0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const byte PROGMEM pipe_corner_TL[] = {
 12, 16,
 /*
0x70,  0x70, 0x70, 0x78, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
*/
0x20,  0x20, 0x20, 0x10, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const byte PROGMEM pipe_corner_TR[] = {
 12, 16,
 /*
0x00,  0x00, 0x00, 0x00, 0x1F, 0x3F, 0x7F, 0x78, 0x70, 0x70, 0x70, 0x70,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
*/
0x00,  0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x10, 0x20, 0x20, 0x20, 0x20,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const byte PROGMEM pipe_corner_BL[] = {
 12, 16,
/*
0x70,  0x70, 0x70, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
*/
0x20,  0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const byte PROGMEM pipe_corner_BR[] = {
 12, 16,
/*
0x00,  0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0x70, 0x70, 0x70, 0x70,
0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
*/
0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


