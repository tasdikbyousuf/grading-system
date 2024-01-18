def calculate_grade():
    # Get student information
    student_name = input("Enter student name: ")
    student_id = input("Enter student ID: ")

    # Get the number of subjects
    try:
        num_subjects = int(input("Enter the number of subjects: "))
    except ValueError:
        print("Invalid input. Please enter a valid number.")
        return

    # Initialize variables
    total_score = 0
    max_score_per_subject = 100  # Assuming the maximum score for each subject is 100

    # Get grades for each subject
    for i in range(1, num_subjects + 1):
        try:
            score = float(input(f"Enter grade for subject {i} (out of {max_score_per_subject}): "))
            if 0 <= score <= max_score_per_subject:
                total_score += score
            else:
                print("Invalid input. Please enter a valid score.")
                return
        except ValueError:
            print("Invalid input. Please enter a valid number.")
            return

    # Calculate average grade
    average_grade = total_score / num_subjects

    # Display results
    print("\nStudent Information:")
    print(f"Name: {student_name}")
    print(f"ID: {student_id}")
    print("\nGrading Results:")
    print(f"Average Grade: {average_grade:.2f}")

    # You can add additional logic here to determine the overall grade based on your grading scale.


# Call the function to calculate the grade
calculate_grade()
