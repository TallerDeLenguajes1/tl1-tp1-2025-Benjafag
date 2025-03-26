# TP1

_Trabajo Practico 1 Taller de Lenguajes - Benjamin Fagioli_

## .gitignore 🚀

### ¿Por qué es conveniente incluirlo? 📋

_El archivo `.gitignore` es útil en un repositorio de Git porque permite especificar qué archivos o directorios deben ser ignorados por el control de versiones. Esto es importante porque:_

1.**Evita archivos innecesarios:** No queremos incluir archivos generados automáticamente, como compilaciones, logs o dependencias externas.

2.**Mejora la organización del repositorio:** Solo se versionan los archivos relevantes para el proyecto.

3.**Protege información sensible:** Puede evitar que se suban credenciales, claves API u otros datos privados.

4.**Reduce el tamaño del repositorio:** Excluir archivos grandes o temporales mejora la eficiencia del sistema de control de versiones.

### ¿Cuándo se debe hacer? 🔧

_Debe incluirse **desde el inicio del proyecto** para evitar que archivos no deseados sean rastreados._

### ¿Cómo configurarlo? ⚙️

_El archivo `.gitignore` se coloca en la raíz del repositorio y contiene patrones de archivos y directorios a ignorar._

## 3.g

### ¿A qué se debe que el apartado 2 y 3 tengan el mismo resultado?

_El resultado del apartado 2 es la direccion de memoria a la cual apunta el puntero, y resultado del apartado 3 es la direccion de la memoria de la variable numero, como el puntero apunta a dicha variable, estos dos resultados son el mismo._

### ¿Qué se obtiene en el punto 4?

_Se obtiene la direccion de memoria de un puntero, que a su vez es tambien un puntero_

#### ¿Es igual a los anteriores? ¿Por qué?

_No es igual a los anteriores punteros, pues es distinta de la direccion de memoria de numero (ya que es la direccion de memoria del puntero, que es al fin y al cabo otra variable y esta en otro lugar de la memoria) y por consiguiente tambien a la direccion almacenada dentro del puntero._
