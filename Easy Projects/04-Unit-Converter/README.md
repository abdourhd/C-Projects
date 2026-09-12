# Unit Converter in C

A simple Unit Converter written in **C** that allows users to convert values between different units and measurement systems.

---

## Features

The converter supports several categories of units:

### Length

- Millimeters (mm)
- Centimeters (cm)
- Meters (m)
- Kilometers (km)
- Inches (in)
- Feet (ft)
- Yards (yd)
- Miles (mi)

### Weight / Mass

- Milligrams (mg)
- Grams (g)
- Kilograms (kg)
- Ounces (oz)
- Pounds (lb)

### Temperature

- Celsius (°C)
- Fahrenheit (°F)
- Kelvin (K)

### Time

- Seconds (s)
- Minutes (min)
- Hours (h)
- Days (d)

### Volume

- Milliliters (mL)
- Liters (L)
- Gallons (gal)
- Cups
- Fluid ounces (fl oz)

---

## Technologies

- **C**
- GCC or another C Compiler
- Standard C Library

---

## Project Structure

```text
04-Unit-Converter/
│
├── include/
│   ├── display.h
│   ├── length.h
│   ├── weight.h
│   ├── temperature.h
│   ├── time.h
│   └── volume.h
│
├── src/
│   ├── main.c
│   ├── display.c
│   ├── length.c
│   ├── weight.c
│   ├── temperature.c
│   ├── time.c
│   └── volume.c
│
├── .gitignore
└── README.md
```

---

## How it Works

1. Start the program.
2. Choose a category.
3. Choose the conversion in that category.
4. Enter the value of the unit you want to convert.
5. The program display the value of the unit you wanted.
6. The program also display the value of the unit you inserted.

---

## How to Compile

Using GCC:

```bash
gcc src/main.c src/display.c src/length.c src/weight.c src/temperature.c src/time.c src/volume.c -Iinclude -o converter
```

---

## How to Run

### Windows

```bash
converter.exe
```

### Linux / macOS

```bash
./converter
```

---

## Example

```text
=============================
       UNIT CONVERTER
=============================

1. Length
2. Weight
3. Temperature
4. Time
5. Volume
0. Exit

Choose a category: 1

--- Length ---
1. Meters → Kilometers
2. Kilometers → Meters
3. Meters → Feet
4. Feet → Meters
5. Kilometers → Miles
6. Miles → Kilometers

Choose a conversion: 1

Enter value: 2500

Result: 2500.00 m = 2.50 km
```

---

## Concepts Practiced

This project is useful for practicing several fundamental C concepts:

- Variables and data types
- `printf()` and `scanf()`
- `if` / `else`
- `switch`
- `while` / `do while`
- Functions
- Arithmetic operations
- Floating-point calculations
- Constants
- Header files
- Modular programming
- User input validation
- Basic project organization

---

## Future Improvements

Possible features to add:

- [ ] Add more length conversions
- [ ] Add area conversions
- [ ] Add speed conversions
- [ ] Add pressure conversions
- [ ] Add energy conversions
- [ ] Add data-storage conversions (B, KB, MB, GB, TB)
- [ ] Add currency conversion
- [ ] Add input validation
- [ ] Add conversion history
- [ ] Add a more advanced menu system
- [ ] Add colored terminal output
- [ ] Improve error handling

---

## Author

**Abdou**

- GitHub: [abdourhd](https://github.com/abdourhd)

---

## License

This project is open-source and available for educational purposes.
