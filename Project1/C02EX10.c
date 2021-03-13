/*
unsigned int	ft_strlcpy(char* dest, char* src, unsigned int size)	// strcpy , ncpy은 안정성이 부족해 만들어진 함수임. 무조건 마지막에 null을 넣어줌.
																		//딴애들은 무조건 넣어주는게 아니라 (글자내에서)가능하면 넣어줬음. 불가능하면 굳이 넣진 않았음
{
	unsigned int i;

	if (!(size <= 0))	// 사이즈가 0이 아닐때 조건에 들어옴.
	{
		i = 0;
		while (i < size - 1 && src[i])   // size -1 까지 돌리는 이유는 null을 넣기 위해서 그리고 사이즈보다 src가 작을수도 있으므로 src도 널인지 확인. strncpy랑 똑같다보면됨 -1빼고.
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size - 1)		// 사이즈가 남으면 남은공간은 널로 채움.
		{
			dest[i] = 0;
			i++;
		}
		dest[i] = 0;			// 마지막에 널 넣어줌.   strncpy랑 다른부분임. strncpy는 마지막에 한번더 넣지 않았음!
	}
	i = 0;						//  반환값을 만들기위해 i =0으로 만듬.
	while (src[i] != 0)		//  strlcpy는 src의 값을 반환함. 널을 제외하고 ! 그래서 src의 길이를 재서 리턴하려고 반복문을 돌린거임.
		i++;				//  인터넷에 어떤놈이 dest반환한다는데 그거 잘못된 얘기임. testcase돌려도 (src길이 9기준) 내부함수에서 사이즈1인상황에서 9를반환함. dest기준이면 0반환이겠지.
	return (i);
}
*/