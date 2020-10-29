def bmi(weight: float, height: float) -> float:
    height /= 100
    return weight / (height ** 2)


def print_bmi(BMI: float) -> float:
    if BMI < 18.5:
        print("Underweight")
    elif BMI < 25.0:
        print("Normal")
    elif BMI < 30.0:
        print("Overheight")
    else:
        print("Obesity")


weight, height = map(float, input().split())
print_bmi(bmi(weight, height))
