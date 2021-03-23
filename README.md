# Pasting-The-Wall

> Author : Ya Chen <br>
> Date : 2021 / 3 / 23

---

## Description :

You are going to paste a specific wallpaper on a wall at home. The wall is viewed as an m-by-n array, and a lowercase letter ( a to z ) or a `*` character is written down in each element. The wallpaper can be viewed as a string of length k consisting of lowercaes letters ( a to z ).<br>
<br>
The wallpaper has to be hung in a way that each letter on the wallpaper <b>matches</b> the symbols have to be the same, or one of two symbols is `*`.<br>
Additionally, every piece of wallpaper can be hung horizontally or vertically; the string on the wallpaper is read either from <b>left to right</b> or from <b>top to bottom</b> on the wall.<br>
<br>
It is allowed that two pieces of wallpaper <br>overlap<br>. Write a program to determine <b>whether</b> you can paste the wall with the given wallpaper such that every element on the wall, <b>except</b> `*`, has to be covered.<br>
<br>

## Input :

- The 1 st line of the input contains three numbers, `m` , `n`, and `k`. Two consecutive numbers are separated by a space.
- The folloeing `m` lines are the letters on the wall. Each line is a string of length `n`.
- The last line is the wallpaper, which is a string of length `k`.
  <br>
  <br>

## Sample Input 0

```
1 8 2
abababab
ab
```

## Sample Output 0

```
1
```

## Sample Input 1

```
1 9 3
ababababa
aba
```

## Sample Output 1

```
1
```

## Sample Input 2

```
4 6 3
*atb**
atb*tb
tb**b*
batb**
atb
```

## Sample Output 2

```
1
```

## Sample Input 3

```
4 6 3
*atb*a
atb*tb
tba*b*
batb**
atb
```

## Sample Output 3

```
0
```

## Sample Input 4

```
2 5 2
b****
a***a
ba
```

## Sample Output 4

```
1
```

## Sample Input 5

```
6 7 7
a*erage
vva****
e*er***
r**ra**
a***age
g****ge
average
```

## Sample Output 5

```
0
```
