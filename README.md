# numberguesser

main(){
	initialize keepGoing, correct, guess, turncount
	get random number 0-100
	make 20 length char array for name
	put random number in correct

	make intro (ask for name, lets play a game)

	while loop:
		add turn
		prompt for number
		if number is higher than random#, print too high, if lower print too low
		if number is equal to random#, make keepGoing false and finish game.
			if turns < 7, print great job
			if turns > 7, print could be better
			if turns = 7, print meh


