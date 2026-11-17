// Namespace: Dino.BusSand.App.Meta
public class SystemOpenFeature : ILiveFeature // TypeDefIndex: 4112
{
	// Fields
	public static int HallPriority; // 0x0
	public static readonly int[] HandledIds; // 0x8
	public static readonly Dictionary<int, Func<bool, bool>> GuideConditions; // 0x10
	public static readonly Dictionary<int, Action<Action>> IntroHandlers; // 0x18

	// Properties
	public string Key { get; }
	public int Order { get; }

	// Methods

	// RVA: 0x2252630 Offset: 0x224E630 VA: 0x2252630 Slot: 4
	public string get_Key() { }

	// RVA: 0x2252670 Offset: 0x224E670 VA: 0x2252670 Slot: 5
	public int get_Order() { }

	// RVA: 0x2252678 Offset: 0x224E678 VA: 0x2252678 Slot: 6
	public void OnBoot() { }

	// RVA: 0x225267C Offset: 0x224E67C VA: 0x225267C Slot: 7
	public void OnLevelStart(int level) { }

	// RVA: 0x2252680 Offset: 0x224E680 VA: 0x2252680 Slot: 8
	public void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x2252684 Offset: 0x224E684 VA: 0x2252684 Slot: 9
	public void OnFinalFail() { }

	// RVA: 0x2252688 Offset: 0x224E688 VA: 0x2252688 Slot: 10
	public void OnQuit() { }

	// RVA: 0x225268C Offset: 0x224E68C VA: 0x225268C Slot: 11
	public void OnEconomyChanged() { }

	// RVA: 0x2252690 Offset: 0x224E690 VA: 0x2252690
	public static string HallNode(int id) { }

	// RVA: 0x22527B0 Offset: 0x224E7B0 VA: 0x22527B0
	private static Dictionary<string, object> Row(int id) { }

	// RVA: 0x2252820 Offset: 0x224E820 VA: 0x2252820
	public static bool NeedShowGuide(int id) { }

	// RVA: 0x22528CC Offset: 0x224E8CC VA: 0x22528CC
	public static List<int> PendingGuides(bool fromGame) { }

	// RVA: 0x2252D58 Offset: 0x224ED58 VA: 0x2252D58
	public static bool IsActiveInConditions(int id, bool fromGame) { }

	// RVA: 0x2252FFC Offset: 0x224EFFC VA: 0x2252FFC Slot: 12
	public void CollectHallCommands(HallQueue q, bool fromGame) { }

	// RVA: 0x2253288 Offset: 0x224F288 VA: 0x2253288
	private static IEnumerator ExternalIntro(int id) { }

	// RVA: 0x2253364 Offset: 0x224F364 VA: 0x2253364
	private static bool HasExternalIntro(int id) { }

	[IteratorStateMachine(typeof(SystemOpenFeature.<RunGuide>d__22))]
	// RVA: 0x2253478 Offset: 0x224F478 VA: 0x2253478
	private static IEnumerator RunGuide(int id) { }

	// RVA: 0x2253500 Offset: 0x224F500 VA: 0x2253500
	private static void Intro(int id, Action done) { }

	// RVA: 0x2253824 Offset: 0x224F824 VA: 0x2253824
	public void .ctor() { }

	// RVA: 0x225382C Offset: 0x224F82C VA: 0x225382C
	private static void .cctor() { }
}

