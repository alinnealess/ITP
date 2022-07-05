#include <stdio.h>
#include <math.h>


int main(void) {
  double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
  double media_arit, media_geo1, media_harm, media_geo;
  double erro_harm, erro_geo, erro_medio;

  scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &a1, &a2, &a3, &a4, &a5, &a6, &a7,&a8 ,&a9 ,&a10);

  //medias
  media_arit = ((a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10)/10);

  media_harm = (10/(1/a1 + 1/a2 + 1/a3 + 1/a4 + 1/a5 + 1/a6 + 1/a7 + 1/a8 + 1/a9 + 1/a10));

  media_geo1 = (a1 * a2 * a3 * a4 * a5 * a6 * a7 * a8 * a9 * a10);
  media_geo = pow(media_geo1,0.1);

  

  //erros
  erro_harm = ((media_harm - media_arit) / media_arit);
  erro_geo = ((media_geo - media_arit) / media_arit);
  erro_medio = ((erro_harm + erro_geo) / 2)*100;


  
  printf("Média aritmética é %.2lf\n", media_arit);
  printf("Média harmônica é %.2lf\n", media_harm);
  printf("Média geométrica é %.2lf\n", media_geo);
  printf("Erro médio é %.2lf %\n", erro_medio);
  return 0;
}