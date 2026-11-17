// Namespace: Dino.BusSand.App.Meta
public static class Profile // TypeDefIndex: 4164
{
	// Fields
	public const int BaseMaxHearts = 5;
	public static Func<int> ExtraMaxHearts; // 0x0
	public const int HeartSeconds = 1800;
	public static string FileName; // 0x8
	[CompilerGenerated]
	private static PlayerData <D>k__BackingField; // 0x10
	[CompilerGenerated]
	private static Action<int> ItemChanged; // 0x18
	[CompilerGenerated]
	private static Action LevelChanged; // 0x20
	private static bool s_dirty; // 0x28
	private static float s_saveAt; // 0x2C

	// Properties
	public static int MaxHearts { get; }
	public static PlayerData D { get; set; }
	public static string SavePath { get; }
	private static string SealedKey { get; }
	public static int DaysAway { get; }
	public static long Coins { get; }
	public static bool InfiniteHearts { get; }
	public static int Hearts { get; }
	public static bool HasHeartToPlay { get; }
	public static int Level { get; }
	public static string PlayerId { get; }

	// Methods

	// RVA: 0x226F4D0 Offset: 0x226B4D0 VA: 0x226F4D0
	public static int get_MaxHearts() { }

	[CompilerGenerated]
	// RVA: 0x226F568 Offset: 0x226B568 VA: 0x226F568
	public static PlayerData get_D() { }

	[CompilerGenerated]
	// RVA: 0x226F5C0 Offset: 0x226B5C0 VA: 0x226F5C0
	private static void set_D(PlayerData value) { }

	[CompilerGenerated]
	// RVA: 0x226F620 Offset: 0x226B620 VA: 0x226F620
	public static void add_ItemChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x226F714 Offset: 0x226B714 VA: 0x226F714
	public static void remove_ItemChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x226F808 Offset: 0x226B808 VA: 0x226F808
	public static void add_LevelChanged(Action value) { }

	[CompilerGenerated]
	// RVA: 0x226F8E4 Offset: 0x226B8E4 VA: 0x226F8E4
	public static void remove_LevelChanged(Action value) { }

	// RVA: 0x226F9C0 Offset: 0x226B9C0 VA: 0x226F9C0
	public static string get_SavePath() { }

	// RVA: 0x226FA7C Offset: 0x226BA7C VA: 0x226FA7C
	public static void Load() { }

	// RVA: 0x2270D74 Offset: 0x226CD74 VA: 0x2270D74
	private static void NewPlayer() { }

	// RVA: 0x227116C Offset: 0x226D16C VA: 0x227116C
	public static PlayerData Peek(string path) { }

	// RVA: 0x22711C0 Offset: 0x226D1C0 VA: 0x22711C0
	private static string get_SealedKey() { }

	// RVA: 0x2270A5C Offset: 0x226CA5C VA: 0x2270A5C
	private static PlayerData TryRead(string path) { }

	// RVA: 0x2271234 Offset: 0x226D234 VA: 0x2271234
	public static void DeleteSave() { }

	// RVA: 0x226C548 Offset: 0x2268548 VA: 0x226C548
	public static void Save() { }

	// RVA: 0x225CC30 Offset: 0x2258C30 VA: 0x225CC30
	public static void MarkDirty() { }

	// RVA: 0x22714C8 Offset: 0x226D4C8 VA: 0x22714C8
	public static void Tick() { }

	// RVA: 0x2271090 Offset: 0x226D090 VA: 0x2271090
	public static long Now() { }

	// RVA: 0x2271100 Offset: 0x226D100 VA: 0x2271100
	public static long Day() { }

	// RVA: 0x2271AC0 Offset: 0x226DAC0 VA: 0x2271AC0
	public static void NewSession() { }

	// RVA: 0x2270E48 Offset: 0x226CE48 VA: 0x2270E48
	private static void TouchActiveDay() { }

	// RVA: 0x2271B0C Offset: 0x226DB0C VA: 0x2271B0C
	private static IntPair PlayedDay(long day) { }

	// RVA: 0x2271F98 Offset: 0x226DF98 VA: 0x2271F98
	public static int get_DaysAway() { }

	// RVA: 0x227209C Offset: 0x226E09C VA: 0x227209C
	public static void CountRewardedToday() { }

	// RVA: 0x227215C Offset: 0x226E15C VA: 0x227215C
	private static IntPair Find(int id) { }

	// RVA: 0x2272308 Offset: 0x226E308 VA: 0x2272308
	private static void SetItem(int id, long n) { }

	// RVA: 0x225B150 Offset: 0x2257150 VA: 0x225B150
	public static long Count(int id) { }

	// RVA: 0x2272578 Offset: 0x226E578 VA: 0x2272578
	public static void Add(int id, long n, string reason = "") { }

	// RVA: 0x2272968 Offset: 0x226E968 VA: 0x2272968
	public static bool TrySpend(int id, long n, string reason = "") { }

	// RVA: 0x2272A04 Offset: 0x226EA04 VA: 0x2272A04
	public static long get_Coins() { }

	// RVA: 0x2272A98 Offset: 0x226EA98 VA: 0x2272A98
	public static bool get_InfiniteHearts() { }

	// RVA: 0x22724E0 Offset: 0x226E4E0 VA: 0x22724E0
	public static int get_Hearts() { }

	// RVA: 0x227157C Offset: 0x226D57C VA: 0x227157C
	private static void RegenHearts() { }

	// RVA: 0x2272B38 Offset: 0x226EB38 VA: 0x2272B38
	public static int SecondsToNextHeart() { }

	// RVA: 0x2272CC8 Offset: 0x226ECC8 VA: 0x2272CC8
	public static bool get_HasHeartToPlay() { }

	// RVA: 0x2272D98 Offset: 0x226ED98 VA: 0x2272D98
	public static void ConsumeHeart() { }

	// RVA: 0x2273010 Offset: 0x226F010 VA: 0x2273010
	public static void AddInfiniteHearts(long seconds, string reason = "") { }

	// RVA: 0x22731BC Offset: 0x226F1BC VA: 0x22731BC
	public static void GrantRewardList(object list, string reason) { }

	// RVA: 0x227342C Offset: 0x226F42C VA: 0x227342C
	public static void GrantReward(int rewardId, string reason) { }

	// RVA: 0x227275C Offset: 0x226E75C VA: 0x227275C
	public static void AddHearts(int n) { }

	// RVA: 0x2273514 Offset: 0x226F514 VA: 0x2273514
	public static int get_Level() { }

	// RVA: 0x22735A8 Offset: 0x226F5A8 VA: 0x22735A8
	public static void SetLevel(int n) { }

	// RVA: 0x22736A4 Offset: 0x226F6A4 VA: 0x22736A4
	public static bool Flag(string name) { }

	// RVA: 0x227375C Offset: 0x226F75C VA: 0x227375C
	public static void SetFlag(string name, bool on = True) { }

	// RVA: 0x2273994 Offset: 0x226F994 VA: 0x2273994
	public static int Counter(string name) { }

	// RVA: 0x2273B58 Offset: 0x226FB58 VA: 0x2273B58
	public static void SetCounter(string name, int v) { }

	// RVA: 0x2273E60 Offset: 0x226FE60 VA: 0x2273E60
	public static int AttemptsToday(int level) { }

	// RVA: 0x2274008 Offset: 0x2270008 VA: 0x2274008
	public static string get_PlayerId() { }

	// RVA: 0x22741FC Offset: 0x22701FC VA: 0x22741FC
	public static int LevelTries(int level) { }

	// RVA: 0x22743A4 Offset: 0x22703A4 VA: 0x22743A4
	public static int AddLevelTry(int level) { }

	// RVA: 0x227469C Offset: 0x227069C VA: 0x227469C
	public static void AddAttempt(int level) { }

	// RVA: 0x2274984 Offset: 0x2270984 VA: 0x2274984
	private static void .cctor() { }
}

