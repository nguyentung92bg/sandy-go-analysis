// Namespace: Dino.BusSand.App.Meta
public class ActivityContinueFeature : ILiveFeature // TypeDefIndex: 3996
{
	// Fields
	public static bool SimpleContinueOn; // 0x0
	public static readonly int[] InfluenceActivities; // 0x8
	public const int SimpleMaxShowCount = 4;
	public static readonly int[] SettleContinueOrder; // 0x10
	public static readonly int[] SettleQuitOrder; // 0x18
	public const int SettleMaxShowCount = 2;
	public static readonly Dictionary<int, Func<Action<int>, Action, bool>> CustomContinue; // 0x20

	// Properties
	public string Key { get; }
	public int Order { get; }

	// Methods

	// RVA: 0x221DEA8 Offset: 0x2219EA8 VA: 0x221DEA8 Slot: 4
	public string get_Key() { }

	// RVA: 0x221DEE8 Offset: 0x2219EE8 VA: 0x221DEE8 Slot: 5
	public int get_Order() { }

	// RVA: 0x221DEF0 Offset: 0x2219EF0 VA: 0x221DEF0
	public void .ctor() { }

	// RVA: 0x221DF4C Offset: 0x2219F4C VA: 0x221DF4C
	public static void Install() { }

	// RVA: 0x221E134 Offset: 0x221A134 VA: 0x221E134 Slot: 6
	public void OnBoot() { }

	// RVA: 0x221E180 Offset: 0x221A180 VA: 0x221E180 Slot: 7
	public void OnLevelStart(int level) { }

	// RVA: 0x221E184 Offset: 0x221A184 VA: 0x221E184 Slot: 8
	public void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x221E188 Offset: 0x221A188 VA: 0x221E188 Slot: 9
	public void OnFinalFail() { }

	// RVA: 0x221E18C Offset: 0x221A18C VA: 0x221E18C Slot: 10
	public void OnQuit() { }

	// RVA: 0x221E190 Offset: 0x221A190 VA: 0x221E190 Slot: 11
	public void OnEconomyChanged() { }

	// RVA: 0x221E194 Offset: 0x221A194 VA: 0x221E194 Slot: 12
	public void CollectHallCommands(HallQueue q, bool fromGame) { }

	// RVA: 0x221E198 Offset: 0x221A198 VA: 0x221E198
	public static List<IStakeActivity> ContinueList() { }

	// RVA: 0x221E370 Offset: 0x221A370 VA: 0x221E370
	public static List<IStakeActivity> QuitList() { }

	// RVA: 0x221E450 Offset: 0x221A450 VA: 0x221E450
	public static List<IStakeActivity> Influenced(List<IStakeActivity> list) { }

	// RVA: 0x221E2F0 Offset: 0x221A2F0 VA: 0x221E2F0
	private static List<IStakeActivity> Truncate(List<IStakeActivity> l, int max) { }

	// RVA: 0x221E760 Offset: 0x221A760 VA: 0x221E760
	private static bool OnGiveUp(Action<int> revive, Action decline) { }

	// RVA: 0x221EE34 Offset: 0x221AE34 VA: 0x221EE34
	private static bool OnQuitTap(Action quit, Action stay) { }

	// RVA: 0x221EFC8 Offset: 0x221AFC8 VA: 0x221EFC8
	private static void .cctor() { }
}

