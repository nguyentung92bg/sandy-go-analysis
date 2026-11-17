// Namespace: Dino.BusSand.App.Meta
public class BattleRoyaleFeature : LiveFeature<BattleRoyaleData>, IStakeActivity, IStakeActivityUi, IHallBinder // TypeDefIndex: 4013
{
	// Fields
	public const int PrioritySpecialWin = 3;
	public const int PriorityGuide = 12;
	public const int PriorityStartPopup = 65;
	private BattleRoyaleCore _core; // 0x18
	private bool _lastResultNoStep; // 0x20
	private bool _spendHooked; // 0x21
	public static Nullable<int> Seed; // 0x0
	public bool PlayedThisSession; // 0x22

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public int ActivityId { get; }
	public string ContinuePanel { get; }
	public string QuitItemPrefab { get; }
	public static BattleRoyaleFeature I { get; }
	public BattleRoyaleCore Core { get; }
	public string StakeProgressText { get; }

	// Methods

	// RVA: 0x2226184 Offset: 0x2222184 VA: 0x2226184 Slot: 13
	public override string get_Key() { }

	// RVA: 0x22261C4 Offset: 0x22221C4 VA: 0x22261C4 Slot: 14
	public override int get_Order() { }

	// RVA: 0x22261CC Offset: 0x22221CC VA: 0x22261CC Slot: 22
	public int get_ActivityId() { }

	// RVA: 0x22261D4 Offset: 0x22221D4 VA: 0x22261D4 Slot: 24
	public string get_ContinuePanel() { }

	// RVA: 0x2226214 Offset: 0x2222214 VA: 0x2226214 Slot: 25
	public string get_QuitItemPrefab() { }

	// RVA: 0x2226254 Offset: 0x2222254 VA: 0x2226254
	public static BattleRoyaleFeature get_I() { }

	// RVA: 0x22262B8 Offset: 0x22222B8 VA: 0x22262B8
	public BattleRoyaleCore get_Core() { }

	// RVA: 0x2226464 Offset: 0x2222464 VA: 0x2226464 Slot: 15
	public override void OnBoot() { }

	// RVA: 0x2226488 Offset: 0x2222488 VA: 0x2226488
	private void HookSpend() { }

	// RVA: 0x22265A8 Offset: 0x22225A8 VA: 0x22265A8
	public void RecordWorth(long worth) { }

	// RVA: 0x2226640 Offset: 0x2222640 VA: 0x2226640 Slot: 16
	public override void OnLevelStart(int level) { }

	// RVA: 0x222666C Offset: 0x222266C VA: 0x222666C Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x22266A0 Offset: 0x22226A0 VA: 0x22266A0 Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x22268BC Offset: 0x22228BC VA: 0x22268BC Slot: 19
	public override void OnQuit() { }

	// RVA: 0x22266AC Offset: 0x22226AC VA: 0x22266AC
	private void TrySpecialLose() { }

	// RVA: 0x22268EC Offset: 0x22228EC VA: 0x22268EC
	public void ApplySpecialLose() { }

	// RVA: 0x2226910 Offset: 0x2222910 VA: 0x2226910 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(BattleRoyaleFeature.<RunStartPopup>d__32))]
	// RVA: 0x2226B90 Offset: 0x2222B90 VA: 0x2226B90
	private IEnumerator RunStartPopup() { }

	[IteratorStateMachine(typeof(BattleRoyaleFeature.<RunGuide>d__33))]
	// RVA: 0x2226C24 Offset: 0x2222C24 VA: 0x2226C24
	public IEnumerator RunGuide() { }

	// RVA: 0x2226CB8 Offset: 0x2222CB8 VA: 0x2226CB8 Slot: 23
	public bool AtStake() { }

	// RVA: 0x2226CF4 Offset: 0x2222CF4 VA: 0x2226CF4 Slot: 26
	public void BindContinuePanel(UIPanel panel) { }

	// RVA: 0x2226D00 Offset: 0x2222D00 VA: 0x2226D00 Slot: 27
	public void BindQuitItem(GameObject row) { }

	// RVA: 0x2226D88 Offset: 0x2222D88 VA: 0x2226D88 Slot: 28
	public string get_StakeProgressText() { }

	// RVA: 0x2226D90 Offset: 0x2222D90 VA: 0x2226D90 Slot: 29
	public void BindHall(UIPanel hud) { }

	// RVA: 0x2226DA4 Offset: 0x2222DA4 VA: 0x2226DA4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2226DEC Offset: 0x2222DEC VA: 0x2226DEC
	private void <HookSpend>b__22_0(int id, long n) { }

	[CompilerGenerated]
	// RVA: 0x2226F90 Offset: 0x2222F90 VA: 0x2226F90
	private void <HookSpend>b__22_1(int price) { }
}

