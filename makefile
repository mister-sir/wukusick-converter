default: wukusicks

wukusicks: wukusicks_v3.cpp
	@mkdir -p bin
	g++ wukusicks_v3.cpp -o bin/wukusick-converter

clean:
	-rm -f bin/wukusick-converter
