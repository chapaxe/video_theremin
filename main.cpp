#include "cabeceras"

using namespace std;
using namespace cv;
using namespace gam;


int main(int argc, char** argv)
{

ejemplo.initAudio(5100);
ejemplo1.initAudio(5100);
ejemplo23.initAudio(5100);
ejemplo33.initAudio(5100);
ejemplo43.initAudio(5100);
ejemplo53.initAudio(5100);
ejemplo63.initAudio(5100);
ejemplo73.initAudio(5100);


    VideoCapture cap(0);
    if(!cap.isOpened()){
        return -1;}

    if( !face_cascade.load( face_cascade_name ) ){ printf("--(!)Error loading face cascade\n"); return -1; };
    if( !eyes_cascade.load( eyes_cascade_name ) ){ printf("--(!)Error loading eyes cascade\n"); return -1; };


    Mat tmp_frame;

    // inicia deteccion de fondo
    Mat bg_frame;
    vector<Mat> spl_fondo;
    cap >> bg_frame;
    flip(bg_frame, bg_frame, 180);
    cvtColor(bg_frame, bg_frame, COLOR_BGR2YCrCb);
    split(bg_frame,spl_fondo);

    Mat mascara, mascara1;
    Mat filtrado1 , filtrado2, ycrcb, frame_final;
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    int temp_pos;


for(;;)
    {
        cap >> tmp_frame;
        flip(tmp_frame, tmp_frame, 180);
        blur( tmp_frame, tmp_frame, Size(3,3) );
            if( tmp_frame.empty() )
            break;

        //imshow("Background",tmp_frame);
        mascara=quitafondo(tmp_frame,spl_fondo );
        mejora_contours(mascara, contours,hierarchy);
        mascara1=Morph(8,3,mascara);
        //imshow("Sustraccion de fondo", mascara1);	//mejorar erosionando

        detectAndDisplay( tmp_frame, mascara1 );		//detecta cara
        //imshow("Substraccion de cara",mascara1);

        cvtColor(tmp_frame, ycrcb, CV_BGR2YCrCb);
        inRange(ycrcb, Scalar(50, 130, 110), Scalar(255, 157, 135), filtrado2);
        filtrado2=Morph(4, 0 ,filtrado2);
        //imshow("deteccion de piel",filtrado2);

        bitwise_and(mascara1,filtrado2,filtrado2);
        mejora_contours(filtrado2, contours,hierarchy);
        //imshow("sustraccion de fondo y filtrado de piel",filtrado2);
        //frame_final=aplica_mascara(tmp_frame, filtrado2);

        temp_pos=dibuja_centro(filtrado2, tmp_frame);


        selector_nota(temp_pos, filtrado2,tmp_frame);
        imshow("frame final",tmp_frame);



        char keycode = (char)waitKey(30);
        if( keycode == 27 )
            break;

    }


    return 0;
}
