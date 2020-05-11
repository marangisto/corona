dummy:
	echo "nothing to do"

clean:
	rm -rf include/stm32/*/device

headers:
	STM32Data --headers=include/stm32

