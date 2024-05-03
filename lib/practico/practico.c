#include <practico.h>


/**
 * @brief Sumar dos enteros de 32 bit
 * 
 * @param A Primer sumando
 * @param B Segundo sumando
 * @return Resultado de la suma 
 */
int32_t suma(int32_t A,int32_t B)
{
    int resultado_suma;
    resultado_suma = A+B;

    (void)A;
    (void)B;
    return resultado_suma;
}

/**
 * @brief Sumar los números de un arreglo en memoria
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return sumatoria de b[0] hasta b[n-1]
 */
int64_t sumatoria(int32_t n,const int32_t *b)
{
    int64_t resultado_sumatoria = 0;
    int32_t indice_j;

    for (indice_j = 0; indice_j < n; indice_j++){
        resultado_sumatoria = resultado_sumatoria + b[indice_j];
    }

    (void)n;
    (void)b;
    return resultado_sumatoria;
}

/**
 * @brief Encuentra la posicion del máximo elemento de un arreglo
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return Posición del mayor número k tal que b[k] <= b[i] para todo i en {0,..,n-1}
 */
int32_t posicion_maximo(int32_t n,const int32_t *b)
{
    int32_t posicion_max = 0, valor_max = 0, indice_i;

    if (n>1){
        valor_max = b[posicion_max];
        indice_i = 1;

        while(indice_i<n){
            if(valor_max < b[indice_i]){
                valor_max = b[indice_i];
                posicion_max = indice_i;
                indice_i ++;
            }else{
                indice_i ++;
            }
        }
    }

    (void)n;
    (void)b;
    return posicion_max;
}

/**
 * @brief Ordenar un arreglo de menor a mayor en el lugar
 *
 * Luego del llamado a esta función debe cumplirse que
 * b[i]<=b[j] para todo i <= j con i,j en {0,..,n-1}
 *  
 * @param n Cantidad de números
 * @param b Puntero al primer número
 */
void ordenar_en_sitio_menor_a_mayor(int32_t n,int32_t *b)
{
    int32_t indice_k = n-1, indice_j, aux;

    while (indice_k > 0){
        indice_j = posicion_maximo(indice_k+1, b);
        aux = b[indice_k];
        b[indice_k] = b[indice_j];
        b[indice_j] = aux;
        indice_k --;
    }

    (void)n;
    (void)b;
}
