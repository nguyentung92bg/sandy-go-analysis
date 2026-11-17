// Namespace: Dino.BusSand.App.Meta
public class RacingRobotAgent // TypeDefIndex: 4142
{
	// Fields
	private readonly RacingRobotConfig _cfg; // 0x10
	private readonly int _totalLevels; // 0x18
	private readonly float _userScore; // 0x1C
	private readonly float _stage1Score; // 0x20
	private readonly float _stage2Score; // 0x24
	private readonly float _stage3Score; // 0x28
	private readonly RacingSpeedParams _speed; // 0x30
	private readonly RacingChaseParams _chase; // 0x50
	private readonly List<RacingFailRule> _failRules; // 0x78
	private readonly int _hangupValue; // 0x80
	private readonly Random _rng; // 0x88
	private float _secondsInLevel; // 0x90
	private float _requiredSeconds; // 0x94
	private int _lastKnownPlayerProgress; // 0x98
	[CompilerGenerated]
	private int <Progress>k__BackingField; // 0x9C
	[CompilerGenerated]
	private RacingRobotState <State>k__BackingField; // 0xA0
	[CompilerGenerated]
	private readonly bool <IsThreat>k__BackingField; // 0xA4
	[CompilerGenerated]
	private readonly float <Score>k__BackingField; // 0xA8
	[CompilerGenerated]
	private float <ProgressAchievedSessionSeconds>k__BackingField; // 0xAC
	[CompilerGenerated]
	private readonly float <OverrideSpeedSeconds>k__BackingField; // 0xB0

	// Properties
	public int Progress { get; set; }
	public RacingRobotState State { get; set; }
	public bool IsThreat { get; }
	public float Score { get; }
	public int ConfigId { get; }
	public int RobotType { get; }
	public float ProgressAchievedSessionSeconds { get; set; }
	public float OverrideSpeedSeconds { get; }
	public int HangupValue { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x225ECEC Offset: 0x225ACEC VA: 0x225ECEC
	public int get_Progress() { }

	[CompilerGenerated]
	// RVA: 0x225ECF4 Offset: 0x225ACF4 VA: 0x225ECF4
	private void set_Progress(int value) { }

	[CompilerGenerated]
	// RVA: 0x225ECFC Offset: 0x225ACFC VA: 0x225ECFC
	public RacingRobotState get_State() { }

	[CompilerGenerated]
	// RVA: 0x225ED04 Offset: 0x225AD04 VA: 0x225ED04
	public void set_State(RacingRobotState value) { }

	[CompilerGenerated]
	// RVA: 0x225ED0C Offset: 0x225AD0C VA: 0x225ED0C
	public bool get_IsThreat() { }

	[CompilerGenerated]
	// RVA: 0x225ED14 Offset: 0x225AD14 VA: 0x225ED14
	public float get_Score() { }

	// RVA: 0x225ED1C Offset: 0x225AD1C VA: 0x225ED1C
	public int get_ConfigId() { }

	// RVA: 0x225ED34 Offset: 0x225AD34 VA: 0x225ED34
	public int get_RobotType() { }

	[CompilerGenerated]
	// RVA: 0x225ED4C Offset: 0x225AD4C VA: 0x225ED4C
	public float get_ProgressAchievedSessionSeconds() { }

	[CompilerGenerated]
	// RVA: 0x225ED54 Offset: 0x225AD54 VA: 0x225ED54
	private void set_ProgressAchievedSessionSeconds(float value) { }

	[CompilerGenerated]
	// RVA: 0x225ED5C Offset: 0x225AD5C VA: 0x225ED5C
	public float get_OverrideSpeedSeconds() { }

	// RVA: 0x225ED64 Offset: 0x225AD64 VA: 0x225ED64
	public int get_HangupValue() { }

	// RVA: 0x225ED6C Offset: 0x225AD6C VA: 0x225ED6C
	public void .ctor(RacingRobotConfig cfg, int totalLevels, float userScore, float score, Random rng, int initialProgress = 0, float overrideSpeedSeconds = 0, float stage1Score = 0, float stage2Score = 0, float stage3Score = 0) { }

	// RVA: 0x225F17C Offset: 0x225B17C VA: 0x225F17C
	public int Advance(float deltaSeconds, int playerProgress, bool playerJustFailed, float sessionElapsed) { }

	// RVA: 0x225F1F0 Offset: 0x225B1F0 VA: 0x225F1F0
	public bool IsHanging() { }

	// RVA: 0x225F5C0 Offset: 0x225B5C0 VA: 0x225F5C0
	public void SetProgress(int progress, bool preserveAchievedTime = False) { }

	// RVA: 0x225F4E4 Offset: 0x225B4E4 VA: 0x225F4E4
	private void AdvanceTimeBased(float delta, bool playerJustFailed, float sessionElapsed) { }

	// RVA: 0x225F21C Offset: 0x225B21C VA: 0x225F21C
	private void AdvanceChase(int playerProgress, float sessionElapsed) { }

	// RVA: 0x225F668 Offset: 0x225B668 VA: 0x225F668
	private bool RollFail(bool playerJustFailed) { }

	// RVA: 0x225EFF8 Offset: 0x225AFF8 VA: 0x225EFF8
	private float CalcRequiredSeconds(int progress) { }

	// RVA: 0x225F924 Offset: 0x225B924 VA: 0x225F924
	private Dictionary<string, double> SpeedVars(int progress) { }
}

