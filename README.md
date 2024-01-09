# Decompilation Information

This was decompiled from Star Wars Episode 1 Racer, Steam Version.

The original Ghidra information is available in the decompiled directory, with
the following modifications:
* Includes typedefs for the missing exported types
* Converted the FUN\_004238d0 function to WinMain as an entry point

This will not be changed further, and used for reference. The src directory
will attempt to get this code compiling, without trying to actually translate
the internals, just get types correct and the executable running.

This is to assist the main [decompiler effort](https://github.com/tim-tim707/SW_RACER_RE),
to get more information about the types in the function signatures and the DAT
variables

## Compiling on 64-bit Windows

This is a 32-bit windows application, so it will need to be cross compiled on
Windows using the i686-w64-mingw32-gcc variant.

I recommend installing through chocolatey:

```
choco install mingw
```

Then launch the mingw32 environment, from the terminal:
```
mingw32
```

In the mingw32 shell, install the required compiler, and make:
```
pacman -S make
pacman -S mingw-w64-i686-gcc
```
Then run make to build. This will only build from inside that shell. The
application executes normally on a 64-bit windows host.

## Compiling on 64-bit Linux

I used archlinux to build this, so instructions related to that.

Install the 32-bit libraries for gcc:
```
sudo pacman -S lib32-gcc-libs
```
This requires the pacman multilib repository enabled.

And install the 32-bit version of Wine for the windows libraries:
```
git clone https://aur.archlinux.org/wine-git.git
makepkg
sudo pacman -U wine-git-<version>.pkg.tar.zst
```
This is only available in the Arch User Repository.  There are a lot of
dependencies, but they are all available in the main multilib repository
