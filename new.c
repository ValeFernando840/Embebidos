struct opciones_s{
  bool invertida  : 1;
  bool activa     : 1;
};

struct salida_s{
  void *  puerto;
  uint8_t terminal;
  struct  opciones_s opciones;
};

typedef struct salida_s * salida_t;

/*Otra manera puede ser */

typedef struct { 
  bool invertida  : 1;
  bool activa     : 1;

}opciones_st;
typedef struct { 
  void *      puerto;
  uint8_t     terminal;
  opciones_st opciones;
} salida_st;
typedef  salida_st * salida_t;

/* 
  En este caso, la estructura salida_st tiene un campo de tipo opciones_st que contiene los campos invertida y activa.
  Esto permite una mejor organización del código y una mayor claridad en la definición de las estructuras.
  La estructura salida_st se puede utilizar para representar una salida con opciones específicas, 
  mientras que la estructura opciones_st se puede reutilizar en otros contextos si es necesario.
*/

/*
  En mi .h puedo definirlo como typedef struct opciones_s opciones_t;
  */

  /*Enumeración*/

  typedef enum estado_e{
    APAGADO,
    PRENDIENDO,
    PRENDIDO,
    APAGANDO
  } estado_t:

  static estado_t estado; 