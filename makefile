default: wukusicks

wukusicks: wukusicks.cpp
	@mkdir -p bin
	g++ wukusicks.cpp -o bin/wukusick-converter

clean:
	-rm -f bin/wukusick-converter
