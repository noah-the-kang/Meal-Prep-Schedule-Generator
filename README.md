# Meal-Prep-Schedule-Generator
Context: Koinonia has 40 serving slots:
 - Mon: Lunch prep / Lunch cleanup / Dinner prep / Dinner cleanup
 - ...
 - Fri: Lunch prep / Lunch cleanup / Dinner prep / Dinner cleanup

 We will assume that Koin holds 30 residents who are on the list to serve.
 
 We will format preferred_times as a 2D array containing 5 sub-vectors each with a binary condition.
 The position of the binary condition refers to the time slot where preferred_times[i][j] is the time slot
 such that i in [0,4] ranging from Mon-Fri and j in [0,3] ranges from lunch prep to dinner cleanup.
