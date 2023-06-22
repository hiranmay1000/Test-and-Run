class MealyMachine:
    def __init__(self):
        self.state = "even"

    def transition(self, input):
        if self.state == "even":
            if input == "0":
                output = "0"
                next_state = "even"
            else:
                output = "0"
                next_state = "odd"
        else:
            if input == "0":
                output = "0"
                next_state = "odd"
            else:
                output = "1"
                next_state = "even"
        self.state = next_state
        return output

machine = MealyMachine()
input_sequence = "101001"
for input in input_sequence:
    output = machine.transition(input)
    if output == "1":
        print("Output: 1")
