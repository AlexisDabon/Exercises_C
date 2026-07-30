# LOGIC SERIES OF C PROGRAMMING

**Compilation:** `gcc -Wall -Wextra -Werror -pedantic -std=c11`

These C exercises cover various concepts across different levels of C programming.  
These mini-programs are iterative and are saved through regular `git commit` commands.

---

## PROGRAMS BY ORDER

### I. `01_age.c` (Dynamic Age Calculator)
An optimization of a basic static program that dynamically retrieves the current year from the system clock using `<time.h>` and prompts the user for their birth year to calculate their exact age.

### II. `02_majorite.c`
Developed an optimized C program using `unsigned int` and strict `scanf` return validation to safely handle age inputs. It robustly prevents crashes and logical errors by verifying input correctness and filtering out biologically impossible ages.

### III. `03_note.c`
This project demonstrates secure input handling in C, featuring a robust loop mechanism that validates both data types and numerical ranges. It is built to be crash-proof, ensuring that all user entries are correctly parsed and verified before registration.

### IV. `04_calculatrice.c`
Memory-optimized C calculator that uses precise `<stdint.h>` types (`int16_t` and `int8_t`) to drastically reduce its binary footprint. It guarantees system-level reliability by strictly enforcing secure input validation and standard `EXIT_FAILURE` error handling.

### V. `05_cinema.c`
An ultra-compact ticketing system that replaces bulky control structures with a direct-access price array. It calculates age-based discounts on a single line using an optimized nested ternary operator.

---

## KEY CONCEPTS

* **`01_age.c`**: Used `<time.h>` to retrieve the current system time.
* **`02_majorite.c`**: Employed `unsigned int` to validate input, preventing errors from negative numbers and non-numeric characters.
* **`03_note.c`**: Created a `void` function utilizing `getchar()` to flush the `stdin` buffer and ensure program stability.
* **`04_calculatrice.c`**: Utilized `<stdint.h>` to optimize memory usage by selecting precise integer types.
* **`05_cinema.c`**: Used a `float` array to efficiently store and access pricing data.
