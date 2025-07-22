Простой прогрессбар для не больших проектов на C++

## пример использования в коде
```
int main()
{
    int width = 50 // ширина прогрессбара
    std::string coment = "коментарий к прогрессбару"
    for(int i = 0; i < 100; i++)
    {
        Draw_ProgressBar(i + 1, 100, coment);
    }
    system("Pause");
}
```
