//Author: Fawaz Ahmed
#include<stdio.h>
void intro()

{
    printf("\nWelcome to the pandemic resilience test, this test is just for you, so don't worry-your results are completely private \nNo-one but you has access to your results. So be honest and do not hold back.\n\nThe screening tool will guide you through the following steps:\n1.First, clear your mind and open yourself to the questions so we can guide you to the right screenings.\n2.The test is a multi-question quiz designed to gauge your overall mental health.This test should take you around 12-15 minutes to complete, so set aside some time to focus and give this quiz your full attention.\n3.Finally, personalised results will be displayed for you to review . A reminder that this test cannot diagnose you on its own. Health professionals need much more information about you to make the right diagnosis.\n\n\nThe instructions are simple all you have to do is choose 1,2,3 or 4 based on the option you are selecting, let's begin\n\n\n");
}

int optionScore(void)
{
	int a;
	check:
	printf("1.Strongly Disagree 2.Disagree 3.Agree 4.Strongly Agree\n");
	scanf("%d",&a);
	
	if(a==1)
	return 0;
	
	else if(a==2)
	return 1;
	
	else if(a==3)
	return 2;
	
	else if(a==4)
	return 3;
	
	else
	{
		printf("\nInvalid option, enter valid response\n");
		goto check;
	}	
	
}

void questions(int a)
{
	
	char question[50][200]={"You frequently felt depressed, sad, empty, or hopeless.","You were less or no longer interested in activities that you enjoyed in the past ","You lost/gained a 	significant amount of weight, or your appetite increased or decreased ","You felt restless and agitated, or slowed down ","You regularly felt tired or low on energy ","You experienced feelings of worthlessness or extreme guilt","You had difficulty concentrating or making decisions","You had recurrent thoughts about death and suicide","You had recurrent thoughts about death and suicide ","The depressive symptoms you experienced resulted in distress and  affected your day to day functioning.","You directly experienced a traumatic event","You had recurrent and disturbing memories, flashbacks, and/or  nightmares about the traumatic event" ,"You went out of your way to avoid thinking about the event, and/or stayed away from anything that reminded you of the trauma","You had persistent and excessively negative beliefs about yourself, others, or of situations in general","You experienced persistent negative emotions and/or distorted thoughts, blaming yourself or others for the traumatic event.","You were less/not interested in activities that used to be enjoyed ","You felt disconnected from others, and were unable to experience positive emotions ","You became irritated easily or had angry outbursts with little to no provocation","You engaged in reckless/destructive behaviour or took unnecessary risks ","You became excessively vigilant and/or easily startled ","You had difficulty remembering details of the trauma and/or had problems staying focused ","Your sleep pattern was disturbed, resulting in trouble falling or staying asleep","For at least 6 months, you worried or were anxious about a number of things in your life ","You found it difficult to keep your worry under control You felt tense, restless, or on edge ","You were easily exhausted You had difficulty remember things or concentrating ","You were irritable or became easily angered ","You experienced sleep disturbances, and had difficulty falling or staying asleep","You worried about having a panic attack and/or purposely avoided situations in which this might occur ","You had heart palpitations, a racing pulse, or a pounding heart ","You were sweating profusely  ","You were trembling or felt tingly/numb","You had difficulty breathing or felt like you were  ","You felt pain in your chest  ","You experienced abdominal distress  ","You experienced dizziness or light headedness ","You experienced chills or hot flashes","You were fearful of losing control, going crazy, or dying","You became increasingly goal-oriented, taking on more activities than you normally would, and/or became easily distracted ","You became excessively involved in fun activities that could have had negative consequences ","Your mood disturbance became severe enough to result in significant distress, impaired functioning, and/or hospitalization. ","You experienced extreme and inexplicable mood swings from depression to elation","You frequently felt depressed, sad, empty, or hopeless","You were less or no longer interested in activities that you enjoyed in the past ","You lost/gained a significant amount of weight, or your appetite increased or decreased","You felt restless and agitated, or slowed down","You experienced feelings of worthlessness or extreme guilt ","You had difficulty concentrating or making decisions ","You had recurrent thoughts about death and suicide ","The depressive symptoms you experienced resulted in distress and affected your day-to-day functioning","\0"};
	
	printf("\n\n");
	printf("%s \n",&question[a][200]);
	
}

void main()
{
	int score=0;
	char blank;
	intro();
	printf("Input any character to continue :");
	scanf("%c",&blank);
	
	for(int a=0;a<50;a++)
	{	
		questions(a);
		score=score+optionScore();
	}
	printf("%d",score);
	
	if(score>-1 && score<30)
	{
		printf("\nYou are mentally sound\nHere are a couple of tips\nTrack gratitude and achievement with a journal. Include 3 things you were grateful for and 3 things you were able to accomplish each day.\nFeeling anxious?  Take a trip down memory lane and do some coloring for about 20 minutes to help you clear your mind. Pick a design that's geometric and a little complicated for the best effect.\nRelax in a warm bath Try adding Epsom salts to soothe aches and pains and help boost magnesium levels, which can be depleted by stress.\nHas something been bothering you? Let it all out…on paper. Writing about upsetting experiences can reduce symptoms of depression.\nPractice forgiveness - even if it's just forgiving that person who cut you off during your commute. People who forgive have better mental health and report being more satisfied with their lives\nDo your best to enjoy 15 minutes of sunshine  Sunlight synthesizes Vitamin D, which experts believe is a mood elevator.");
	}
	else if(score>30 && score<80)
	{
		printf("\nYou have mild mental issues\nHere are a couple of tips\nLearn Relaxation Strategies. Counselling can still be very beneficial for those with mild anxiety. But for those that are hoping to avoid therapy, basic relaxation strategies may be enough. Try deep breathing, visualization, and progressive muscle relaxation to start. Make sure you commit to them for at minimum two months.");
	}
	else 
	printf("\nYou have severe mental health issues\nSee your primary care provider or a mental health professional. Most mental illnesses do not improve on their own, and if untreated, your mental illness may get worse over time and cause serious problems.Pay attention to warning signs.Work with your doctor or therapist to learn what might trigger your symptoms. Make a plan so that you know what to do if symptoms return. Contact your doctor or therapist if you notice any changes in symptoms or how you feel. Consider involving family members or friends to watch for warning signs.\nGet routine medical care.Do not neglect check-ups or skip visits to your primary care provider, especially if you are not feeling well. You may have a new health problem that needs to be treated, or you may be experiencing side effects of medication.Take good care of yourself.Sufficient sleep, healthy eating and regular physical activity are important. Try to maintain a regular schedule. Talk to your primary care provider if you have trouble sleeping or if you have questions about diet and physical activity.");
}
