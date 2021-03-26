# Salvando o Histograma de Cada *Pixel*

Diferente do codigo, onde é feito o *Thresholding*, do qual pegamos apenas o preto e o branco da foto, neste codigo o histograma **RGB** de cada pixel; e também a intensidade dos *pixels* são salvas no arquivo de texto. Em outra palavras, este codigo retorna o **micro** da foto ao invés do **macro**. Porém, ainda é preciso estudar melhor os conceito que envolve este algoritmo, pois trabalhar a nivel de *pixel* é mais complexo do que trabalhar com a intensidade da luz ou sombra da foto (da forma que está sendo feita nos outros codigos).

## Como Usar

Para compilar e rodar o programa é preciso instalar e configurar a biblioteca chamada [**OpenCV**](https://opencv.org/), do qual visa tornar a computação visual em tempo-real optimizada. A [documentação](https://docs.opencv.org/master/d9/df8/tutorial_root.html) ensina como instalar dentre outras coisas interesantes que a biblioteca permite fazer,  porém para este projeto (e outro que trabalham com **OpenCV**) é preciso configurar no [**IDE** ***Visual Studio***](https://docs.opencv.org/master/dd/d6e/tutorial_windows_visual_studio_opencv.html).  