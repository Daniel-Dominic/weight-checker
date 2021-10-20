weight =  int(input("Weight: "))
unit = input("(L)bs Or (K)g: ")
if unit.upper() == "L":
    converted = weight * 0.45
    print(f"You Are {converted} kilos")
else:
    converted = weight / 0.45
    print(f"You Are {converted} pounds")