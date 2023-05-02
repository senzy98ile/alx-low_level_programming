name: C/C++ CI

on:
  push:
    branches: [ "starlen" ]
  pull_request:
    branches: [ "starlen" ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3
    - name: configure
      run: ./configure
    - name: make
      run: make
    - name: make check
      run: make check
    - name: make distcheck
      run: make distcheck
