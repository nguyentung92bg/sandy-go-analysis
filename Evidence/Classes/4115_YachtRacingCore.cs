// Namespace: Dino.BusSand.App.Meta
public class YachtRacingCore // TypeDefIndex: 4115
{
	// Fields
	public const int ActivityTypeId = 5;
	public const int FunctionGroupId = 1;
	public const string PeriodType = "YachtRacing";
	public YachtRacingData D; // 0x10
	public Random Rng; // 0x18
	public Func<long> NowMs; // 0x20
	public Action Saved; // 0x28
	public Action StateChanged; // 0x30
	public Action BotsUpdated; // 0x38
	public Func<float> PlayerAssets; // 0x40
	public Nullable<float> UserScoreOverride; // 0x48
	public float UserAvgLevelTime; // 0x50
	[CompilerGenerated]
	private RacingRobotSession <Session>k__BackingField; // 0x58
	private int _stageWinStreak; // 0x60
	public int MiniItemLastWinCount; // 0x64
	public int MiniItemLastRanking; // 0x68
	public YachtRacingCore.OpenKind PendingOpen; // 0x6C
	public bool PendingProcessFly; // 0x70
	private YachtRacingConfig _cfg; // 0x78

	// Properties
	public int PlayerHeadId { get; }
	public RacingRobotSession Session { get; set; }
	private long Now { get; }
	public YachtRacingConfig Config { get; }
	public int RoundStageCount { get; }
	public int FirstStartRewardId { get; }
	public bool StageRoundCountIsMax { get; }
	public YachtRacingState State { get; }
	public bool HaveData { get; }
	public bool DataValid { get; }
	public int CurrentStage { get; }
	public int CurrentWinCount { get; }
	public int PlayerRanking { get; }
	public long EndTime { get; }
	public bool IsSettlementState { get; }

	// Methods

	// RVA: 0x22540E8 Offset: 0x22500E8 VA: 0x22540E8
	public int get_PlayerHeadId() { }

	[CompilerGenerated]
	// RVA: 0x2254138 Offset: 0x2250138 VA: 0x2254138
	public RacingRobotSession get_Session() { }

	[CompilerGenerated]
	// RVA: 0x2254140 Offset: 0x2250140 VA: 0x2254140
	private void set_Session(RacingRobotSession value) { }

	// RVA: 0x2254148 Offset: 0x2250148 VA: 0x2254148
	public void .ctor(YachtRacingData data) { }

	// RVA: 0x22546F8 Offset: 0x22506F8 VA: 0x22546F8
	private long get_Now() { }

	// RVA: 0x2254718 Offset: 0x2250718 VA: 0x2254718
	private void Save() { }

	// RVA: 0x2254734 Offset: 0x2250734 VA: 0x2254734
	public YachtRacingConfig get_Config() { }

	// RVA: 0x2254FE0 Offset: 0x2250FE0 VA: 0x2254FE0
	public YachtRacingConfig.Stage StageInfo(int stage) { }

	// RVA: 0x225517C Offset: 0x225117C VA: 0x225517C
	public int get_RoundStageCount() { }

	// RVA: 0x22551DC Offset: 0x22511DC VA: 0x22551DC
	public int MaxProgress(int stage = -1) { }

	// RVA: 0x225521C Offset: 0x225121C VA: 0x225521C
	public int MaxBotCount(int stage = -1) { }

	// RVA: 0x225525C Offset: 0x225125C VA: 0x225525C
	public int StageRewardId(int stage) { }

	// RVA: 0x225527C Offset: 0x225127C VA: 0x225527C
	public int FailLimit(int stage) { }

	// RVA: 0x225529C Offset: 0x225129C VA: 0x225529C
	public int get_FirstStartRewardId() { }

	// RVA: 0x22552D0 Offset: 0x22512D0 VA: 0x22552D0
	public bool get_StageRoundCountIsMax() { }

	// RVA: 0x2255318 Offset: 0x2251318 VA: 0x2255318
	public bool InActivityTime() { }

	// RVA: 0x22553B4 Offset: 0x22513B4 VA: 0x22553B4
	public YachtRacingState get_State() { }

	// RVA: 0x2252FB8 Offset: 0x224EFB8 VA: 0x2252FB8
	public bool get_HaveData() { }

	// RVA: 0x22553CC Offset: 0x22513CC VA: 0x22553CC
	public bool get_DataValid() { }

	// RVA: 0x2255454 Offset: 0x2251454 VA: 0x2255454
	public int get_CurrentStage() { }

	// RVA: 0x225546C Offset: 0x225146C VA: 0x225546C
	public int get_CurrentWinCount() { }

	// RVA: 0x22554A8 Offset: 0x22514A8 VA: 0x22554A8
	public int get_PlayerRanking() { }

	// RVA: 0x22554F4 Offset: 0x22514F4 VA: 0x22554F4
	public long get_EndTime() { }

	// RVA: 0x225550C Offset: 0x225150C VA: 0x225550C
	public void ApplyState(YachtRacingState s) { }

	// RVA: 0x225556C Offset: 0x225156C VA: 0x225556C
	public bool ActivityIsHide() { }

	// RVA: 0x22555A4 Offset: 0x22515A4 VA: 0x22555A4
	public bool get_IsSettlementState() { }

	// RVA: 0x22555C8 Offset: 0x22515C8 VA: 0x22555C8
	public bool AtStake() { }

	// RVA: 0x2255600 Offset: 0x2251600 VA: 0x2255600
	public bool NeedShowSpecialLose() { }

	// RVA: 0x225565C Offset: 0x225165C VA: 0x225565C
	public bool CheckCanClaimReward() { }

	// RVA: 0x22556C4 Offset: 0x22516C4 VA: 0x22556C4
	private void QueueOpen(YachtRacingCore.OpenKind k) { }

	// RVA: 0x22556D8 Offset: 0x22516D8 VA: 0x22556D8
	public void Init() { }

	// RVA: 0x2255A00 Offset: 0x2251A00 VA: 0x2255A00
	private void InitActivityState() { }

	// RVA: 0x22560B8 Offset: 0x22520B8 VA: 0x22560B8
	private float UserScoreFor(int stage) { }

	// RVA: 0x225574C Offset: 0x225174C VA: 0x225574C
	public void StartStage(int stage, long startMs, long expMs) { }

	// RVA: 0x225605C Offset: 0x225205C VA: 0x225605C
	public void EndStage() { }

	// RVA: 0x225624C Offset: 0x225224C VA: 0x225624C
	public void OnPlayerWin() { }

	// RVA: 0x22562D0 Offset: 0x22522D0 VA: 0x22562D0
	public void OnPlayerFail() { }

	// RVA: 0x2256360 Offset: 0x2252360 VA: 0x2256360
	public void OnPlayerSpend(float amount) { }

	// RVA: 0x22563A4 Offset: 0x22523A4 VA: 0x22563A4
	public void TickSession() { }

	// RVA: 0x2255BE0 Offset: 0x2251BE0 VA: 0x2255BE0
	public void RefreshBotsData() { }

	// RVA: 0x22563B8 Offset: 0x22523B8 VA: 0x22563B8
	public bool CheckCanActiveBots() { }

	// RVA: 0x22578A8 Offset: 0x22538A8 VA: 0x22578A8
	public void OnStartYachtRacing(string playerName, Func<string> randomName, List<int> headIds) { }

	// RVA: 0x2257DFC Offset: 0x2253DFC VA: 0x2257DFC
	public List<object> StartRace(string playerName, Func<string> randomName, List<int> headIds) { }

	// RVA: 0x2257FC8 Offset: 0x2253FC8 VA: 0x2257FC8
	public void GrantFirstReward(List<object> entry) { }

	// RVA: 0x225814C Offset: 0x225414C VA: 0x225814C
	public void HandleGameResult(bool win) { }

	// RVA: 0x22583F0 Offset: 0x22543F0 VA: 0x22583F0
	public void StartNewPeriod(bool force) { }

	// RVA: 0x225857C Offset: 0x225457C VA: 0x225857C
	public bool CheckRecoverFromCoolTime() { }

	// RVA: 0x22589E8 Offset: 0x22549E8 VA: 0x22589E8
	public void OnGameLoseConfirmed() { }

	// RVA: 0x2256054 Offset: 0x2252054 VA: 0x2256054
	public void OnGameWinConfirmed() { }

	// RVA: 0x2258AB8 Offset: 0x2254AB8 VA: 0x2258AB8
	public void OnProcessFlyEnd() { }

	// RVA: 0x2258AE4 Offset: 0x2254AE4 VA: 0x2258AE4
	public void OnActivityTimeUp() { }

	// RVA: 0x2258B14 Offset: 0x2254B14 VA: 0x2258B14
	public int OnClaimReward() { }

	// RVA: 0x2258C28 Offset: 0x2254C28 VA: 0x2258C28
	private int ClaimStageReward() { }

	// RVA: 0x2258D54 Offset: 0x2254D54 VA: 0x2258D54
	public void SetBotLastWinCount(int botId) { }

	// RVA: 0x2258EB8 Offset: 0x2254EB8 VA: 0x2258EB8
	public void SetLifeCycleMaxStage(int stage) { }

	// RVA: 0x2258EE8 Offset: 0x2254EE8 VA: 0x2258EE8
	public void PrepareSpecialLose() { }

	// RVA: 0x225659C Offset: 0x225259C VA: 0x225659C
	private void Track(int changeType, int fromLevel, int toLevel, int fromRank, int toRank, int isFinal) { }

	// RVA: 0x225709C Offset: 0x225309C VA: 0x225709C
	private void TrackReward(int changeType, int stageId, int rewardId) { }

	[CompilerGenerated]
	// RVA: 0x2259030 Offset: 0x2255030 VA: 0x2259030
	private void <StartStage>b__68_0(bool win) { }
}

