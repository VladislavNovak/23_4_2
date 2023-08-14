## <font color="tomato">Вывод времени года</font>

Используя макросы вместе с условными директивами прекомпиляции (#if / #endif), 
реализуйте простую программу по выводу названия времени года в консоль.

Пользователь программы, который будет иметь дело с вашим кодом, в этом случае тоже программист. 
С помощью определения одного из макросов (в самом коде): 
SPRING, SUMMER, AUTUMN или WINTER он задаёт сезон, название, которое хочет увидеть на экране. 
При компиляции и запуске программы на экране должно появиться название именно этого сезона и только его.

Так как препроцессор работает до компиляции, то в #if/#endif-директивы вы можете обернуть всю функцию main сразу.