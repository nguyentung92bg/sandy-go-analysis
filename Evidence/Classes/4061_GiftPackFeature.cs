// Namespace: Dino.BusSand.App.Meta
public class GiftPackFeature : LiveFeature<GiftPackData>, IHallBinder // TypeDefIndex: 4061
{
	// Fields
	public const int BreakIcePackId = 1004;
	public const int PassportPackId = 1005;
	public const int GoldenCoinPackId = 1007;
	public const int ComboPackId = 1009;
	public const int HallPopupPriority = 85;
	public const int HallUIOpenPriority = 65;
	private const long DefaultPackDurationSeconds = 43200;
	public static bool OpenFlg; // 0x0
	public static bool ComboGiftOpen; // 0x1
	public static string ThemeIdsMap; // 0x8
	[CompilerGenerated]
	private static Action Changed; // 0x10
	[CompilerGenerated]
	private static Action<int> PackInvalidated; // 0x18
	private readonly List<GiftPackConfig> _configs; // 0x18
	private readonly Dictionary<int, GiftPackTheme> _themes; // 0x20
	private readonly List<int> _popupQueue; // 0x28
	private readonly Dictionary<int, long> _lastCounts; // 0x30
	private readonly List<string> _hallCmds; // 0x38
	private int _maxConcurrent; // 0x40
	private bool _inited; // 0x44
	private GiftPackData _initData; // 0x48
	private static GiftPackFeature s_inst; // 0x20
	private static bool s_hooked; // 0x28

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static GiftPackFeature I { get; }
	public IReadOnlyList<GiftPackConfig> Configs { get; }
	private static long Now { get; }
	private static int CurLevel { get; }
	public IReadOnlyList<int> PendingPopups { get; }
	public IReadOnlyList<string> PendingHallCommands { get; }
	public int GoldenPackId { get; }
	public GoldenGiftState Golden { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2233BB8 Offset: 0x222FBB8 VA: 0x2233BB8
	public static void add_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2233C94 Offset: 0x222FC94 VA: 0x2233C94
	public static void remove_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2233D70 Offset: 0x222FD70 VA: 0x2233D70
	public static void add_PackInvalidated(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x2233E64 Offset: 0x222FE64 VA: 0x2233E64
	public static void remove_PackInvalidated(Action<int> value) { }

	// RVA: 0x2233F58 Offset: 0x222FF58 VA: 0x2233F58 Slot: 13
	public override string get_Key() { }

	// RVA: 0x2233F98 Offset: 0x222FF98 VA: 0x2233F98 Slot: 14
	public override int get_Order() { }

	// RVA: 0x2233FA0 Offset: 0x222FFA0 VA: 0x2233FA0
	public void .ctor() { }

	// RVA: 0x2234A44 Offset: 0x2230A44 VA: 0x2234A44
	public static GiftPackFeature get_I() { }

	// RVA: 0x2234390 Offset: 0x2230390 VA: 0x2234390
	private void LoadConfigs() { }

	// RVA: 0x2234AE0 Offset: 0x2230AE0 VA: 0x2234AE0
	public IReadOnlyList<GiftPackConfig> get_Configs() { }

	// RVA: 0x2234AE8 Offset: 0x2230AE8 VA: 0x2234AE8
	public GiftPackConfig Config(int id) { }

	// RVA: 0x2234C34 Offset: 0x2230C34 VA: 0x2234C34
	private GiftPackConfig FindFirstConfig(GiftPackType type) { }

	// RVA: 0x2234D90 Offset: 0x2230D90 VA: 0x2234D90
	public int PackIdByShopItem(int shopItemId) { }

	// RVA: 0x2234EE8 Offset: 0x2230EE8 VA: 0x2234EE8
	public bool IsPackDisabled(int id) { }

	// RVA: 0x2234FD8 Offset: 0x2230FD8 VA: 0x2234FD8
	public static Feature PackFeature(int id) { }

	// RVA: 0x2234FF8 Offset: 0x2230FF8 VA: 0x2234FF8
	public GiftPackState State(int id) { }

	// RVA: 0x223526C Offset: 0x223126C VA: 0x223526C
	private static long get_Now() { }

	// RVA: 0x22352C4 Offset: 0x22312C4 VA: 0x22352C4
	private static int get_CurLevel() { }

	// RVA: 0x2235350 Offset: 0x2231350 VA: 0x2235350
	public List<GiftPackTheme> Themes(GiftPackConfig c) { }

	// RVA: 0x223561C Offset: 0x223161C VA: 0x223561C
	private static string MappedThemeIds(int packId) { }

	// RVA: 0x22357AC Offset: 0x22317AC VA: 0x22357AC
	public GiftPackTheme CurrentTheme(int packId) { }

	// RVA: 0x2235868 Offset: 0x2231868 VA: 0x2235868
	private void UpdateThemeIndex(GiftPackConfig c, GiftPackState s) { }

	// RVA: 0x2235950 Offset: 0x2231950 VA: 0x2235950
	private static bool IsBreakIceIconPath(string p) { }

	// RVA: 0x22359FC Offset: 0x22319FC VA: 0x22359FC
	public bool IsBreakIcePack(GiftPackConfig c) { }

	// RVA: 0x2235BB4 Offset: 0x2231BB4 VA: 0x2235BB4
	public string PanelPath(int packId) { }

	// RVA: 0x2235C6C Offset: 0x2231C6C VA: 0x2235C6C
	public string HallIconPath(int packId) { }

	// RVA: 0x2235D04 Offset: 0x2231D04 VA: 0x2235D04
	private void EnsureInit() { }

	// RVA: 0x2236570 Offset: 0x2232570 VA: 0x2236570
	public void ResetSession() { }

	// RVA: 0x22360F4 Offset: 0x22320F4 VA: 0x22360F4
	private void ResetSessionState() { }

	// RVA: 0x22363A0 Offset: 0x22323A0 VA: 0x22363A0
	private void SnapshotCounts() { }

	// RVA: 0x223661C Offset: 0x223261C VA: 0x223661C Slot: 15
	public override void OnBoot() { }

	// RVA: 0x2236E04 Offset: 0x2232E04 VA: 0x2236E04 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x2237078 Offset: 0x2233078 VA: 0x2237078 Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x2237204 Offset: 0x2233204 VA: 0x2237204 Slot: 19
	public override void OnQuit() { }

	// RVA: 0x2237220 Offset: 0x2233220 VA: 0x2237220 Slot: 20
	public override void OnEconomyChanged() { }

	// RVA: 0x2236E8C Offset: 0x2232E8C VA: 0x2236E8C
	private void RoundEnd(bool win) { }

	// RVA: 0x22377DC Offset: 0x22337DC VA: 0x22377DC
	private void OnItemChanged(int id) { }

	// RVA: 0x2237B38 Offset: 0x2233B38 VA: 0x2237B38
	private static void OnIapPurchased(int storeItemId) { }

	// RVA: 0x2237C4C Offset: 0x2233C4C VA: 0x2237C4C
	public void OnStorePurchaseCompleted(int storeItemId) { }

	// RVA: 0x2237F04 Offset: 0x2233F04 VA: 0x2237F04
	public void OnPackPurchased(int packId) { }

	// RVA: 0x22368EC Offset: 0x22328EC VA: 0x22368EC
	public void EvaluateAllPacks() { }

	// RVA: 0x2238604 Offset: 0x2234604 VA: 0x2238604
	private void OnPackTriggered(int id) { }

	// RVA: 0x2238AA4 Offset: 0x2234AA4 VA: 0x2238AA4
	public bool EvaluateCondition(GiftPackConfig c, bool firstAttempt, out int matchedGroup) { }

	// RVA: 0x223916C Offset: 0x223516C VA: 0x223916C
	public bool EvaluateSingle(GiftPackCond type, string raw, int level) { }

	// RVA: 0x22398A0 Offset: 0x22358A0 VA: 0x22398A0
	private static double SumSince(List<GiftTimedAmount> list, int id, long since) { }

	// RVA: 0x2238E44 Offset: 0x2234E44 VA: 0x2238E44
	private void AddPending(int id, int group) { }

	// RVA: 0x2236A88 Offset: 0x2232A88 VA: 0x2236A88
	private void TryActivateFromPendingQueue() { }

	// RVA: 0x2239A54 Offset: 0x2235A54 VA: 0x2239A54
	private void ActivatePack(int packId, int group, bool queuePopup) { }

	// RVA: 0x2239CCC Offset: 0x2235CCC VA: 0x2239CCC
	private void AssignActivationPeriod(GiftPackConfig c, GiftPackState s, long now) { }

	// RVA: 0x223A02C Offset: 0x223602C VA: 0x223A02C
	private static string BreakIceOutsideCycleConsumedPeriodKey(GiftPackConfig c, long unix) { }

	// RVA: 0x223A0AC Offset: 0x22360AC VA: 0x223A0AC
	private long DurationBeforeActivation(GiftPackConfig c) { }

	// RVA: 0x223A21C Offset: 0x223621C VA: 0x223A21C
	private static int StoreDurationHours(GiftPackConfig c) { }

	// RVA: 0x22389E0 Offset: 0x22349E0 VA: 0x22389E0
	private bool HasActivatedCurrentCycle(GiftPackConfig c, GiftPackState s) { }

	// RVA: 0x2238780 Offset: 0x2234780 VA: 0x2238780
	private static bool IsAtPurchaseLimit(GiftPackConfig c, GiftPackState s) { }

	// RVA: 0x22387B4 Offset: 0x22347B4 VA: 0x22387B4
	private bool IsInCooldown(GiftPackConfig c, GiftPackState s) { }

	// RVA: 0x223669C Offset: 0x223269C VA: 0x223669C
	public void RefreshActiveStates() { }

	// RVA: 0x223A404 Offset: 0x2236404 VA: 0x223A404
	private void ExpirePack(int packId) { }

	// RVA: 0x223A610 Offset: 0x2236610 VA: 0x223A610
	public bool IsPackActive(int packId) { }

	// RVA: 0x223A2E0 Offset: 0x22362E0 VA: 0x223A2E0
	public long PackDuration(int packId) { }

	// RVA: 0x223A660 Offset: 0x2236660 VA: 0x223A660
	public long PackTotalDuration(int packId) { }

	// RVA: 0x223A6BC Offset: 0x22366BC VA: 0x223A6BC
	public long RemainingSeconds(int packId) { }

	// RVA: 0x223A7B8 Offset: 0x22367B8 VA: 0x223A7B8
	public long EndTime(int packId) { }

	// RVA: 0x223A7F4 Offset: 0x22367F4 VA: 0x223A7F4
	public bool CanShowPopup(int packId) { }

	// RVA: 0x2239ED8 Offset: 0x2235ED8 VA: 0x2239ED8
	private void QueuePopup(int packId) { }

	// RVA: 0x223A8C0 Offset: 0x22368C0 VA: 0x223A8C0
	public IReadOnlyList<int> get_PendingPopups() { }

	// RVA: 0x223A8C8 Offset: 0x22368C8 VA: 0x223A8C8
	public void MarkPopupShown(int packId) { }

	// RVA: 0x223AA30 Offset: 0x2236A30 VA: 0x223AA30
	public void OnPanelClosed(int packId) { }

	// RVA: 0x223AADC Offset: 0x2236ADC VA: 0x223AADC
	public bool TryOpen(int packId, Action onClosed, string source) { }

	// RVA: 0x223AC0C Offset: 0x2236C0C VA: 0x223AC0C Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(GiftPackFeature.<RunPopup>d__98))]
	// RVA: 0x223AF58 Offset: 0x2236F58 VA: 0x223AF58
	private IEnumerator RunPopup(int packId) { }

	[IteratorStateMachine(typeof(GiftPackFeature.<RunHallUIOpen>d__99))]
	// RVA: 0x223AFFC Offset: 0x2236FFC VA: 0x223AFFC
	private IEnumerator RunHallUIOpen(string cmd) { }

	// RVA: 0x223B0AC Offset: 0x22370AC VA: 0x223B0AC
	private void AddHallCommand(string cmd) { }

	// RVA: 0x223B190 Offset: 0x2237190 VA: 0x223B190
	public IReadOnlyList<string> get_PendingHallCommands() { }

	// RVA: 0x223B198 Offset: 0x2237198 VA: 0x223B198 Slot: 22
	public void BindHall(UIPanel hud) { }

	// RVA: 0x223B204 Offset: 0x2237204 VA: 0x223B204
	public int HallIconPackId(string iconName) { }

	// RVA: 0x223B474 Offset: 0x2237474 VA: 0x223B474
	public bool ConsumeIconFirstShow(int packId) { }

	// RVA: 0x223B520 Offset: 0x2237520 VA: 0x223B520
	public bool GoldenHallVisible() { }

	// RVA: 0x223B634 Offset: 0x2237634 VA: 0x223B634
	public bool GoldenRedPoint() { }

	// RVA: 0x223B618 Offset: 0x2237618 VA: 0x223B618
	public int get_GoldenPackId() { }

	// RVA: 0x223B7DC Offset: 0x22377DC VA: 0x223B7DC
	public GoldenGiftState get_Golden() { }

	// RVA: 0x223B83C Offset: 0x223783C VA: 0x223B83C
	public static List<GiftPackFeature.GoldenStage> GoldenStages(int packId) { }

	// RVA: 0x223BE20 Offset: 0x2237E20 VA: 0x223BE20
	public int RecommendedGoldenPackId() { }

	// RVA: 0x223BEF0 Offset: 0x2237EF0 VA: 0x223BEF0
	private static int ReachedStage(List<GiftPackFeature.GoldenStage> stages, int passLevelCount) { }

	// RVA: 0x2237278 Offset: 0x2233278 VA: 0x2237278
	public void SyncGoldenProgress() { }

	// RVA: 0x223C88C Offset: 0x223888C VA: 0x223C88C
	private void CheckGoldenAllStagesForcePopup(int packId) { }

	// RVA: 0x223CAA4 Offset: 0x2238AA4 VA: 0x223CAA4
	public bool CanClaimGoldenStage(int packId, int stageId) { }

	// RVA: 0x223CC74 Offset: 0x2238C74 VA: 0x223CC74
	public int ClaimGoldenStage(int packId, int stageId) { }

	// RVA: 0x223D5DC Offset: 0x22395DC VA: 0x223D5DC
	public int UnclaimedGoldenCoins(int packId) { }

	// RVA: 0x223D7A8 Offset: 0x22397A8 VA: 0x223D7A8
	public int FinishGoldenSettlement(int packId) { }

	// RVA: 0x223DAA0 Offset: 0x2239AA0 VA: 0x223DAA0
	public bool NeedShowGoldenCoinSettlement(out int packId) { }

	// RVA: 0x2236D50 Offset: 0x2232D50 VA: 0x2236D50
	private void CheckGoldenCoinSettlement() { }

	// RVA: 0x2236DD0 Offset: 0x2232DD0 VA: 0x2236DD0
	private void TryCloseCurrentGoldenPackIfAllClaimed() { }

	// RVA: 0x223DB40 Offset: 0x2239B40 VA: 0x223DB40
	public bool TryCloseGoldenPackIfAllClaimed(int packId) { }

	// RVA: 0x2238164 Offset: 0x2234164 VA: 0x2238164
	private void TrackGoldenPurchaseUnlock(int packId) { }

	// RVA: 0x223DD78 Offset: 0x2239D78 VA: 0x223DD78
	public int GoldenReachedStage(int packId) { }

	// RVA: 0x223DDF8 Offset: 0x2239DF8 VA: 0x223DDF8
	private static void .cctor() { }
}

