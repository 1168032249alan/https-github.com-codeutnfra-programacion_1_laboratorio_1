#include <stdio.h>
#include <stdlib.h>


int main()
{
  FILE * miArchivo;
  char msj[12]="HOLA PUTOS";

  miArchivo=fopen("mihtml.html","w");

  if(miArchivo!=NULL)
    {
        fprintf(miArchivo,"<html><head>HOLA\n</head></html>");
        //fprintf(miArchivo,"<html><body>\nEQUIS DE LOL</body>");
        fprintf(miArchivo,"<html><head>");
        fprintf(miArchivo,msj);
        //fprintf("</head><html>");
    }
}
