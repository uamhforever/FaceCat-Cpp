#include "stdafx.h"
#include "MainFrame.h"

MainFrame::MainFrame(){
}

MainFrame::~MainFrame(){
}

void MainFrame::loadFile(const String& fileName, FCView *view){
	FCUIXml::loadFile(fileName, view);
}