assume cs:code
code segment
start:
      mov al,02h
      mov bl,03h
      add al,bl
      int 03h
 code ends
 end start
