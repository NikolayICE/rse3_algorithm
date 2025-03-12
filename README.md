# Алгоритм вставки в P/Q-таблицы (C++)

Программа выполняет обработку чисел, сохраняя их в **P-таблице** (данные) и **Q-таблице** (порядок вставки).

## Как работает?

- Числа вставляются в строки **P-таблицы**, следуя алгоритму Робинсона–Шенстеда.
- Если в строке есть большее число, новое заменяет его, а старое "выталкивается" ниже.
- **Q-таблица** хранит номера вставок.

## Запуск

1. Компилируем:
   ```sh
   g++ main.cpp -o pq_tables
   ```
2. Запускаем:
   ```sh
   ./pq_tables
   ```
3. Вводим числа, получаем таблицы.

## Пример

**Вход:**
```
5
3 8 1 2 7
```
**Выход:**
```
P-таблица:
3 8
1 7
2 

Q-таблица:
1 2
3 5
4
```

P. S. Алгоритм реализован по спецзаказу Сергея Матвеева. 🚀
