// Namespace: Dino.BusSand.App.Meta
public class RacingRobotSession // TypeDefIndex: 4146
{
	// Fields
	private readonly int _stage; // 0x10
	private readonly RacingStageConfig _stageCfg; // 0x18
	private readonly RacingRobotGlobalConfig _global; // 0x20
	private readonly List<RacingRobotAgent> _agents; // 0x28
	private readonly RacingRobotSave _data; // 0x30
	private readonly Random _rng; // 0x38
	private readonly Func<long> _now; // 0x40
	private readonly HashSet<RacingRobotAgent> _competing; // 0x48
	private int _playerProgress; // 0x50
	private float _stageSpend; // 0x54
	private float _stageThreshold; // 0x58
	private float _maxElapsed; // 0x5C
	private float _lastTickElapsed; // 0x60
	private float _playerProgressSeconds; // 0x64
	private float _excludedSeconds; // 0x68
	private bool _payProtect; // 0x6C
	private bool _forceEnded; // 0x6D
	private long _startMs; // 0x70
	private long _specialEnterMs; // 0x78
	[CompilerGenerated]
	private float <UserScore>k__BackingField; // 0x80
	[CompilerGenerated]
	private int <RobotGroupId>k__BackingField; // 0x84
	[CompilerGenerated]
	private Action<bool> OnStageEnd; // 0x88
	[CompilerGenerated]
	private Action OnForceEnd; // 0x90
	private const float MaxSpecialLevelSeconds = 300;

	// Properties
	public float UserScore { get; set; }
	public int RobotGroupId { get; set; }
	public int StageIndex { get; }
	public RacingStageConfig StageConfig { get; }
	public IReadOnlyList<RacingRobotAgent> Agents { get; }
	public int PlayerProgress { get; }
	public bool Ended { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x225FE2C Offset: 0x225BE2C VA: 0x225FE2C
	public float get_UserScore() { }

	[CompilerGenerated]
	// RVA: 0x225FE34 Offset: 0x225BE34 VA: 0x225FE34
	private void set_UserScore(float value) { }

	[CompilerGenerated]
	// RVA: 0x225FE3C Offset: 0x225BE3C VA: 0x225FE3C
	public int get_RobotGroupId() { }

	[CompilerGenerated]
	// RVA: 0x225FE44 Offset: 0x225BE44 VA: 0x225FE44
	private void set_RobotGroupId(int value) { }

	// RVA: 0x225FE4C Offset: 0x225BE4C VA: 0x225FE4C
	public int get_StageIndex() { }

	// RVA: 0x225FE54 Offset: 0x225BE54 VA: 0x225FE54
	public RacingStageConfig get_StageConfig() { }

	// RVA: 0x225FE5C Offset: 0x225BE5C VA: 0x225FE5C
	public IReadOnlyList<RacingRobotAgent> get_Agents() { }

	// RVA: 0x225FE64 Offset: 0x225BE64 VA: 0x225FE64
	public int get_PlayerProgress() { }

	// RVA: 0x225FE6C Offset: 0x225BE6C VA: 0x225FE6C
	public bool get_Ended() { }

	[CompilerGenerated]
	// RVA: 0x225FE74 Offset: 0x225BE74 VA: 0x225FE74
	public void add_OnStageEnd(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x225FF24 Offset: 0x225BF24 VA: 0x225FF24
	public void remove_OnStageEnd(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x225FFD4 Offset: 0x225BFD4 VA: 0x225FFD4
	public void add_OnForceEnd(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2260070 Offset: 0x225C070 VA: 0x2260070
	public void remove_OnForceEnd(Action value) { }

	// RVA: 0x226010C Offset: 0x225C10C VA: 0x226010C
	private void .ctor(int stage, RacingStageConfig stageCfg, RacingRobotGlobalConfig global, List<RacingRobotAgent> agents, RacingRobotSave data, long startMs, long expMs, bool resume, float stageThreshold, Random rng, Func<long> now) { }

	// RVA: 0x2260320 Offset: 0x225C320 VA: 0x2260320
	public static RacingRobotSession Begin(int stage, long startMs, long expMs, RacingRobotSave data, float userScore, float[] stageScores, float stageThreshold, float userAvgTime, Random rng, Func<long> now) { }

	// RVA: 0x22611FC Offset: 0x225D1FC VA: 0x22611FC
	public void Tick() { }

	// RVA: 0x2262B0C Offset: 0x225EB0C VA: 0x2262B0C
	public void OnPlayerProgressChanged(int newProgress) { }

	// RVA: 0x22630D8 Offset: 0x225F0D8 VA: 0x22630D8
	public void OnPlayerFailed() { }

	// RVA: 0x2263234 Offset: 0x225F234 VA: 0x2263234
	public void OnPlayerSpend(float amount) { }

	// RVA: 0x2263304 Offset: 0x225F304 VA: 0x2263304
	public List<RacingRanking> GetRankings() { }

	// RVA: 0x2263820 Offset: 0x225F820 VA: 0x2263820
	public bool CheckAnyBotWin() { }

	// RVA: 0x2263978 Offset: 0x225F978 VA: 0x2263978
	public void NotifySpecialLevelEnter() { }

	// RVA: 0x22639B4 Offset: 0x225F9B4 VA: 0x22639B4
	public void NotifySpecialLevelExit() { }

	// RVA: 0x2263A74 Offset: 0x225FA74 VA: 0x2263A74
	public void SetAgentProgress(int configId, int progress) { }

	// RVA: 0x2263C78 Offset: 0x225FC78 VA: 0x2263C78
	public void Dispose() { }

	// RVA: 0x2260E0C Offset: 0x225CE0C VA: 0x2260E0C
	private void SaveSnapshot() { }

	// RVA: 0x2262438 Offset: 0x225E438 VA: 0x2262438
	private void EnforceOneFinisher() { }

	// RVA: 0x2261548 Offset: 0x225D548 VA: 0x2261548
	private void RollbackStackedAgents(int[] pre) { }

	// RVA: 0x2261D48 Offset: 0x225DD48 VA: 0x2261D48
	private void HandleAntiStack(int playerProgress) { }

	// RVA: 0x22632D8 Offset: 0x225F2D8 VA: 0x22632D8
	private void TriggerPayProtect() { }

	// RVA: 0x2263C8C Offset: 0x225FC8C VA: 0x2263C8C
	private void PauseAllForLastLevel(int playerProgress) { }

	// RVA: 0x2262BA4 Offset: 0x225EBA4 VA: 0x2262BA4
	private void HandlePayProtectProgressUpdate(int playerProgress) { }

	// RVA: 0x2263E54 Offset: 0x225FE54 VA: 0x2263E54
	private void ApplyPayProtectNormalLevel() { }

	// RVA: 0x22640B4 Offset: 0x22600B4 VA: 0x22640B4
	private void ReselectCompeting(List<RacingRobotAgent> candidates, int playerProgress, HashSet<RacingRobotAgent> old) { }

	// RVA: 0x22626AC Offset: 0x225E6AC VA: 0x22626AC
	private void EnforcePayProtectInTick() { }

	// RVA: 0x226307C Offset: 0x225F07C VA: 0x226307C
	private void EndStage(bool playerWin) { }

	// RVA: 0x2262970 Offset: 0x225E970 VA: 0x2262970
	private void TriggerForceEnd() { }

	[CompilerGenerated]
	// RVA: 0x22647FC Offset: 0x22607FC VA: 0x22647FC
	private int <RollbackStackedAgents>b__58_0(int a, int b) { }

	[CompilerGenerated]
	// RVA: 0x2264908 Offset: 0x2260908 VA: 0x2264908
	private bool <ReselectCompeting>b__64_0(RacingRobotAgent a) { }
}

