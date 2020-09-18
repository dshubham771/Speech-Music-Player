#include "stdafx.h"
#include<stdio.h>
#include <iostream>
#include<conio.h>
#include<fstream>
#include<cmath>
#include<math.h>
#include<string>

using namespace std;


#ifndef FUNCTIONS_H
#define FUNCTIONS_H


	    int test(); 
		void live_training(string);

		void input_model_new(int );

		void input_A_new(int);   //TO INPUT MATRIX A
		void input_B_new(int);   //TO INPUT MATRIX B
		void input_pi_new(int);  //TO INPUT PI

		//void input_model_train(int);
		void input_universal_codebook();               //TO INPUT REFERENCE CODEBOOK
		void input(int,int);                           //TO INPUT 200 TRAINING RECORDINGS
		void input_test(int);                          //TO INPUT 100 TESTING RECORDINGS
		void do_dc_shift();                            //TO CALCULATE DC SHIFT
		void Normalise();                              //TO NORMALISE DATA
		void select_frames();                          //TO SELECT 85 OVERLAPPED STABLE FRAMES
		void durbin(int,long double[],long double[]);  //TO FIND AI
		void calc_ci(long double[],long double[]);     //TO CALCULATE CI
		void find_observation_sequence();              //TO FIND OBSERVATION SEQUENCE
		void tokura();                                 //TO CALCULATE TOKURA DISTANCE
		void input_hamming_window();                   //TO INPUT HAMMING WINDOW
		void input_test(int,int);                      //TO INPUT 100 TESTING RECORDINGS
		//void live_training(string str)
		void input_model();
		void input_A();				//TO INPUT MATRIX A
		void input_B();				//TO INPUT MATRIX B
		void input_pi();			//TO INPUT PI
		void forward(int[]);		//TO RUN FORWARD PROCEDURE
		void backward(int[]);	    //TO RUN BACKWARD PROCEDURE
		void move_to_text(int);     //TO MOVE ALPHA,BETA,GAMMA,DELTA,SI TO TEXT FILE
		void calc_gamma();          //TO CALCULATE GAMMA
		void viterbi(int[]);        //TO CALCULATE DELTA AND SI
		void reestimation(int[]);   //TO CALCULATE XI,PI_BAR,A_BAR,B_BAR
		void initialize_temp_A_B(); //TO MAKE TEMP_A AND TEMP_B ARRAY TO 0
		void input_model2();        //TO INPUT RECENT A AND B MATRIX
		int testing(int);             //TO TEST DATA
		void read_digit_model();    //TO READ FINAL MODELS OF EACH DIGIT

#endif