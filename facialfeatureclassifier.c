#include <stdio.h>

// Function to classify face shape
const char* getFaceShape(float jawWidth, float faceHeight) {
    float ratio = jawWidth / faceHeight;
    if (ratio > 1.4)
        return "Round";
    else if (ratio < 1.1)
        return "Oval";
    else
        return "Square";
}

// Function to classify eye type
const char* getEyeType(float eyeWidth, float eyeHeight) {
    float ratio = eyeWidth / eyeHeight;
    if (ratio > 2.5)
        return "Almond";
    else
        return "Round";
}

// Function to classify lip type
const char* getLipType(float upperLip, float lowerLip) {
    float total = upperLip + lowerLip;
    if (total > 3.0)
        return "Full";
    else
        return "Thin";
}

int main() {
    float jawWidth, faceHeight;
    float eyeWidth, eyeHeight;
    float upperLip, lowerLip;

    printf("---- Facial Feature Analyzer (C Version) ----\n");

    // Face shape
    printf("\nEnter jaw width (cm): ");
    scanf("%f", &jawWidth);
    printf("Enter face height (cm): ");
    scanf("%f", &faceHeight);

    // Eye type
    printf("\nEnter eye width (cm): ");
    scanf("%f", &eyeWidth);
    printf("Enter eye height (cm): ");
    scanf("%f", &eyeHeight);

    // Lip type
    printf("\nEnter upper lip thickness (cm): ");
    scanf("%f", &upperLip);
    printf("Enter lower lip thickness (cm): ");
    scanf("%f", &lowerLip);

    // Results
    printf("\n--- Analysis Result ---\n");
    printf("Face Shape : %s\n", getFaceShape(jawWidth, faceHeight));
    printf("Eye Type   : %s\n", getEyeType(eyeWidth, eyeHeight));
    printf("Lip Type   : %s\n", getLipType(upperLip, lowerLip));

    return 0;
}