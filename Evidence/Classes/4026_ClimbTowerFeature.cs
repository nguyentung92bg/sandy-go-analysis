// Namespace: Dino.BusSand.App.Meta
public class ClimbTowerFeature : LiveFeature<ClimbTowerData>, IStakeActivity, IHallBinder, IStakeActivityUi // TypeDefIndex: 4026
{
	// Fields
	public const int Id = 2;
	public const int GroupId = 1;
	public const int DeclineType = 1;
	public const int AutoOpenPriority = 55;
	public const int ProcessPriority = 45;
	private const string Reason = "ClimbTowerReward";
	public bool IsFirstEnter; // 0x18
	public bool NeedPlaySliderAnim; // 0x19
	private bool _autoOpen; // 0x1A
	private bool _process; // 0x1B
	private int _cfgId; // 0x1C
	private int[] _win; // 0x20
	private int[] _archive; // 0x28
	private int[] _reward; // 0x30
	private int[] _box; // 0x38
	private int[] _platform; // 0x40

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static ClimbTowerFeature I { get; }
	private bool HasConfig { get; }
	public int[] WinPoints { get; }
	public int[] RewardList { get; }
	public int FinalPoint { get; }
	public bool HasData { get; }
	public bool DataInTime { get; }
	public bool IsValid { get; }
	public int Cur { get; }
	public int Last { get; }
	public int Max { get; }
	public long EndMs { get; }
	public bool IsGuideDone { get; }
	private int RoundNo { get; }
	private int RemainSec { get; }
	public int ActivityId { get; }
	public string ContinuePanel { get; }
	public string QuitItemPrefab { get; }
	public string StakeProgressText { get; }

	// Methods

	// RVA: 0x2228D9C Offset: 0x2224D9C VA: 0x2228D9C Slot: 13
	public override string get_Key() { }

	// RVA: 0x2228DDC Offset: 0x2224DDC VA: 0x2228DDC Slot: 14
	public override int get_Order() { }

	// RVA: 0x2228DE4 Offset: 0x2224DE4 VA: 0x2228DE4
	public static ClimbTowerFeature get_I() { }

	// RVA: 0x2228E48 Offset: 0x2224E48 VA: 0x2228E48
	public bool TakeAutoOpen() { }

	// RVA: 0x2228E58 Offset: 0x2224E58 VA: 0x2228E58
	public bool TakeProcess() { }

	// RVA: 0x2228E68 Offset: 0x2224E68 VA: 0x2228E68
	private void Config() { }

	// RVA: 0x2229308 Offset: 0x2225308 VA: 0x2229308
	private bool get_HasConfig() { }

	// RVA: 0x2229334 Offset: 0x2225334 VA: 0x2229334
	public int[] get_WinPoints() { }

	// RVA: 0x222934C Offset: 0x222534C VA: 0x222934C
	public int[] get_RewardList() { }

	// RVA: 0x2229364 Offset: 0x2225364 VA: 0x2229364
	public int get_FinalPoint() { }

	// RVA: 0x22293AC Offset: 0x22253AC VA: 0x22293AC
	public int TreasureBoxIndex(int index) { }

	// RVA: 0x22293F8 Offset: 0x22253F8 VA: 0x22293F8
	public int PlatformIndex(int index) { }

	// RVA: 0x2229444 Offset: 0x2225444 VA: 0x2229444
	public int RewardIdAt(int index) { }

	// RVA: 0x2229490 Offset: 0x2225490 VA: 0x2229490
	public bool get_HasData() { }

	// RVA: 0x2229528 Offset: 0x2225528 VA: 0x2229528
	public bool get_DataInTime() { }

	// RVA: 0x2229654 Offset: 0x2225654 VA: 0x2229654
	public bool get_IsValid() { }

	// RVA: 0x22296C8 Offset: 0x22256C8 VA: 0x22296C8
	public int get_Cur() { }

	// RVA: 0x2229720 Offset: 0x2225720 VA: 0x2229720
	public int get_Last() { }

	// RVA: 0x2229778 Offset: 0x2225778 VA: 0x2229778
	public int get_Max() { }

	// RVA: 0x22297D0 Offset: 0x22257D0 VA: 0x22297D0
	public long get_EndMs() { }

	// RVA: 0x2229828 Offset: 0x2225828 VA: 0x2229828
	public bool get_IsGuideDone() { }

	// RVA: 0x2229880 Offset: 0x2225880 VA: 0x2229880
	public bool InActivityTime() { }

	// RVA: 0x22298D4 Offset: 0x22258D4 VA: 0x22298D4
	public bool CanClaimIsClaimDone() { }

	// RVA: 0x22299E4 Offset: 0x22259E4 VA: 0x22299E4
	public bool IsClaimAllReward() { }

	// RVA: 0x2229A78 Offset: 0x2225A78 VA: 0x2229A78
	public bool IsClaimed(int winPoint) { }

	// RVA: 0x2229AFC Offset: 0x2225AFC VA: 0x2229AFC
	public bool CanClaim(int winPoint) { }

	// RVA: 0x2229B68 Offset: 0x2225B68 VA: 0x2229B68
	public bool IsSpecial(int c) { }

	// RVA: 0x2229BD4 Offset: 0x2225BD4 VA: 0x2229BD4
	public bool RisePlayed(int c) { }

	// RVA: 0x2229C58 Offset: 0x2225C58 VA: 0x2229C58
	public bool DeclinePlayed() { }

	// RVA: 0x2229CE4 Offset: 0x2225CE4 VA: 0x2229CE4
	public bool IsArchivePoint(int c) { }

	// RVA: 0x2229D84 Offset: 0x2225D84 VA: 0x2229D84
	public int PreArchivePoint(int c, bool archiveOnly) { }

	// RVA: 0x2229E34 Offset: 0x2225E34 VA: 0x2229E34
	public int NextWinPoint(int c = -1) { }

	// RVA: 0x2229EF0 Offset: 0x2225EF0 VA: 0x2229EF0
	public int WinPointIndex(int c) { }

	// RVA: 0x2229FA0 Offset: 0x2225FA0 VA: 0x2229FA0
	public void MaxArchive(int c, out int index, out int point) { }

	// RVA: 0x222A05C Offset: 0x222605C VA: 0x222A05C
	public void IndexAndProcess(int c, out int index, out float frac) { }

	// RVA: 0x222A188 Offset: 0x2226188 VA: 0x222A188
	public int CanClaimCount(int diff = 0) { }

	// RVA: 0x222A2B0 Offset: 0x22262B0 VA: 0x222A2B0
	public List<int> RisePointsBetween(int from, int to) { }

	// RVA: 0x222A414 Offset: 0x2226414 VA: 0x222A414
	public ClimbTowerState State() { }

	// RVA: 0x222A524 Offset: 0x2226524 VA: 0x222A524
	private ClimbTowerState StateWhenPeriodEnd() { }

	// RVA: 0x222A59C Offset: 0x222659C VA: 0x222A59C
	public void SetActivityPeriodEnd() { }

	// RVA: 0x222A760 Offset: 0x2226760 VA: 0x222A760
	public bool IsForceOldPeriod() { }

	// RVA: 0x222A780 Offset: 0x2226780 VA: 0x222A780
	public bool IsOldPeriodClaimDone() { }

	// RVA: 0x222A7F0 Offset: 0x22267F0 VA: 0x222A7F0
	public void SetForceClose() { }

	// RVA: 0x222A86C Offset: 0x222686C VA: 0x222A86C
	public void SetGuideDone() { }

	// RVA: 0x222A8E8 Offset: 0x22268E8 VA: 0x222A8E8
	private bool NewDataValid(long start, long end) { }

	// RVA: 0x222AA3C Offset: 0x2226A3C VA: 0x222AA3C
	public bool LoadNewPeriodData() { }

	// RVA: 0x222ACFC Offset: 0x2226CFC VA: 0x222ACFC
	private void ClearPeriod() { }

	// RVA: 0x222AEA4 Offset: 0x2226EA4 VA: 0x222AEA4
	public void TryLoadNewPeriodData() { }

	// RVA: 0x222AF8C Offset: 0x2226F8C VA: 0x222AF8C
	private void SetData(int cur, int last) { }

	// RVA: 0x222B058 Offset: 0x2227058 VA: 0x222B058
	public void RecordLast() { }

	// RVA: 0x222B0CC Offset: 0x22270CC VA: 0x222B0CC
	public void RecordRise(int c) { }

	// RVA: 0x222B200 Offset: 0x2227200 VA: 0x222B200
	public void RecordDecline() { }

	// RVA: 0x222B34C Offset: 0x222734C VA: 0x222B34C
	public void ForceRecordRise() { }

	// RVA: 0x222B4E0 Offset: 0x22274E0 VA: 0x222B4E0 Slot: 15
	public override void OnBoot() { }

	// RVA: 0x222B618 Offset: 0x2227618 VA: 0x222B618
	private void CountLevelResult() { }

	// RVA: 0x222B6B0 Offset: 0x22276B0 VA: 0x222B6B0 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x222C35C Offset: 0x222835C VA: 0x222C35C Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x222C5DC Offset: 0x22285DC VA: 0x222C5DC Slot: 19
	public override void OnQuit() { }

	// RVA: 0x222C374 Offset: 0x2228374 VA: 0x222C374
	public void Lose() { }

	// RVA: 0x222C5F4 Offset: 0x22285F4 VA: 0x222C5F4
	public bool Claim(int winPoint, out int rewardId) { }

	// RVA: 0x222C7A4 Offset: 0x22287A4 VA: 0x222C7A4
	private int get_RoundNo() { }

	// RVA: 0x222C84C Offset: 0x222884C VA: 0x222C84C
	private int get_RemainSec() { }

	// RVA: 0x222B9A4 Offset: 0x22279A4 VA: 0x222B9A4
	private void TrackStageAdvance(bool isWin, int from, int to, bool isSpecial) { }

	// RVA: 0x222BF68 Offset: 0x2227F68 VA: 0x222BF68
	private void TrackRewardUnlock(int changeType, int stageId, int rewardId) { }

	// RVA: 0x222C8E0 Offset: 0x22288E0 VA: 0x222C8E0 Slot: 26
	public void BindHall(UIPanel hud) { }

	// RVA: 0x222C948 Offset: 0x2228948 VA: 0x222C948 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(ClimbTowerFeature.<HallAutoOpen>d__99))]
	// RVA: 0x222CCA8 Offset: 0x2228CA8 VA: 0x222CCA8
	private IEnumerator HallAutoOpen() { }

	// RVA: 0x222CD3C Offset: 0x2228D3C VA: 0x222CD3C
	public UIPanel OpenMain(bool isGuide, Action onClose) { }

	// RVA: 0x222CDDC Offset: 0x2228DDC VA: 0x222CDDC Slot: 22
	public int get_ActivityId() { }

	// RVA: 0x222CDE4 Offset: 0x2228DE4 VA: 0x222CDE4 Slot: 23
	public bool AtStake() { }

	// RVA: 0x222CEFC Offset: 0x2228EFC VA: 0x222CEFC Slot: 24
	public string get_ContinuePanel() { }

	// RVA: 0x222CF3C Offset: 0x2228F3C VA: 0x222CF3C Slot: 25
	public string get_QuitItemPrefab() { }

	// RVA: 0x222CF7C Offset: 0x2228F7C VA: 0x222CF7C Slot: 27
	public void BindContinuePanel(UIPanel panel) { }

	// RVA: 0x222D420 Offset: 0x2229420 VA: 0x222D420 Slot: 28
	public void BindQuitItem(GameObject row) { }

	// RVA: 0x222D5A4 Offset: 0x22295A4 VA: 0x222D5A4 Slot: 29
	public string get_StakeProgressText() { }

	// RVA: 0x222D0F0 Offset: 0x22290F0 VA: 0x222D0F0
	public void BindProcess(Transform t) { }

	// RVA: 0x222D330 Offset: 0x2229330 VA: 0x222D330
	private static void UiText(Transform t, string s) { }

	// RVA: 0x222D658 Offset: 0x2229658 VA: 0x222D658
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x222D758 Offset: 0x2229758 VA: 0x222D758
	private IEnumerator <CollectHallCommands>b__98_0() { }
}

