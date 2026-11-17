// Namespace: Dino.BusSand.App.UI
public static class YachtRacingAnimValues // TypeDefIndex: 3899
{
	// Fields
	public const float YachtForwardDuration = 1.1;
	public const float YachtForwardDelay = 0.3;
	public const float YachtStartOffsetY = 472;
	public const float YachtEndOffsetY = 130;
	public const float YachtFinishOffsetY = 500;
	public const float FinishFlagDuration = 0.4;
	public const float FinishFlagDelay = 1.5;
	public const float FinishFlagStreamDelay = 1;
	public const float ProgressOpenDuration = 0.35;
	public const float ProgressTextPunchScale = 1.3;
	public const float ProgressTextPunchDuration = 0.3;
	public const float ProgressWaitDuration = 0.5;
	public const float ProgressCloseDuration = 0.3;
	public const float ProgressStartDelay = 0.15;
	public const float ClaimBackDuration = 0.4;
	public const float ClaimBackDelay = 0;
	public const float ClaimBackOffsetY = 1750;
	public const float ClaimFrontDelay = 0.25;
	public const float ClaimFrontDuration = 0.5;
	public const float ClaimFrontOffsetY = 430;
	public const float ClaimTopOffsetY = 312.5;
	public const float ClaimDelayCloseDuration = 1;
	public const float RewardMoveDuration = 0.5;
	public const float RewardMoveOvershoot = 1;
	public const float RewardDisappearDelay = 1;
	public const float RewardDisappearAlphaDuration = 0.3;
	private static AnimationCurve s_finishFlag; // 0x0
	private static AnimationCurve s_claimBack; // 0x8
	private static AnimationCurve s_claimFront; // 0x10

	// Properties
	public static AnimationCurve FinishFlagEase { get; }
	public static AnimationCurve ClaimBackEase { get; }
	public static AnimationCurve ClaimFrontEase { get; }

	// Methods

	// RVA: 0x21E7A34 Offset: 0x21E3A34 VA: 0x21E7A34
	public static AnimationCurve get_FinishFlagEase() { }

	// RVA: 0x21E7C00 Offset: 0x21E3C00 VA: 0x21E7C00
	public static AnimationCurve get_ClaimBackEase() { }

	// RVA: 0x21E7DC0 Offset: 0x21E3DC0 VA: 0x21E7DC0
	public static AnimationCurve get_ClaimFrontEase() { }

	// RVA: 0x21E7F74 Offset: 0x21E3F74 VA: 0x21E7F74
	public static float Linear(float t) { }

	// RVA: 0x21E7F90 Offset: 0x21E3F90 VA: 0x21E7F90
	public static float InQuad(float t) { }

	// RVA: 0x21E7FB0 Offset: 0x21E3FB0 VA: 0x21E7FB0
	public static float OutQuad(float t) { }

	// RVA: 0x21E7FD4 Offset: 0x21E3FD4 VA: 0x21E7FD4
	public static float InOutQuad(float t) { }

	// RVA: 0x21E801C Offset: 0x21E401C VA: 0x21E801C
	public static float InCubic(float t) { }

	// RVA: 0x21E8040 Offset: 0x21E4040 VA: 0x21E8040
	public static float OutBack(float t, float s) { }

	// RVA: 0x21E8078 Offset: 0x21E4078 VA: 0x21E8078
	public static float RewardMoveEase(float t) { }
}

