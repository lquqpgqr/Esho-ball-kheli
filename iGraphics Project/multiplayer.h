#ifndef MULTIPLAYERPLAYER_H_INCLUDED
#define MULTIPLAYERPLAYER_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button7[2][30]={"photo\\single.png","photo\\buttonz.png"};
int but7[2],u,butx7,buty7, blink7=0;

void multiPlayerLoading()
{

	for(u=0; u<2; u++){
	but7[u]=iLoadImage(button7[u]);
	}
}

void multiPlayer()
{

	butx7=dispLen-120-30;
	buty7=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but7[0]);						//display
	iShowImage(butx7-zoom*(blink7==1),buty7-zoom*(blink7==1),		//back
		75+2*zoom*(blink7==1),50+2*zoom*(blink7==1),but7[1]);

}
#endif