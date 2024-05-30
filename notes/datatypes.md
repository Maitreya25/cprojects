# Basic data types
1. Ones that store integral values
2. Non integral numeric values
3. Characters <br>
... Other data types are beyond the scope of this category <br>

> [!TIP]
> While dealing with data that can go in multiple variable types, pick the one that consumes less memory. For example if you know your integer is gonna be small, prefer using short.

## int (signed integer)
let `int x = y` => y ∈ Z, this means y can be negative, positive or 0. <br>
The value y MUST be integral (obvious) <br>
<i> If y is of the form `0x*` c will assume it to be hexadecimal in nature </i>

## float
let `float x = y` => y is of the type a.bcd : a,b,c,d are numbers <br>
floats are single precision, for better precision use doubles <br>
<i> floats can also be assigned values in scientific notation </i>

## Double
similar to floats, higher precision

`Floats must end with f (y is of the form 1.3f, etc), whereas doubles may simply be denoted as 1.3`

## _Bool
let `bool x = y` => y ∈ {true, 1, false, 0} <br>
True is equivalent to 1 whereas false is equivalent to 0

` _Bool hi = true` <br>
`_Bool sameAsHi = 1`