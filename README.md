Trigonometry Formulas in C

This repository contains C language programs that implement various trigonometric formulas. The goal of this project is to demonstrate the use of C to calculate common trigonometric functions, such as sine, cosine, tangent, and their inverses, using both standard and custom implementations.
Features

- Basic Trigonometric Functions:** Programs for calculating sine, cosine, tangent, secant, cosecant, and cotangent.
- Inverse Trigonometric Functions:** Functions to calculate arcsin, arccos, arctan, etc.
- Angle Conversion:** Convert angles between degrees and radians.
- *Trigonometric Identities:** Demonstration of various identities like Pythagorean, sum and difference formulas, double-angle formulas, etc.

Contents

The repository includes several C files for different trigonometric operations, organized as follows:

- `sin_cos.c`: Computes sine and cosine using standard library functions.
- `tan_sec_csc.c`: Computes tangent, secant, and cosecant.
- `nverse_trig.c`: Functions to compute inverse trigonometric values.
- `angle_conversion.c`: Converts angles between degrees and radians.
- `trig_identities.c`: Demonstrates some key trigonometric identities.

Example Usage

1. Calculate Sine and Cosine of an Angle

c
#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45.0; // angle in degrees
    double rad = angle * (M_PI / 180); // convert angle to radians

    printf("Sine of %.2f degrees: %.2f\n", angle, sin(rad));
    printf("Cosine of %.2f degrees: %.2f\n", angle, cos(rad));

    return 0;
}


2. Calculate Tangent and Cotangent

c
#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45.0; // angle in degrees
    double rad = angle * (M_PI / 180); // convert to radians

    printf("Tangent of %.2f degrees: %.2f\n", angle, tan(rad));
    printf("Cotangent of %.2f degrees: %.2f\n", angle, 1 / tan(rad));

    return 0;
}


Requirements

- C compiler (e.g., GCC)
- `math.h` library for trigonometric functions.

How to Compile and Run

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/your-username/trigonometry-c.git
    ```

2. Navigate to the folder containing the C file you want to compile:

    ```bash
    cd trigonometry-c
    ```

3. Compile the program using `gcc` (replace `filename.c` with the actual file name):

    ```bash
    gcc filename.c -o output_name -lm
    ```

4. Run the compiled program:

    ```bash
    ./output_name
    ```

Contributing

Feel free to contribute by submitting issues, suggestions, or pull requests to improve the repository. Contributions could include new formulas, optimizations, or any bugs you encounter while running the code.

License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

 Contact

For any questions or suggestions, feel free to open an issue or contact me at [your-email@example.com].

You can replace placeholders like `AWAID SARFRAZ` and `awaidsarfraz@gamil.com` with your actual GitHub username and contact email. Let me know if you'd like to make any changes
