// Namespace: Dino.BusSand.App.Meta
public class YachtRacingFeature : LiveFeature<YachtRacingData>, IStakeActivity, IStakeActivityUi, IHallBinder // TypeDefIndex: 4131
{
	// Fields
	public const int PriorityGuide = 12;
	public const int PriorityProcessFly = 45;
	public const int PriorityAutoOpen = 50;
	public static Nullable<int> Seed; // 0x0
	private YachtRacingCore _core; // 0x18
	private bool _spendHooked; // 0x20
	private static Dictionary<string, List<string>> s_names; // 0x8

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public int ActivityId { get; }
	public string ContinuePanel { get; }
	public string QuitItemPrefab { get; }
	public static YachtRacingFeature I { get; }
	public YachtRacingCore Core { get; }
	public string StakeProgressText { get; }

	// Methods

	// RVA: 0x225AA04 Offset: 0x2256A04 VA: 0x225AA04 Slot: 13
	public override string get_Key() { }

	// RVA: 0x225AA44 Offset: 0x2256A44 VA: 0x225AA44 Slot: 14
	public override int get_Order() { }

	// RVA: 0x225AA4C Offset: 0x2256A4C VA: 0x225AA4C Slot: 22
	public int get_ActivityId() { }

	// RVA: 0x225AA54 Offset: 0x2256A54 VA: 0x225AA54 Slot: 24
	public string get_ContinuePanel() { }

	// RVA: 0x225AA94 Offset: 0x2256A94 VA: 0x225AA94 Slot: 25
	public string get_QuitItemPrefab() { }

	// RVA: 0x225AAD4 Offset: 0x2256AD4 VA: 0x225AAD4
	public static YachtRacingFeature get_I() { }

	// RVA: 0x225AB38 Offset: 0x2256B38 VA: 0x225AB38
	public YachtRacingCore get_Core() { }

	// RVA: 0x225AD3C Offset: 0x2256D3C VA: 0x225AD3C
	public static float PlayerAssets() { }

	// RVA: 0x225B228 Offset: 0x2257228 VA: 0x225B228 Slot: 15
	public override void OnBoot() { }

	// RVA: 0x225B250 Offset: 0x2257250 VA: 0x225B250
	private void HookSpend() { }

	// RVA: 0x225B370 Offset: 0x2257370 VA: 0x225B370 Slot: 16
	public override void OnLevelStart(int level) { }

	// RVA: 0x225B374 Offset: 0x2257374 VA: 0x225B374 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x225B3A4 Offset: 0x22573A4 VA: 0x225B3A4 Slot: 18
	public override void OnFinalFail() { }

	// RVA: 0x225B59C Offset: 0x225759C VA: 0x225B59C Slot: 19
	public override void OnQuit() { }

	// RVA: 0x225B3A8 Offset: 0x22573A8 VA: 0x225B3A8
	private void OnLost() { }

	// RVA: 0x225B5A8 Offset: 0x22575A8 VA: 0x225B5A8 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(YachtRacingFeature.<RunProcessFly>d__29))]
	// RVA: 0x225B788 Offset: 0x2257788 VA: 0x225B788
	private IEnumerator RunProcessFly() { }

	[IteratorStateMachine(typeof(YachtRacingFeature.<RunAutoOpen>d__30))]
	// RVA: 0x225B81C Offset: 0x225781C VA: 0x225B81C
	private IEnumerator RunAutoOpen() { }

	[IteratorStateMachine(typeof(YachtRacingFeature.<RunGuide>d__31))]
	// RVA: 0x225B8B0 Offset: 0x22578B0 VA: 0x225B8B0
	public IEnumerator RunGuide() { }

	// RVA: 0x225B944 Offset: 0x2257944 VA: 0x225B944
	public string PlayerName() { }

	// RVA: 0x225BA60 Offset: 0x2257A60 VA: 0x225BA60
	public string RandomName() { }

	// RVA: 0x225C144 Offset: 0x2258144 VA: 0x225C144
	public List<int> HeadIds() { }

	// RVA: 0x225C508 Offset: 0x2258508 VA: 0x225C508
	public List<object> StartRace() { }

	// RVA: 0x225C5B8 Offset: 0x22585B8 VA: 0x225C5B8 Slot: 23
	public bool AtStake() { }

	// RVA: 0x225C5F8 Offset: 0x22585F8 VA: 0x225C5F8 Slot: 29
	public void BindHall(UIPanel hud) { }

	// RVA: 0x225C60C Offset: 0x225860C VA: 0x225C60C Slot: 26
	public void BindContinuePanel(UIPanel panel) { }

	// RVA: 0x225C618 Offset: 0x2258618 VA: 0x225C618 Slot: 27
	public void BindQuitItem(GameObject row) { }

	// RVA: 0x225C6A0 Offset: 0x22586A0 VA: 0x225C6A0 Slot: 28
	public string get_StakeProgressText() { }

	// RVA: 0x225C74C Offset: 0x225874C VA: 0x225C74C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x225C794 Offset: 0x2258794 VA: 0x225C794
	private void <HookSpend>b__22_0(int id, long n) { }

	[CompilerGenerated]
	// RVA: 0x225C82C Offset: 0x225882C VA: 0x225C82C
	private void <HookSpend>b__22_1(int price) { }
}

