dummy:
	echo "nothing to do"

clean:
	rm -rf include/stm32/*/device

headers:
	STM32Data --headers=include/stm32 --family=STM32G0

rules:
	STM32Data --build-rules > tools/Corona/src/STM32.hs

