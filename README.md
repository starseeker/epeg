epeg
====

Insanely fast JPEG/JPG thumbnail scaling with the minimum fuss and CPU
overhead. It makes use of libjpeg features of being able to load an image by
only decoding the DCT coefficients needed to reconstruct an image of the size
desired.

Forked from https://github.com/koofr/epeg which was forked from
https://github.com/mattes/epeg

## Dependencies

cmake nasm

## Install

```sh
git clone https://github.com/koofr/epeg.git
cd epeg
mkdir build
cd build
cmake ..
sudo make install
```

