// Namespace: Dino.BusSand.App.Meta
public class PassportFeature : LiveFeature<PassportData>, IHallBinder, IStakeActivity // TypeDefIndex: 4098
{
	// Fields
	public const int SystemOpenId = 6;
	public static int PassportId; // 0x0
	public static bool ForceClose; // 0x4
	public const int GuidePriority = 12;
	public const int KeysFlyPriority = 45;
	public const int HallUIOpenPriority = 65;
	[CompilerGenerated]
	private static Action Changed; // 0x8
	[CompilerGenerated]
	private static Action PurchasedInGame; // 0x10
	private static PassportFeature s_inst; // 0x18
	private int _hallCommandProduce; // 0x18
	private readonly List<string> _hallCmds; // 0x20
	[CompilerGenerated]
	private long <LastBankCoins>k__BackingField; // 0x28

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public int ActivityId { get; }
	public string ContinuePanel { get; }
	public string QuitItemPrefab { get; }
	public static PassportFeature I { get; }
	private static long NowSec { get; }
	public int EffectiveConfigId { get; }
	private Dictionary<string, object> Cfg { get; }
	public int StageCount { get; }
	public int BonusBankNeed { get; }
	public int BonusBankMaxTimes { get; }
	public int GiftPackId { get; }
	public int PrivilegeId { get; }
	public List<PassportFeature.Reward> BonusBankSingleReward { get; }
	public int BonusBankCoin { get; }
	public bool PrivilegeActive { get; }
	public int State { get; }
	public bool HasSnapshot { get; }
	public bool IsPurchased { get; }
	public bool HavePurchasedPassport { get; }
	public int CurrentStageIndex { get; }
	public int CurrentKeys { get; }
	public int PendingKeys { get; }
	public int HallCommandProduce { get; }
	public int DisplayedKeysForHud { get; }
	private int MaxIndex { get; }
	public int BankStageCount { get; }
	public long LastBankCoins { get; set; }
	public bool HasRedPoint { get; }
	public bool ForceCloseOpen { get; }
	public IReadOnlyList<string> PendingHallCommands { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22441D4 Offset: 0x22401D4 VA: 0x22441D4
	public static void add_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x22442B0 Offset: 0x22402B0 VA: 0x22442B0
	public static void remove_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x224438C Offset: 0x224038C VA: 0x224438C
	public static void add_PurchasedInGame(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2244468 Offset: 0x2240468 VA: 0x2244468
	public static void remove_PurchasedInGame(Action value) { }

	// RVA: 0x2244544 Offset: 0x2240544 VA: 0x2244544 Slot: 13
	public override string get_Key() { }

	// RVA: 0x2244584 Offset: 0x2240584 VA: 0x2244584 Slot: 14
	public override int get_Order() { }

	// RVA: 0x224458C Offset: 0x224058C VA: 0x224458C Slot: 23
	public int get_ActivityId() { }

	// RVA: 0x2244594 Offset: 0x2240594 VA: 0x2244594 Slot: 25
	public string get_ContinuePanel() { }

	// RVA: 0x22445D4 Offset: 0x22405D4 VA: 0x22445D4 Slot: 26
	public string get_QuitItemPrefab() { }

	// RVA: 0x22445DC Offset: 0x22405DC VA: 0x22445DC
	public static PassportFeature get_I() { }

	// RVA: 0x2244678 Offset: 0x2240678 VA: 0x2244678
	public void .ctor() { }

	// RVA: 0x224488C Offset: 0x224088C VA: 0x224488C
	private static long get_NowSec() { }

	// RVA: 0x2244894 Offset: 0x2240894 VA: 0x2244894
	public int get_EffectiveConfigId() { }

	// RVA: 0x224493C Offset: 0x224093C VA: 0x224493C
	private Dictionary<string, object> get_Cfg() { }

	// RVA: 0x22449BC Offset: 0x22409BC VA: 0x22449BC
	private List<object> CfgList(string k) { }

	// RVA: 0x22449E0 Offset: 0x22409E0 VA: 0x22449E0
	public int get_StageCount() { }

	// RVA: 0x2244A40 Offset: 0x2240A40 VA: 0x2244A40
	public int StageNeedKeys(int i) { }

	// RVA: 0x2244AF4 Offset: 0x2240AF4 VA: 0x2244AF4
	public int get_BonusBankNeed() { }

	// RVA: 0x2244B50 Offset: 0x2240B50 VA: 0x2244B50
	public int get_BonusBankMaxTimes() { }

	// RVA: 0x2244BAC Offset: 0x2240BAC VA: 0x2244BAC
	public int get_GiftPackId() { }

	// RVA: 0x2244C08 Offset: 0x2240C08 VA: 0x2244C08
	public int get_PrivilegeId() { }

	// RVA: 0x2244C64 Offset: 0x2240C64 VA: 0x2244C64
	public int Produce(LevelType t) { }

	// RVA: 0x2244D0C Offset: 0x2240D0C VA: 0x2244D0C
	private static List<PassportFeature.Reward> ParseRewards(object grouped) { }

	// RVA: 0x2245038 Offset: 0x2241038 VA: 0x2245038
	private List<PassportFeature.Reward> StageList(string key, int i) { }

	// RVA: 0x2245140 Offset: 0x2241140 VA: 0x2245140
	public List<PassportFeature.Reward> FreeRewards(int i) { }

	// RVA: 0x2245198 Offset: 0x2241198 VA: 0x2245198
	public List<PassportFeature.Reward> PassRewards(int i) { }

	// RVA: 0x22451F0 Offset: 0x22411F0 VA: 0x22451F0
	private int StageBox(string key, int i) { }

	// RVA: 0x2245294 Offset: 0x2241294 VA: 0x2245294
	public int FreeBox(int i) { }

	// RVA: 0x22452EC Offset: 0x22412EC VA: 0x22452EC
	public int PassBox(int i) { }

	// RVA: 0x2245344 Offset: 0x2241344 VA: 0x2245344
	public static List<PassportFeature.Reward> BoxRewards(int boxId) { }

	// RVA: 0x2245468 Offset: 0x2241468 VA: 0x2245468
	public List<PassportFeature.Reward> StageRewards(int i, bool paid) { }

	// RVA: 0x224553C Offset: 0x224153C VA: 0x224553C
	public List<PassportFeature.Reward> get_BonusBankSingleReward() { }

	// RVA: 0x22455C8 Offset: 0x22415C8 VA: 0x22455C8
	public int get_BonusBankCoin() { }

	// RVA: 0x22456FC Offset: 0x22416FC VA: 0x22456FC
	public static void Grant(List<PassportFeature.Reward> rewards, string reason) { }

	// RVA: 0x22458B4 Offset: 0x22418B4 VA: 0x22458B4
	public int PowerLimitAdd() { }

	// RVA: 0x2245A98 Offset: 0x2241A98 VA: 0x2245A98
	public bool get_PrivilegeActive() { }

	// RVA: 0x2245B54 Offset: 0x2241B54 VA: 0x2245B54
	public void ActivePrivilege() { }

	// RVA: 0x2245DF8 Offset: 0x2241DF8 VA: 0x2245DF8
	public void DeactivatePrivilege() { }

	// RVA: 0x2245ECC Offset: 0x2241ECC VA: 0x2245ECC
	public bool IsCheat() { }

	// RVA: 0x2245F58 Offset: 0x2241F58 VA: 0x2245F58
	public bool HavePassports() { }

	// RVA: 0x224602C Offset: 0x224202C VA: 0x224602C
	public int get_State() { }

	// RVA: 0x2246084 Offset: 0x2242084 VA: 0x2246084
	public bool get_HasSnapshot() { }

	// RVA: 0x22460EC Offset: 0x22420EC VA: 0x22460EC
	private bool SnapshotValid() { }

	// RVA: 0x2246184 Offset: 0x2242184 VA: 0x2246184
	public long RemainingSeconds() { }

	// RVA: 0x2246258 Offset: 0x2242258 VA: 0x2246258
	private bool SnapshotExpired(long now) { }

	// RVA: 0x22462E8 Offset: 0x22422E8 VA: 0x22462E8
	public bool IsPassportActive() { }

	// RVA: 0x22463A8 Offset: 0x22423A8 VA: 0x22463A8
	public bool get_IsPurchased() { }

	// RVA: 0x2246400 Offset: 0x2242400 VA: 0x2246400
	public bool get_HavePurchasedPassport() { }

	// RVA: 0x2246458 Offset: 0x2242458 VA: 0x2246458
	public bool NeedShowPassportOpen() { }

	// RVA: 0x22464F0 Offset: 0x22424F0 VA: 0x22464F0
	public bool NeedShowPassportResult() { }

	// RVA: 0x2246574 Offset: 0x2242574 VA: 0x2246574
	public bool NeedShowPassportStartGuide() { }

	// RVA: 0x224663C Offset: 0x224263C VA: 0x224663C
	public bool NeedShowPassportsBtn() { }

	// RVA: 0x22466CC Offset: 0x22426CC VA: 0x22466CC
	public bool NeedShowPassportContinue() { }

	// RVA: 0x2246768 Offset: 0x2242768 VA: 0x2246768 Slot: 24
	public bool AtStake() { }

	// RVA: 0x22467E8 Offset: 0x22427E8 VA: 0x22467E8
	public int CurrentStoreItemId() { }

	// RVA: 0x22468D0 Offset: 0x22428D0 VA: 0x22468D0
	public int get_CurrentStageIndex() { }

	// RVA: 0x2246928 Offset: 0x2242928 VA: 0x2246928
	public int get_CurrentKeys() { }

	// RVA: 0x2246980 Offset: 0x2242980 VA: 0x2246980
	public int get_PendingKeys() { }

	// RVA: 0x22469D8 Offset: 0x22429D8 VA: 0x22469D8
	public int get_HallCommandProduce() { }

	// RVA: 0x22469E0 Offset: 0x22429E0 VA: 0x22469E0
	public void ClearHallCommandProduce() { }

	// RVA: 0x22469E8 Offset: 0x22429E8 VA: 0x22469E8
	public int get_DisplayedKeysForHud() { }

	// RVA: 0x2246A60 Offset: 0x2242A60 VA: 0x2246A60
	public int StageKeyCost(int idx) { }

	// RVA: 0x2246AA0 Offset: 0x2242AA0 VA: 0x2246AA0
	private int get_MaxIndex() { }

	// RVA: 0x2246ACC Offset: 0x2242ACC VA: 0x2246ACC
	public int SimulateStageIndexWithKeys(int keys) { }

	// RVA: 0x2246BBC Offset: 0x2242BBC VA: 0x2246BBC
	public int SimulateRemainingKeys(int keys) { }

	// RVA: 0x2246AE8 Offset: 0x2242AE8 VA: 0x2246AE8
	private void Simulate(int keys, out int idx, out int left) { }

	// RVA: 0x2246BD8 Offset: 0x2242BD8 VA: 0x2246BD8
	private void AdvanceStages() { }

	// RVA: 0x2246C88 Offset: 0x2242C88 VA: 0x2246C88
	public bool IsStageUnlocked(int i) { }

	// RVA: 0x2246CF4 Offset: 0x2242CF4 VA: 0x2246CF4
	public bool IsStageUnlockedForHud(int i) { }

	// RVA: 0x2246D38 Offset: 0x2242D38 VA: 0x2246D38
	public bool IsAllStageMaxed() { }

	// RVA: 0x2246DB0 Offset: 0x2242DB0 VA: 0x2246DB0
	public bool IsStageMaxed(int idx) { }

	// RVA: 0x2246DE8 Offset: 0x2242DE8 VA: 0x2246DE8
	public bool IsBankFull() { }

	// RVA: 0x2246E10 Offset: 0x2242E10 VA: 0x2246E10
	public bool IsReachBonusBank() { }

	// RVA: 0x2246E78 Offset: 0x2242E78 VA: 0x2246E78
	public int get_BankStageCount() { }

	// RVA: 0x2246F34 Offset: 0x2242F34 VA: 0x2246F34
	public int SimulateBankStageCountWithKeys(int keys) { }

	// RVA: 0x2246FE4 Offset: 0x2242FE4 VA: 0x2246FE4
	public bool IsFreeClaimed(int i) { }

	// RVA: 0x2247094 Offset: 0x2243094 VA: 0x2247094
	public bool IsPassClaimed(int i) { }

	// RVA: 0x2247144 Offset: 0x2243144 VA: 0x2247144
	public bool CanClaimFree(int i) { }

	// RVA: 0x2247180 Offset: 0x2243180 VA: 0x2247180
	public bool CanClaimPass(int i) { }

	// RVA: 0x2247214 Offset: 0x2243214 VA: 0x2247214
	public bool CanClaimFreeForHud(int i) { }

	// RVA: 0x2247250 Offset: 0x2243250 VA: 0x2247250
	public bool CanClaimPassForHud(int i) { }

	// RVA: 0x22472E4 Offset: 0x22432E4 VA: 0x22472E4
	public bool HaveAnyClaimableReward() { }

	// RVA: 0x224734C Offset: 0x224334C VA: 0x224734C
	public bool HaveBonusBankUnClaimedReward() { }

	// RVA: 0x2247378 Offset: 0x2243378 VA: 0x2247378
	public void AddPendingKeys(int amount) { }

	// RVA: 0x224785C Offset: 0x224385C VA: 0x224785C
	public void CommitPendingKeys() { }

	// RVA: 0x22478EC Offset: 0x22438EC VA: 0x22478EC
	public void SetPendingKeysCommitDirty(bool dirty) { }

	// RVA: 0x2247974 Offset: 0x2243974 VA: 0x2247974
	public bool ClaimFree(int i) { }

	// RVA: 0x2248320 Offset: 0x2244320 VA: 0x2248320
	public bool ClaimPass(int i) { }

	// RVA: 0x2248514 Offset: 0x2244514 VA: 0x2248514
	public List<PassportFeature.Reward> AllUnclaimedRewards() { }

	// RVA: 0x224864C Offset: 0x224464C VA: 0x224864C
	private static void Merge(List<PassportFeature.Reward> into, List<PassportFeature.Reward> add) { }

	// RVA: 0x2248944 Offset: 0x2244944 VA: 0x2248944
	public List<PassportFeature.Reward> GiveAllLeftReward() { }

	[CompilerGenerated]
	// RVA: 0x2248F80 Offset: 0x2244F80 VA: 0x2248F80
	public long get_LastBankCoins() { }

	[CompilerGenerated]
	// RVA: 0x2248F88 Offset: 0x2244F88 VA: 0x2248F88
	private void set_LastBankCoins(long value) { }

	// RVA: 0x2248F90 Offset: 0x2244F90 VA: 0x2248F90
	public List<PassportFeature.Reward> FinishPassport() { }

	// RVA: 0x22490C0 Offset: 0x22450C0 VA: 0x22490C0
	public bool get_HasRedPoint() { }

	// RVA: 0x2249118 Offset: 0x2245118 VA: 0x2249118
	public void CloseRedPoint() { }

	// RVA: 0x2249190 Offset: 0x2245190 VA: 0x2249190
	public bool get_ForceCloseOpen() { }

	// RVA: 0x22491E8 Offset: 0x22451E8 VA: 0x22491E8
	public void SetForceCloseOpen(bool v) { }

	// RVA: 0x22492C0 Offset: 0x22452C0 VA: 0x22492C0
	private void CaptureFromGiftPack(int packId, GiftPackState s) { }

	// RVA: 0x22493C0 Offset: 0x22453C0 VA: 0x22493C0
	private GiftPackState PackState() { }

	// RVA: 0x224945C Offset: 0x224545C VA: 0x224945C
	public void RefreshPassportCycleSnapshot() { }

	// RVA: 0x22494AC Offset: 0x22454AC VA: 0x22494AC
	private void TryInitPassportCycleSnapshot() { }

	// RVA: 0x224970C Offset: 0x224570C VA: 0x224970C
	public void OnGiftPackTriggered(int packId) { }

	// RVA: 0x22495F0 Offset: 0x22455F0 VA: 0x22495F0
	private void OnPassportCycleSnapshotExpired() { }

	// RVA: 0x22497EC Offset: 0x22457EC VA: 0x22497EC
	private void ResetForNewCycle() { }

	// RVA: 0x2249B48 Offset: 0x2245B48 VA: 0x2249B48
	public void StartPassport() { }

	// RVA: 0x2249C54 Offset: 0x2245C54 VA: 0x2249C54
	public void SetPassportCommand(int command) { }

	// RVA: 0x2249D0C Offset: 0x2245D0C VA: 0x2249D0C
	private void ExecuteCommand() { }

	// RVA: 0x2249DCC Offset: 0x2245DCC VA: 0x2249DCC Slot: 15
	public override void OnBoot() { }

	// RVA: 0x224A298 Offset: 0x2246298 VA: 0x224A298 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x224A3E4 Offset: 0x22463E4 VA: 0x224A3E4 Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x224A3F0 Offset: 0x22463F0 VA: 0x224A3F0 Slot: 19
	public override void OnQuit() { }

	// RVA: 0x224A2E0 Offset: 0x22462E0 VA: 0x224A2E0
	public void WinOnce(LevelType type) { }

	// RVA: 0x224A1A0 Offset: 0x22461A0 VA: 0x224A1A0
	public bool AutoOpenOrClosePassport(bool checkOpen, bool checkFinished) { }

	// RVA: 0x224A0BC Offset: 0x22460BC VA: 0x224A0BC
	private void AddHallCmd(string c) { }

	// RVA: 0x224A3FC Offset: 0x22463FC VA: 0x224A3FC
	public IReadOnlyList<string> get_PendingHallCommands() { }

	// RVA: 0x224A404 Offset: 0x2246404 VA: 0x224A404
	public void OnStorePurchaseCompleted(int storeItemId) { }

	// RVA: 0x224A49C Offset: 0x224649C VA: 0x224A49C
	private void OnPassportPurchased() { }

	// RVA: 0x2249918 Offset: 0x2245918 VA: 0x2249918
	public void OnGivePurchaseReward(Action onClose, bool showGet = False) { }

	// RVA: 0x224A764 Offset: 0x2246764 VA: 0x224A764
	public void SetGivenPurchaseRewardDisplayed() { }

	// RVA: 0x224A7E0 Offset: 0x22467E0 VA: 0x224A7E0
	public void QueueResultCommand() { }

	// RVA: 0x224A828 Offset: 0x2246828 VA: 0x224A828 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(PassportFeature.<RunGuide>d__167))]
	// RVA: 0x224AB20 Offset: 0x2246B20 VA: 0x224AB20
	private IEnumerator RunGuide() { }

	[IteratorStateMachine(typeof(PassportFeature.<RunKeysFly>d__168))]
	// RVA: 0x224ABA0 Offset: 0x2246BA0 VA: 0x224ABA0
	private IEnumerator RunKeysFly() { }

	[IteratorStateMachine(typeof(PassportFeature.<RunHallUIOpen>d__169))]
	// RVA: 0x224AC34 Offset: 0x2246C34 VA: 0x224AC34
	private IEnumerator RunHallUIOpen(string cmd) { }

	// RVA: 0x224ACE4 Offset: 0x2246CE4 VA: 0x224ACE4 Slot: 22
	public void BindHall(UIPanel hud) { }

	// RVA: 0x224ACF0 Offset: 0x2246CF0 VA: 0x224ACF0
	public static bool OpenContinue(Action<int> revive, Action decline) { }

	// RVA: 0x2247500 Offset: 0x2243500 VA: 0x2247500
	public void TrackUnlockStage(int stage) { }

	// RVA: 0x2247B68 Offset: 0x2243B68 VA: 0x2247B68
	public void TrackReward(int passType, int changeType, int stage, List<PassportFeature.Reward> rewards) { }

	// RVA: 0x224ACF8 Offset: 0x2246CF8 VA: 0x224ACF8
	private static void .cctor() { }
}

