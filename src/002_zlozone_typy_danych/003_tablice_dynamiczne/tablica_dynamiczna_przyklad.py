# Tworzenie dynamicznej listy liczb całkowitych
dynamic_list = [10, 20, 30, 40, 50]

# Wyświetlanie zawartości listy
for num in dynamic_list:
    print(num, end=" ")

# Dodawanie nowego elementu do listy
new_num = 60
dynamic_list.append(new_num)

# Wyświetlanie zaktualizowanej zawartości listy
print("\nZaktualizowana lista:")
for num in dynamic_list:
    print(num, end=" ")
