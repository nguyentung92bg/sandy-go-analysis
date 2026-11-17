// Namespace: Dino.BusSand
public static class RenderQuality // TypeDefIndex: 8396
{
	// Fields
	[CompilerGenerated]
	private static QualityTier <Tier>k__BackingField; // 0x0
	public const int GameRendererIndex = 1;
	[CompilerGenerated]
	private static Action Changed; // 0x8
	private static bool _initialised; // 0x10
	private static bool _hooked; // 0x11
	private static readonly List<ScriptableRendererFeature> _pausedForOverlay; // 0x18
	public const float PostContrast = 8;
	public const float PostSaturation = 6;

	// Properties
	public static QualityTier Tier { get; set; }
	public static bool RealShadows { get; }
	public static bool PostProcessing { get; }
	public static float BlobShadowStrength { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2389F08 Offset: 0x2385F08 VA: 0x2389F08
	public static QualityTier get_Tier() { }

	[CompilerGenerated]
	// RVA: 0x2389F60 Offset: 0x2385F60 VA: 0x2389F60
	private static void set_Tier(QualityTier value) { }

	[CompilerGenerated]
	// RVA: 0x2389FBC Offset: 0x2385FBC VA: 0x2389FBC
	public static void add_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x238A098 Offset: 0x2386098 VA: 0x238A098
	public static void remove_Changed(Action value) { }

	// RVA: 0x238A174 Offset: 0x2386174 VA: 0x238A174
	public static bool get_RealShadows() { }

	// RVA: 0x238A204 Offset: 0x2386204 VA: 0x238A204
	public static bool get_PostProcessing() { }

	// RVA: 0x238A294 Offset: 0x2386294 VA: 0x238A294
	public static float get_BlobShadowStrength() { }

	// RVA: 0x238A2F8 Offset: 0x23862F8 VA: 0x238A2F8
	public static void Initialize() { }

	// RVA: 0x238A48C Offset: 0x238648C VA: 0x238A48C
	private static void HookPipeline() { }

	// RVA: 0x238A650 Offset: 0x2386650 VA: 0x238A650
	private static void OnBeginCamera(ScriptableRenderContext ctx, Camera cam) { }

	// RVA: 0x238A9DC Offset: 0x23869DC VA: 0x238A9DC
	private static void OnEndCamera(ScriptableRenderContext ctx, Camera cam) { }

	// RVA: 0x238A384 Offset: 0x2386384 VA: 0x238A384
	public static QualityTier Detect() { }

	// RVA: 0x238AC04 Offset: 0x2386C04 VA: 0x238AC04
	public static void ForceTier(QualityTier tier) { }

	// RVA: 0x238AC68 Offset: 0x2386C68 VA: 0x238AC68
	public static void SetTier(QualityTier tier) { }

	// RVA: 0x238A3E4 Offset: 0x23863E4 VA: 0x238A3E4
	public static void Apply(QualityTier tier) { }

	// RVA: 0x238ACE8 Offset: 0x2386CE8 VA: 0x238ACE8
	public static void SetupGameCamera(Camera cam) { }

	// RVA: 0x238AF80 Offset: 0x2386F80 VA: 0x238AF80
	public static void SetupPackCamera(Camera cam, int rendererIndex) { }

	// RVA: 0x238B0D8 Offset: 0x23870D8 VA: 0x238B0D8
	public static Color ShaderColor(Color c) { }

	// RVA: 0x238B154 Offset: 0x2387154 VA: 0x238B154
	public static void SetupUiCamera(Camera cam) { }

	// RVA: 0x238B1A0 Offset: 0x23871A0 VA: 0x238B1A0
	public static void SetupLight(Light light) { }

	// RVA: 0x238B278 Offset: 0x2387278 VA: 0x238B278
	public static void Shadows(Renderer r, bool cast, bool receive = True) { }

	// RVA: 0x238B32C Offset: 0x238732C VA: 0x238B32C
	public static Volume CreateVolume(Transform parent) { }

	// RVA: 0x238B730 Offset: 0x2387730 VA: 0x238B730
	private static void .cctor() { }
}

