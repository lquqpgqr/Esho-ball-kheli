#ifndef	TOP_H_INCLUDED
#define TOP_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button8[2][30]={"photo\\top.png","photo\\buttonz.png"};
int but8[2],v,butx8,buty8, blink8=0;

void topLoading()
{

	for(v=0; v<2; v++){
	but8[v]=iLoadImage(button8[v]);
	}
}

void top()
{

	butx8=dispLen-120-30;
	buty8=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but8[0]);						//display
	iShowImage(butx8-zoom*(blink8==1),buty8-zoom*(blink8==1),		//back
		75+2*zoom*(blink8==1),50+2*zoom*(blink8==1),but8[1]);

}
#endif