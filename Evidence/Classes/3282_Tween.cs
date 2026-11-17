// Namespace: Dino.BusSand.App
public sealed class Tween // TypeDefIndex: 3282
{
	// Fields
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsComplete>k__BackingField; // 0x11
	internal object Owner; // 0x18
	internal float Delay; // 0x20
	internal float Duration; // 0x24
	internal float Elapsed; // 0x28
	internal Ease EaseType; // 0x2C
	internal bool UnscaledTime; // 0x30
	internal Action<float> OnUpdate; // 0x38
	internal Action OnComplete; // 0x40
	internal int Loops; // 0x48
	internal bool PingPong; // 0x4C
	internal int LoopIndex; // 0x50
	public static float UnscaledSpeed; // 0x0
	public const float MaxUnscaledStep = 0.05;
	public static float QaClock; // 0x4
	public static float QaHold; // 0x8
	private static int _uiFrame; // 0xC
	private static float _uiStep; // 0x10

	// Properties
	public bool IsActive { get; set; }
	public bool IsComplete { get; set; }
	public static float UiDelta { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2160D30 Offset: 0x215CD30 VA: 0x2160D30
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x2160D38 Offset: 0x215CD38 VA: 0x2160D38
	internal void set_IsActive(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2160D40 Offset: 0x215CD40 VA: 0x2160D40
	public bool get_IsComplete() { }

	[CompilerGenerated]
	// RVA: 0x2160D48 Offset: 0x215CD48 VA: 0x2160D48
	internal void set_IsComplete(bool value) { }

	// RVA: 0x2160D50 Offset: 0x215CD50 VA: 0x2160D50
	public static float get_UiDelta() { }

	// RVA: 0x2160EA8 Offset: 0x215CEA8 VA: 0x2160EA8
	public Tween SetDelay(float delay) { }

	// RVA: 0x2160EB0 Offset: 0x215CEB0 VA: 0x2160EB0
	public Tween SetEase(Ease e) { }

	// RVA: 0x2160EB8 Offset: 0x215CEB8 VA: 0x2160EB8
	public Tween SetUnscaled(bool unscaled = True) { }

	// RVA: 0x2160EC0 Offset: 0x215CEC0 VA: 0x2160EC0
	public Tween SetOwner(object owner) { }

	// RVA: 0x2160EDC Offset: 0x215CEDC VA: 0x2160EDC
	public Tween OnDone(Action cb) { }

	// RVA: 0x2160EF8 Offset: 0x215CEF8 VA: 0x2160EF8
	public Tween SetLoops(int loops, bool pingPong = False) { }

	// RVA: 0x2160F04 Offset: 0x215CF04 VA: 0x2160F04
	public void Kill(bool complete = False) { }

	// RVA: 0x2160F64 Offset: 0x215CF64 VA: 0x2160F64
	public static Tween Value(float duration, Action<float> onUpdate) { }

	// RVA: 0x2161158 Offset: 0x215D158 VA: 0x2161158
	public static Tween Float(float from, float to, float duration, Action<float> setter) { }

	// RVA: 0x2161264 Offset: 0x215D264 VA: 0x2161264
	public static Tween Delayed(float delay, Action callback) { }

	// RVA: 0x21613DC Offset: 0x215D3DC VA: 0x21613DC
	public static Tween Move(Transform tr, Vector3 to, float duration, bool local = False) { }

	// RVA: 0x2161548 Offset: 0x215D548 VA: 0x2161548
	public static Tween Scale(Transform tr, Vector3 to, float duration) { }

	// RVA: 0x2161694 Offset: 0x215D694 VA: 0x2161694
	public static Tween Rotate(Transform tr, Quaternion to, float duration, bool local = False) { }

	// RVA: 0x2161810 Offset: 0x215D810 VA: 0x2161810
	public static Tween Color(Action<Color> setter, Color from, Color to, float duration) { }

	// RVA: 0x216195C Offset: 0x215D95C VA: 0x216195C
	public static Tween Fade(CanvasGroup g, float to, float duration) { }

	// RVA: 0x2161A90 Offset: 0x215DA90 VA: 0x2161A90
	public static void KillAll(object owner) { }

	// RVA: 0x2161CB0 Offset: 0x215DCB0 VA: 0x2161CB0
	public static bool Running(object owner) { }

	// RVA: 0x2161030 Offset: 0x215D030 VA: 0x2161030
	public void .ctor() { }

	// RVA: 0x2161F6C Offset: 0x215DF6C VA: 0x2161F6C
	private static void .cctor() { }
}

