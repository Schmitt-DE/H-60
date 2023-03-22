
class cfgCloudlets {
  class Default;
	class vtx_uh60_explosionCloud: Default
	{
		interval = "0.02 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,-1,0};
		rotationVelocity = 0;
		weight = 0.1;
		volume = 0.06;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 6","0.0125 * intensity + 9","0.0125 * intensity + 13","0.015 * intensity + 30"};
		color[] = {{0.2,0.2,0.2,0.6},{0.2,0.2,0.2,0.4},{0.4,0.4,0.4,0.2},{0.7,0.7,0.7,0.08},{1,1,1,0.01}};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {2.5,0,2.5};
		MoveVelocityVar[] = {5,0,5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class vtx_uh60_explosionCloudCenter: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 1;
		particleFSFrameCount = 20;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.13;
		moveVelocity[] = {0,0.5,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 1","0.0125 * intensity + 8","0.0125 * intensity + 9"};
		color[] = {{1,1,1,-8},{1,1,1,-1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 25;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class vtx_uh60_missileTrail: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,-8,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.9;
		rubbing = 0.5;
		size[] = {0.4,1.2};
		color[] = {{0.7,0.7,0.7,0.9},{0.7,0.7,0.7,0.7}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.2;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class vtx_uh60_confetti : Default {
		interval = 0.001;
		circleRadius = 1;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {0,-1,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 1;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 0;
		sizeVar = 1;
		colorVar[] = {1,1,1,1};
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 0..1;
	};
};