// Namespace: Dino.BusSand.App.Meta
public class StreakRateFeature : LiveFeature<StreakRateData>, IStakeActivity, IHallBinder, IStakeActivityUi // TypeDefIndex: 4105
{
	// Fields
	public const int Id = 3;
	public const int BaseScore = 5;
	public const int StateNone = -1;
	public const int StateInProgress = 0;
	public const int StateCompleted = 1;
	public const int StateLocked = 2;
	public const int GroupId = 1;
	public const int HallRewardPriority = 9;
	public const int HallGuidePriority = 12;
	private const string Reason = "StreakRateReward";
	private int _cfgId; // 0x18
	private int _rateGroup; // 0x1C
	private int[] _need; // 0x20
	private int[] _rewards; // 0x28
	private readonly List<int[]> _rates; // 0x30

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static StreakRateFeature I { get; }
	public bool IsOpen { get; }
	public StreakRateSlot CurrentSlot { get; }
	public int ScoreMaxIndex { get; }
	public long CurrentEndMs { get; }
	private int RoundNo { get; }
	public int ActivityId { get; }
	public string ContinuePanel { get; }
	public string QuitItemPrefab { get; }
	public string StakeProgressText { get; }

	// Methods

	// RVA: 0x224B698 Offset: 0x2247698 VA: 0x224B698 Slot: 13
	public override string get_Key() { }

	// RVA: 0x224B6D8 Offset: 0x22476D8 VA: 0x224B6D8 Slot: 14
	public override int get_Order() { }

	// RVA: 0x224B6E0 Offset: 0x22476E0 VA: 0x224B6E0
	public static StreakRateFeature get_I() { }

	// RVA: 0x224B744 Offset: 0x2247744 VA: 0x224B744
	private void Config(int activityId) { }

	// RVA: 0x224BF28 Offset: 0x2247F28 VA: 0x224BF28
	public int[] NeedScores(StreakRateSlot s) { }

	// RVA: 0x224BF94 Offset: 0x2247F94 VA: 0x224BF94
	public int[] RewardIds(StreakRateSlot s) { }

	// RVA: 0x224C000 Offset: 0x2248000 VA: 0x224C000
	public bool get_IsOpen() { }

	// RVA: 0x224C008 Offset: 0x2248008 VA: 0x224C008
	public StreakRateSlot get_CurrentSlot() { }

	// RVA: 0x224C160 Offset: 0x2248160 VA: 0x224C160
	public int get_ScoreMaxIndex() { }

	// RVA: 0x224C18C Offset: 0x224818C VA: 0x224C18C
	public bool IsAllScoreGot() { }

	// RVA: 0x224C1D0 Offset: 0x22481D0 VA: 0x224C1D0
	public int CurMaxScore(StreakRateSlot s) { }

	// RVA: 0x224C230 Offset: 0x2248230 VA: 0x224C230
	public int CurRewardId(StreakRateSlot s) { }

	// RVA: 0x224C2E0 Offset: 0x22482E0 VA: 0x224C2E0
	public static int StreakRateByLevelType(LevelType t) { }

	// RVA: 0x224C790 Offset: 0x2248790 VA: 0x224C790
	private LevelType PendingLevelType(StreakRateSlot s) { }

	// RVA: 0x224C840 Offset: 0x2248840 VA: 0x224C840
	public int WinAddScore(StreakRateSlot s) { }

	// RVA: 0x224C86C Offset: 0x224886C VA: 0x224C86C
	public int RateNumber(int index) { }

	// RVA: 0x224C938 Offset: 0x2248938 VA: 0x224C938
	public int CurRateNumber() { }

	// RVA: 0x224CACC Offset: 0x2248ACC VA: 0x224CACC
	public int RateFor(int streak) { }

	// RVA: 0x224CC70 Offset: 0x2248C70 VA: 0x224CC70
	public int CurRateIndex() { }

	// RVA: 0x224CE20 Offset: 0x2248E20 VA: 0x224CE20
	public int MaxRateNumber() { }

	// RVA: 0x224CEB8 Offset: 0x2248EB8 VA: 0x224CEB8
	public bool IsCheat(StreakRateSlot s) { }

	// RVA: 0x224CEE8 Offset: 0x2248EE8 VA: 0x224CEE8
	public bool IsTimeFinished(StreakRateSlot s) { }

	// RVA: 0x224CF74 Offset: 0x2248F74 VA: 0x224CF74
	private static bool IsInTime(StreakRateSlot s, long t) { }

	// RVA: 0x224CFA4 Offset: 0x2248FA4 VA: 0x224CFA4
	public bool IsInStreakRate() { }

	// RVA: 0x224CFF8 Offset: 0x2248FF8 VA: 0x224CFF8
	public long get_CurrentEndMs() { }

	// RVA: 0x224D024 Offset: 0x2249024 VA: 0x224D024 Slot: 15
	public override void OnBoot() { }

	// RVA: 0x224D028 Offset: 0x2249028 VA: 0x224D028
	public void Init() { }

	// RVA: 0x224D0C4 Offset: 0x22490C4 VA: 0x224D0C4
	private void Prune() { }

	// RVA: 0x224D280 Offset: 0x2249280 VA: 0x224D280
	public bool HaveNewActivity() { }

	// RVA: 0x224D2C4 Offset: 0x22492C4 VA: 0x224D2C4
	public void AutoAddNewOne() { }

	// RVA: 0x224DB20 Offset: 0x2249B20 VA: 0x224DB20
	private void CreateNew(int activityId, long start, long end) { }

	// RVA: 0x224DE7C Offset: 0x2249E7C VA: 0x224DE7C
	private bool CanMutateAfterGuide() { }

	// RVA: 0x224DEE0 Offset: 0x2249EE0 VA: 0x224DEE0 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x224DFC0 Offset: 0x2249FC0 VA: 0x224DFC0 Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x224E054 Offset: 0x224A054 VA: 0x224E054 Slot: 19
	public override void OnQuit() { }

	// RVA: 0x224DEE4 Offset: 0x2249EE4 VA: 0x224DEE4
	public void WinOnce(LevelType t) { }

	// RVA: 0x224DFC4 Offset: 0x2249FC4 VA: 0x224DFC4
	public void LoseOnce() { }

	// RVA: 0x224E058 Offset: 0x224A058 VA: 0x224E058
	public void UpdateLockedToInProgress(bool isWin, bool forceOpen = False) { }

	// RVA: 0x224E558 Offset: 0x224A558 VA: 0x224E558
	private void ApplyLose(StreakRateSlot s) { }

	// RVA: 0x224D208 Offset: 0x2249208 VA: 0x224D208
	private void MarkFinished(StreakRateSlot s) { }

	// RVA: 0x224EBE4 Offset: 0x224ABE4 VA: 0x224EBE4
	public void TryFinishExpiredSlot() { }

	// RVA: 0x224EC9C Offset: 0x224AC9C VA: 0x224EC9C
	public void ClearSlotGuide() { }

	// RVA: 0x224E360 Offset: 0x224A360 VA: 0x224E360
	public void AutoExecutePendingCommand(StreakRateSlot s, bool track = True) { }

	// RVA: 0x224ED14 Offset: 0x224AD14 VA: 0x224ED14
	public List<int> BuildWinRewards(StreakRateSlot s, bool track, out int getedIndex) { }

	// RVA: 0x224F0E4 Offset: 0x224B0E4 VA: 0x224F0E4
	public void ApplyWinProgress(StreakRateSlot s, int rewardIndex, bool track) { }

	// RVA: 0x224FE74 Offset: 0x224BE74 VA: 0x224FE74
	public List<Vector3> SliderList(StreakRateSlot s, int addScore) { }

	// RVA: 0x22500BC Offset: 0x224C0BC VA: 0x22500BC
	private int get_RoundNo() { }

	// RVA: 0x2250138 Offset: 0x224C138 VA: 0x2250138
	private int RemainSec(StreakRateSlot s) { }

	// RVA: 0x224F858 Offset: 0x224B858 VA: 0x224F858
	private void TrackWin(StreakRateSlot s, int from, int to, int changeNum) { }

	// RVA: 0x224E5D8 Offset: 0x224A5D8 VA: 0x224E5D8
	private void TrackLose(StreakRateSlot s) { }

	// RVA: 0x224F208 Offset: 0x224B208 VA: 0x224F208
	private void TrackUnlock(int stageId, int rewardId) { }

	// RVA: 0x2250588 Offset: 0x224C588 VA: 0x2250588 Slot: 26
	public void BindHall(UIPanel hud) { }

	// RVA: 0x22505F0 Offset: 0x224C5F0 VA: 0x22505F0 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(StreakRateFeature.<HallStreakReward>d__76))]
	// RVA: 0x2250758 Offset: 0x224C758 VA: 0x2250758
	private IEnumerator HallStreakReward() { }

	[IteratorStateMachine(typeof(StreakRateFeature.<HallStreakGuide>d__77))]
	// RVA: 0x22507EC Offset: 0x224C7EC VA: 0x22507EC
	private IEnumerator HallStreakGuide() { }

	// RVA: 0x2250880 Offset: 0x224C880 VA: 0x2250880 Slot: 22
	public int get_ActivityId() { }

	// RVA: 0x2250888 Offset: 0x224C888 VA: 0x2250888 Slot: 23
	public bool AtStake() { }

	// RVA: 0x2250EE4 Offset: 0x224CEE4 VA: 0x2250EE4 Slot: 24
	public string get_ContinuePanel() { }

	// RVA: 0x2250F24 Offset: 0x224CF24 VA: 0x2250F24 Slot: 25
	public string get_QuitItemPrefab() { }

	// RVA: 0x2250F64 Offset: 0x224CF64 VA: 0x2250F64 Slot: 27
	public void BindContinuePanel(UIPanel panel) { }

	// RVA: 0x2250F68 Offset: 0x224CF68 VA: 0x2250F68 Slot: 28
	public void BindQuitItem(GameObject row) { }

	// RVA: 0x2250F84 Offset: 0x224CF84 VA: 0x2250F84 Slot: 29
	public string get_StakeProgressText() { }

	// RVA: 0x2250FFC Offset: 0x224CFFC VA: 0x2250FFC
	public void .ctor() { }
}

