#include <stdio.h>

void main () {
    
    int cant_doc = 0;
    int cant_img = 0;
    int cant_vid = 0;
    int cant_prog = 0;

    float tam_doc = 0.0;
    float tam_img = 0.0;
    float tam_vid = 0.0;
    float tam_prog = 0.0;
    float cap_disco_gb = 0.0;

    float esp_doc = 0.0;
    float esp_img = 0.0;
    float esp_vid = 0.0;
    float esp_prog = 0.0;

    float esp_total_mb = 0.0;
    float esp_total_gb = 0.0;
    float porcentaje_usado = 0.0;

    printf("Ingrese la cantidad de documentos: ");
    scanf("%d", &cant_doc);
    printf("Ingrese el tamano promedio de cada documento en MB: ");
    scanf("%f", &tam_doc);

    printf("Ingrese la cantidad de imagenes: ");
    scanf("%d", &cant_img);
    printf("Ingrese el tamano promedio de cada imagen en MB: ");
    scanf("%f", &tam_img);

    printf("Ingrese la cantidad de videos: ");
    scanf("%d", &cant_vid);
    printf("Ingrese el tamano promedio de cada video en MB: ");
    scanf("%f", &tam_vid);

    printf("Ingrese la cantidad de programas: ");
    scanf("%d", &cant_prog);
    printf("Ingrese el tamano promedio de cada programa en MB: ");
    scanf("%f", &tam_prog);

    printf("Ingrese la capacidad del disco duro en GB: ");
    scanf("%f", &cap_disco_gb);

    esp_doc = cant_doc * tam_doc;
    esp_img = cant_img * tam_img;
    esp_vid = cant_vid * tam_vid;
    esp_prog = cant_prog * tam_prog;

    esp_total_mb = esp_doc + esp_img + esp_vid + esp_prog;
    esp_total_gb = esp_total_mb / 1024.0;
    porcentaje_usado = (esp_total_gb / cap_disco_gb) * 100.0;

    printf("\n=== RESULTADOS DEL ALMACENAMIENTO ===\n");
    printf("Los MB usados son: %f MB \n", esp_total_mb);
    printf("Los GB usados son: %f GB \n", esp_total_gb);
    printf("El porcentaje usado del disco es: %f %% \n", porcentaje_usado);
}