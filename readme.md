# Quantum Mechanical Keyboard Firmware

## This is an outdated version of Vial QMK firmware which supports Matrix IM+ only!

## How to build

```
git clone https://github.com/nug-/vial-qmk.git
git submodule init
git submodule update
make git-submodule
qmk compile -kb matrix/implus_rgb -km nug
```
