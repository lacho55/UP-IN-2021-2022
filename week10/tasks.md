# Практикум 10
## Задача 0: Най-голям от съседите си (biggestLocal)

Даден е масив от най-много 100 елемента. Намерете броя елементи, които имат ляв и десен съсед, и са по-големи от съседите си.

**Вход:** Първото число на входа е N - броя числа в масива. Следват N на брой числа - елементите на масива.

**Изход:** Изведете едно число - отговора на задачата.

**Примери:**

Вход: 

	5
	1 2 3 4 5

Изход:

	0

Вход:

	5
	1 5 1 5 1

Изход:

	2

Вход:

	2
	1 5

Изход:

	0
	
## Задача 1:
Да се състави програма, в която чрез рекусивна функция се определя НОД на две цели неотрицателни числа, които не са едновременнно равни на 0.

За пресмятане ще използваме следната рекурсивна дефиниция:

НОД ( m, n ) = m, ако n = 0
НОД ( n, m ), ако n > m
НОД ( n, m % n ) в останалите случаи
**Пример**
m = 18
n = 84
NOD = 6

## Задача 2:
Да се напише рекурсивна функция, която проверява дали елементът x принадлежи на редицата a0, a1, ..., an-1.

## Задача 3:
Да се напише рекурсивна функция, която установява, дали в записа на естественото число n се съдържа цифрата k.

## Задача 4:
Да се напише рекурсивна функция, която намира стойността на функцията на Акерман Ack(m, n), дефинирана за m >= 0 и n >= 0 по следния начин:
Ack(0, n) = n+1
Ack(m, 0) = Ack(m-1, 1), m > 0
Ack(m, n) = Ack(m-1, Ack(m, n-1)), m > 0, n > 0. Пример: ack(0,3) = 4 ack(0,4) = 5 ack(1,0) = 2 ack(1,1) = 3 ack(2,0) = 3 ack(2,1) = 5

## Задача 5:
Да се напише рекурсивна функция, която проверява дали редицата a0, a1, ..., an-1 се състои от различни елементи.