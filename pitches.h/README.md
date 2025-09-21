# Biblioteca de Frecuencias de Notas para Arduino (Pitches)

Una biblioteca simple y ligera que define las frecuencias de las notas musicales para su uso con la función `tone()` de Arduino.

## Características

* Define las frecuencias de notas desde B0 hasta D8.
* Fácil de incluir y usar en cualquier sketch de Arduino.

## Instalación

### Método 1: Gestor de Bibliotecas de Arduino (Recomendado)

1.  Abre el IDE de Arduino y ve a **Sketch > Incluir Biblioteca > Gestionar Bibliotecas**.
2.  Busca "Pitches" en el cuadro de búsqueda.
3.  Selecciona la biblioteca y haz clic en **Instalar**.

### Método 2: Instalación Manual

1.  Descarga el archivo ZIP del repositorio.
2.  En el IDE de Arduino, ve a **Sketch > Incluir Biblioteca > Añadir Biblioteca .ZIP**.
3.  Selecciona el archivo ZIP que descargaste.

## Uso

Incluye el archivo de cabecera `pitches.h` en tu sketch para acceder a las constantes de las notas.

```cpp
#include "pitches.h"

int altavoz = 9;

void setup() {
  tone(altavoz, NOTE_C4); // Toca la nota C4 (Do central)
}

void loop() {
  // El loop está vacío
}