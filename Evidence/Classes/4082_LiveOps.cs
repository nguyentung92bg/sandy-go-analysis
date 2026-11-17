// Namespace: Dino.BusSand.App.Meta
public static class LiveOps // TypeDefIndex: 4082
{
	// Fields
	private static readonly List<ILiveFeature> s_features; // 0x0
	public static bool Enabled; // 0x8

	// Properties
	public static IReadOnlyList<ILiveFeature> Features { get; }

	// Methods

	// RVA: 0x2240E28 Offset: 0x223CE28 VA: 0x2240E28
	public static IReadOnlyList<ILiveFeature> get_Features() { }

	// RVA: 0x2240E80 Offset: 0x223CE80 VA: 0x2240E80
	public static void RegisterAll() { }

	// RVA: 0x2241168 Offset: 0x223D168 VA: 0x2241168
	public static void Register(ILiveFeature f) { }

	// RVA: -1 Offset: -1
	public static T Get<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27EF0A4 Offset: 0x27EB0A4 VA: 0x27EF0A4
	|-LiveOps.Get<object>
	*/

	// RVA: -1 Offset: -1
	public static T LoadBlob<T>(string key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27EF244 Offset: 0x27EB244 VA: 0x27EF244
	|-LiveOps.LoadBlob<object>
	*/

	// RVA: -1 Offset: -1
	public static void StoreBlob<T>(string key, T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27EF594 Offset: 0x27EB594 VA: 0x27EF594
	|-LiveOps.StoreBlob<object>
	|
	|-RVA: 0x27EF8E4 Offset: 0x27EB8E4 VA: 0x27EF8E4
	|-LiveOps.StoreBlob<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x2241548 Offset: 0x223D548 VA: 0x2241548
	public static void ReloadAll() { }

	// RVA: 0x22416F0 Offset: 0x223D6F0 VA: 0x22416F0
	private static void Each(Action<ILiveFeature> a) { }

	// RVA: 0x2241954 Offset: 0x223D954 VA: 0x2241954
	public static void Boot() { }

	// RVA: 0x2241A50 Offset: 0x223DA50 VA: 0x2241A50
	public static void LevelStart(int level) { }

	// RVA: 0x2241B2C Offset: 0x223DB2C VA: 0x2241B2C
	public static void LevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x2241C0C Offset: 0x223DC0C VA: 0x2241C0C
	public static void FinalFail() { }

	// RVA: 0x2241D08 Offset: 0x223DD08 VA: 0x2241D08
	public static void Quit() { }

	// RVA: 0x2241E04 Offset: 0x223DE04 VA: 0x2241E04
	public static void EconomyChanged() { }

	// RVA: 0x2241F00 Offset: 0x223DF00 VA: 0x2241F00
	public static void BindHall(UIPanel hud) { }

	// RVA: 0x2241FE8 Offset: 0x223DFE8 VA: 0x2241FE8
	public static void BindGameHud(UIPanel hud) { }

	// RVA: 0x22420D0 Offset: 0x223E0D0 VA: 0x22420D0
	public static List<IStakeActivity> AtStake(int[] order) { }

	// RVA: 0x22425F8 Offset: 0x223E5F8 VA: 0x22425F8
	public static HallQueue BuildHallQueue(bool fromGame) { }

	// RVA: 0x2242724 Offset: 0x223E724 VA: 0x2242724
	private static void .cctor() { }
}

