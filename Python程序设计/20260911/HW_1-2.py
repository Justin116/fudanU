currPop = 3120324986

birthPeriodSec = 7
deathPeriodSec = 13
inPeriodSec = 45
exPeriodSec = 79

def population(year):
  totalSec = year * 365 * 24 * 60 * 60

  birthCount = totalSec // birthPeriodSec
  deathCount = totalSec // deathPeriodSec
  inCount = totalSec // inPeriodSec
  exCount = totalSec // exPeriodSec

  newPop = currPop + birthCount - deathCount + inCount - exCount

  return newPop

for i in range(5):
  print(population(i + 1))