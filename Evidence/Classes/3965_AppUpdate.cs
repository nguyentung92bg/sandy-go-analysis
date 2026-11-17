// Namespace: Dino.BusSand.App.Meta
public static class AppUpdate // TypeDefIndex: 3965
{
	// Fields
	public static Action<Action<AppUpdate.Result>> Checker; // 0x0
	public static Action StoreOpener; // 0x8
	public static Action SoftDeclined; // 0x10
	public static Nullable<AppUpdate.Result> Override; // 0x18
	[CompilerGenerated]
	private static AppUpdate.Result <Last>k__BackingField; // 0x20
	[CompilerGenerated]
	private static Action<AppUpdate.Result> LateAnswer; // 0x28

	// Properties
	public static AppUpdate.Result Last { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22019E0 Offset: 0x21FD9E0 VA: 0x22019E0
	public static AppUpdate.Result get_Last() { }

	[CompilerGenerated]
	// RVA: 0x2201A28 Offset: 0x21FDA28 VA: 0x2201A28
	private static void set_Last(AppUpdate.Result value) { }

	[CompilerGenerated]
	// RVA: 0x2201A74 Offset: 0x21FDA74 VA: 0x2201A74
	public static void add_LateAnswer(Action<AppUpdate.Result> value) { }

	[CompilerGenerated]
	// RVA: 0x2201B44 Offset: 0x21FDB44 VA: 0x2201B44
	public static void remove_LateAnswer(Action<AppUpdate.Result> value) { }

	// RVA: 0x2201C14 Offset: 0x21FDC14 VA: 0x2201C14
	public static IEnumerator Check(float timeout, Action<AppUpdate.Result> done) { }

	[IteratorStateMachine(typeof(AppUpdate.<Check>d__13))]
	// RVA: 0x2201C1C Offset: 0x21FDC1C VA: 0x2201C1C
	public static IEnumerator Check(float timeout, Action<AppUpdate.Result> done, Func<bool> stop) { }

	// RVA: 0x2201CDC Offset: 0x21FDCDC VA: 0x2201CDC
	private static void Finish(AppUpdate.Result r, string source, Action<AppUpdate.Result> done) { }

	// RVA: 0x2201F4C Offset: 0x21FDF4C VA: 0x2201F4C
	public static void OpenStore() { }

	// RVA: 0x22020A0 Offset: 0x21FE0A0 VA: 0x22020A0
	public static void CountDeclined() { }
}

