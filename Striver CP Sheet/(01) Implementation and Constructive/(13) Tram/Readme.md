# Tram
[Tram](https://codeforces.com/problemset/problem/116/A)

### Problem Logic
The logic for this problem is that we need to find out how many passengers are present in train at every station
and the maximum number of passengers that are present in the train at any given instance is the minimum capacity that the tram should have to carry out all the needed operations.

Now, how to find that?
In the input we recieve 2 numbers at every station first is outbound, i.e. the number of passengers that left the train, second is inbound i.e. how many passengers entered the train, given is that initially the train is empty so the outbound at the first station will always be zero hence the total number of passengers in the train after the first station is equal to the inbound. Now from the next station `totalPassengers += inbound - outbound`, this can also be seen as `totalPassengers = b(i)-a(i+1)+b(i+1)`