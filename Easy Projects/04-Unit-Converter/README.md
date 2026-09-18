# Unit Converter in C

A simple Unit Converter written in **C** that allows users to convert values between different units and measurement systems.

---

## Features

The converter supports several categories of units:

### Length

- Meters (m)
- Millimeters (mm)
- Centimeters (cm)
- Kilometers (km)
- Inches (in)
- Feet (ft)
- Yards (yd)
- Miles (mi)

### Weight / Mass

- Grams (g)
- Milligrams (mg)
- Kilograms (kg)
- Metric tons (t)
- Ounces (oz)
- Pounds (lb)

### Temperature

- Celsius (°C)
- Fahrenheit (°F)
- Kelvin (°K)

### Time

- Seconds (s)
- Minutes (min)
- Hours (h)
- Days (d)

### Volume

- Liters (L)
- Milliliters (mL)
- Centiliters (cL)
- Cubic centimeter (cm³)
- Cubic meter (m³)
- Gallons (gal)
- Cups (cup)
- Fluid ounces (fl oz)

### Area

- Square meter (m²)
- Square millimeter (mm²)
- Square centimeter (cm²)
- Square kilometer (km²)
- Square inch (in²)
- Square foot (ft²)
- Square yard (yd²)
- Square mile (mi²)
- Hectare (ha)
- Acre (ac)

### Speed

- Meter per second (m/s)
- Kilometer per hour (km/h)
- Mile per hour (mph)
- Foot per second (ft/s)
- Knot (kn)
- Centimeter per second (cm/s)
- Kilometer per second (km/s)
- Mile per second (mi/s)

### Pressure

- Pascal (pa)
- Kilopascal (kPa)
- Megapascal (MPa)
- Bar (bar)
- Millibar (mbar)
- Atmosphere (atm)
- PSI (psi)
- Millimetres of mercury (mmHg)

## Energy

- Joule (J)
- Kilojoule (kJ)
- Megajoule (MJ)
- Calorie (cal)
- Kilocalorie (kcal)
- Watt-hour (Wh)
- Kilowatt-hour (kWh)
- British thermal unit (BTU)

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
│   ├── converter.h
│   ├── length.h
│   ├── weight.h
│   ├── temperature.h
│   ├── time.h
│   ├── volume.h
│   ├── speed.h
│   ├── pressure.h
│   ├── energy.h
│   └── area.h
│
├── src/
│   ├── main.c
│   ├── converter.c
│   ├── length.c
│   ├── weight.c
│   ├── temperature.c
│   ├── time.c
│   ├── volume.c
│   ├── speed.c
│   ├── pressure.c
│   ├── energy.c
│   └── area.c
│
├── .gitignore
└── README.md
```

---

## How it Works

1. Start the program.
2. Choose a category.
3. Choose the unit you want to convert from.
4. Choose the unit you want to convert to.
5. Enter the value of the unit you want to convert.
6. The program display the value of the unit you wanted.
7. The program also display the value of the unit you inserted.

---

## How to Compile

Using GCC:

```bash
gcc src/main.c src/converter.c src/length.c src/weight.c src/temperature.c src/time.c src/volume.c src/speed.c src/area.c src/pressure.c src/energy.c -Iinclude -o converter
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
6. Area
7. Speed
8. Pressure
9. Energy

0. Exit

Choose a category: 1

========== LENGTH ==========
1. Meters
2. Millimeter
3. Centimeter
4. Kilometer
5. Inch
6. Foot
7. Yard
8. Miles

0. Back

Convert FROM: 1
Convert TO: 4
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

- [x] Add more length conversions
- [x] Add area conversions
- [x] Add speed conversions
- [x] Add pressure conversions
- [x] Add energy conversions
- [ ] Add data-storage conversions (B, KB, MB, GB, TB)
- [ ] Add currency conversion
- [ ] Add input validation
- [ ] Add conversion history
- [x] Add a more advanced menu system
- [ ] Add colored terminal output
- [ ] Improve error handling

---

## Author

**Abdou**

- GitHub: [abdourhd](https://github.com/abdourhd)

---

## License

This project is open-source and available for educational purposes.
