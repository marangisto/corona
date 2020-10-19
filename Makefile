dummy:
	echo "nothing to do"

clean:
	rm -rf include/stm32/*/device

headers:
	STM32Data --headers=include --family=STM32L5

rules:
	STM32Data --build-rules > tools/Corona/src/STM32.hs

