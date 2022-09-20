#include <stdio.h>
#include <math.h>

int main(){

int femur_pulga,humero_pulga;

float altura_mujer_femur,altura_mujer_humero,altura_hombre_femur,altura_hombre_humero;

int m_femur_mujer=0,cm_femur_mujer=0;
int m_femur_hombre=0,cm_femur_hombre=0;
int m_humero_mujer=0,cm_humero_mujer=0;
int m_humero_hombre=0,cm_humero_hombre=0;

int media_m_mujer,media_cm_mujer;
int media_m_hombre,media_cm_hombre;

printf ("\nLongitud del femur: ");
scanf("%d", &femur_pulga);

printf ("\nLongitud del húmero: ");
scanf("%d", &humero_pulga);

altura_mujer_femur=(femur_pulga*1.94 +28.7)*2.54;
altura_hombre_femur=(femur_pulga*1.88 +32)*2.54;
altura_mujer_humero=(humero_pulga*2.8+28.2)*2.54;
altura_hombre_humero=(humero_pulga*2.9+27.9)*2.54;

if(altura_mujer_femur>100 || altura_hombre_femur>100 )
{
    m_femur_mujer++;
    cm_femur_mujer=altura_mujer_femur-100;

     m_femur_hombre++;
    cm_femur_hombre=altura_hombre_femur-100;
}
if(altura_mujer_humero>100 || altura_hombre_humero>100)
{
    m_humero_mujer++;
    cm_humero_mujer=altura_mujer_humero-100;

     m_humero_hombre++;
    cm_humero_hombre=altura_hombre_humero-100;
}

printf("\nEstimacion femur mujer: %d m %d cm",m_femur_mujer,cm_femur_mujer);
printf ("\nEstimacion femur hombre: %d m %d  cm",m_femur_hombre,cm_femur_hombre);

printf("\nEstimacion humero mujer: %d m %d cm ",m_humero_mujer,cm_humero_mujer);
printf ("\nEstimacion humero hombre %d m %d cm",m_humero_hombre,cm_humero_hombre);

media_m_mujer= (m_femur_mujer + m_humero_mujer)/2;
media_m_hombre= (m_femur_hombre + m_humero_hombre)/2;
media_cm_mujer= (cm_femur_mujer + cm_humero_mujer)/2;
media_cm_hombre= (cm_femur_hombre + cm_humero_hombre)/2;
printf ("\nEstimacion media mujer: %d m %d cm",media_m_mujer, media_cm_mujer);
printf("\nEstimacion media hombre: %d  m %d cm",media_m_hombre,media_cm_hombre);



}
