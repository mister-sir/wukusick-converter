default: wukusicks

wukusicks: wukusicks_v3.cpp
	g++ wukusicks_v3.cpp -o bin/wukusick-converter

clean:
	-rm -f bin/wukusick-converter
