// Namespace: Dino.BusSand.App.Meta
public class BattleRoyaleCore // TypeDefIndex: 3999
{
	// Fields
	public const int ActivityId = 4;
	public const int FunctionGroupId = 1;
	public const string PeriodType = "BattleRoyale";
	public BattleRoyaleData D; // 0x10
	public Random Rng; // 0x18
	public Func<long> NowMs; // 0x20
	public Action Saved; // 0x28
	public bool StartPopupQueued; // 0x30
	public int PreHallStage; // 0x34
	public bool IsFirstGuide; // 0x38
	private List<BattleRoyalePersona> _personas; // 0x40
	private List<BattleRoyaleFinalStage> _finals; // 0x48
	private List<int> _heads; // 0x50
	public static readonly int MyId; // 0x0

	// Properties
	public bool HaveHallCommand { get; }
	private long Now { get; }
	private long Today { get; }
	public List<BattleRoyalePersona> Personas { get; }
	public List<BattleRoyaleFinalStage> FinalRows { get; }
	public List<int> HeadIds { get; }
	public BattleRoyaleConfig Config { get; }
	public BattleRoyaleConfig DefaultConfig { get; }
	public int TotalStageNum { get; }
	public int TotalPersonNum { get; }
	public int MaxRewardTimes { get; }
	public int MaxLoseStreak { get; }
	public long ColdTimeMs { get; }
	public int LoseHideCD { get; }
	public int WinHideCD { get; }
	public long WinColdTimeMs { get; }
	public List<KeyValuePair<int, long>> RewardPool { get; }
	public BattleRoyaleState State { get; }
	public int CurrentStage { get; }
	public int RemainDurationSeconds { get; }
	public int LivePersonNum { get; }
	public int CurrentPersonNum { get; }
	public int SpecialWinPersonNum { get; }
	public int CurStageDeadPersonNum { get; }
	public BattleRoyalePersona Persona { get; }
	public BattleRoyaleFinalStage FinalStagePerson { get; }
	public BattleRoyalePersonalType PersonalType { get; }
	public List<KeyValuePair<int, long>> FinalRewardItems { get; }

	// Methods

	// RVA: 0x221F168 Offset: 0x221B168 VA: 0x221F168
	public bool get_HaveHallCommand() { }

	// RVA: 0x221F178 Offset: 0x221B178 VA: 0x221F178
	public void .ctor(BattleRoyaleData data) { }

	// RVA: 0x221F580 Offset: 0x221B580 VA: 0x221F580
	private long get_Now() { }

	// RVA: 0x221F5A0 Offset: 0x221B5A0 VA: 0x221F5A0
	private long get_Today() { }

	// RVA: 0x221F5E4 Offset: 0x221B5E4 VA: 0x221F5E4
	private void Save() { }

	// RVA: 0x221F600 Offset: 0x221B600 VA: 0x221F600
	public List<BattleRoyalePersona> get_Personas() { }

	// RVA: 0x221FCC8 Offset: 0x221BCC8 VA: 0x221FCC8
	public List<BattleRoyaleFinalStage> get_FinalRows() { }

	// RVA: 0x22202E0 Offset: 0x221C2E0 VA: 0x22202E0
	public List<int> get_HeadIds() { }

	// RVA: 0x22206D8 Offset: 0x221C6D8 VA: 0x22206D8
	public BattleRoyaleConfig get_Config() { }

	// RVA: 0x2220774 Offset: 0x221C774 VA: 0x2220774
	public BattleRoyaleConfig get_DefaultConfig() { }

	// RVA: 0x2220F34 Offset: 0x221CF34 VA: 0x2220F34
	public bool HaveValidGroup() { }

	// RVA: 0x2220FCC Offset: 0x221CFCC VA: 0x2220FCC
	public int get_TotalStageNum() { }

	// RVA: 0x2220FF4 Offset: 0x221CFF4 VA: 0x2220FF4
	public int get_TotalPersonNum() { }

	// RVA: 0x222100C Offset: 0x221D00C VA: 0x222100C
	public int get_MaxRewardTimes() { }

	// RVA: 0x2221024 Offset: 0x221D024 VA: 0x2221024
	public int get_MaxLoseStreak() { }

	// RVA: 0x222103C Offset: 0x221D03C VA: 0x222103C
	public long get_ColdTimeMs() { }

	// RVA: 0x222105C Offset: 0x221D05C VA: 0x222105C
	public int get_LoseHideCD() { }

	// RVA: 0x2221074 Offset: 0x221D074 VA: 0x2221074
	public int get_WinHideCD() { }

	// RVA: 0x222108C Offset: 0x221D08C VA: 0x222108C
	public long get_WinColdTimeMs() { }

	// RVA: 0x22210AC Offset: 0x221D0AC VA: 0x22210AC
	public List<KeyValuePair<int, long>> get_RewardPool() { }

	// RVA: 0x2221138 Offset: 0x221D138 VA: 0x2221138
	public BattleRoyaleState get_State() { }

	// RVA: 0x2221150 Offset: 0x221D150 VA: 0x2221150
	public int get_CurrentStage() { }

	// RVA: 0x2221168 Offset: 0x221D168 VA: 0x2221168
	public bool IsCheatData() { }

	// RVA: 0x22211A8 Offset: 0x221D1A8 VA: 0x22211A8
	public bool IsActive() { }

	// RVA: 0x222123C Offset: 0x221D23C VA: 0x222123C
	public bool IsInColdTimeStamp() { }

	// RVA: 0x222127C Offset: 0x221D27C VA: 0x222127C
	public int get_RemainDurationSeconds() { }

	// RVA: 0x22212DC Offset: 0x221D2DC VA: 0x22212DC
	public int get_LivePersonNum() { }

	// RVA: 0x2221348 Offset: 0x221D348 VA: 0x2221348
	public int get_CurrentPersonNum() { }

	// RVA: 0x2221360 Offset: 0x221D360 VA: 0x2221360
	public int get_SpecialWinPersonNum() { }

	// RVA: 0x22213D0 Offset: 0x221D3D0 VA: 0x22213D0
	public int get_CurStageDeadPersonNum() { }

	// RVA: 0x2221430 Offset: 0x221D430 VA: 0x2221430
	public BattleRoyalePersona get_Persona() { }

	// RVA: 0x2221590 Offset: 0x221D590 VA: 0x2221590
	public BattleRoyaleFinalStage get_FinalStagePerson() { }

	// RVA: 0x2221760 Offset: 0x221D760 VA: 0x2221760
	public BattleRoyalePersonalType get_PersonalType() { }

	// RVA: 0x2221834 Offset: 0x221D834 VA: 0x2221834
	public List<KeyValuePair<int, long>> get_FinalRewardItems() { }

	// RVA: 0x2221AA4 Offset: 0x221DAA4 VA: 0x2221AA4
	public bool NeedShowBattleResult() { }

	// RVA: 0x2221ADC Offset: 0x221DADC VA: 0x2221ADC
	public bool CanStartNewRound() { }

	// RVA: 0x2221B70 Offset: 0x221DB70 VA: 0x2221B70
	public bool NeedShowHallButton(bool isFromGame, bool lockedBtnShown) { }

	// RVA: 0x2221C30 Offset: 0x221DC30 VA: 0x2221C30
	public void Init() { }

	// RVA: 0x2221D58 Offset: 0x221DD58 VA: 0x2221D58
	private void InitActivityState() { }

	// RVA: 0x2221EE0 Offset: 0x221DEE0 VA: 0x2221EE0
	public void RefreshTime() { }

	// RVA: 0x22220E0 Offset: 0x221E0E0 VA: 0x22220E0
	public void ChangeState(BattleRoyaleState s) { }

	// RVA: 0x222211C Offset: 0x221E11C VA: 0x222211C
	public void AutoChangeToNotStart() { }

	// RVA: 0x2222184 Offset: 0x221E184 VA: 0x2222184
	public bool StartNewRound() { }

	// RVA: 0x2222470 Offset: 0x221E470 VA: 0x2222470
	public void ResetData() { }

	// RVA: 0x2222BC4 Offset: 0x221EBC4 VA: 0x2222BC4
	public void SetCommand(BattleRoyaleCommand cmd, bool noStepFail = False) { }

	// RVA: 0x2221C88 Offset: 0x221DC88 VA: 0x2221C88
	public BattleRoyaleCore.Executed ExecuteCommand() { }

	// RVA: 0x2222C90 Offset: 0x221EC90 VA: 0x2222C90
	public void PersonDeadByStage() { }

	// RVA: 0x22239F4 Offset: 0x221F9F4 VA: 0x22239F4
	private void AddFinishedGameNum() { }

	// RVA: 0x2222FFC Offset: 0x221EFFC VA: 0x2222FFC
	private List<KeyValuePair<int, long>> WinOnce(out bool finished) { }

	// RVA: 0x2223A44 Offset: 0x221FA44 VA: 0x2223A44
	private List<KeyValuePair<int, long>> GiveReward() { }

	// RVA: 0x2222E18 Offset: 0x221EE18 VA: 0x2222E18
	private void LoseOnce() { }

	// RVA: 0x2223FD8 Offset: 0x221FFD8 VA: 0x2223FD8
	public void AutoAddStartCommand(bool force) { }

	// RVA: 0x22240A0 Offset: 0x22200A0 VA: 0x22240A0
	public void TryAutoAddStartCommand() { }

	// RVA: 0x22240EC Offset: 0x22200EC VA: 0x22240EC
	public void PlayOnce() { }

	// RVA: 0x22241EC Offset: 0x22201EC VA: 0x22241EC
	public void AddStagePlayerWorth(int worth) { }

	// RVA: 0x2224248 Offset: 0x2220248 VA: 0x2224248
	public List<BattleRoyalePerson> LivePlayers(int count) { }

	// RVA: 0x22245B8 Offset: 0x22205B8 VA: 0x22245B8
	public List<BattleRoyalePerson> LivePlayers(int count, bool haveMe, int headCountMin, int myHead) { }

	// RVA: 0x2224B94 Offset: 0x2220B94 VA: 0x2224B94
	public List<BattleRoyalePerson> DeadPlayers(int count) { }

	// RVA: 0x2224FFC Offset: 0x2220FFC VA: 0x2224FFC
	private static void .cctor() { }
}

