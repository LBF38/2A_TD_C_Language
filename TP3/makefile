default : tp4
tp4 : tp4.c
	gcc -Wall -c tp4.c -o tp4
	ffmpeg -i sound.mp3 -r:a 44100 -ac 1 -c:a pcm_f32le -f f32le input.f32le
	./tp4
	ffmpeg -r:a 44100 -ac 1 -f f32le -i output.f32le output.mp3
	vlc output.mp3
