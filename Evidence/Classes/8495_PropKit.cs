// Namespace: Dino.BusSand.View
public static class PropKit // TypeDefIndex: 8495
{
	// Fields
	public static readonly Color Orange; // 0x0
	public static readonly Color White; // 0x10
	public static readonly Color Dark; // 0x20
	public static readonly Color Red; // 0x30
	public static readonly Color Yellow; // 0x40
	public static readonly Color Steel; // 0x50
	public static readonly Color Green; // 0x60
	public static readonly Color Leaf; // 0x70
	public static readonly Color Clay; // 0x80
	public static readonly Color Blue; // 0x90
	private static Material _mat; // 0xA0
	private static readonly Dictionary<string, Mesh> Cache; // 0xA8
	private static readonly MaterialPropertyBlock Mpb; // 0xB0
	private static readonly int TintId; // 0xB8
	private static readonly int GlowId; // 0xBC

	// Properties
	public static Material Material { get; }
	public static Mesh Cone { get; }
	public static Mesh FencePanel { get; }
	public static Mesh Planter { get; }
	public static Mesh FuelPump { get; }
	public static Mesh LiftPlate { get; }
	public static Mesh LiftPost { get; }
	public static Mesh LaneRail { get; }
	public static Mesh BoomArm { get; }
	public static Mesh BoomPost { get; }
	public static Mesh ChainLink { get; }
	public static Mesh SirenBar { get; }
	public static Mesh Ladder { get; }
	public static Mesh ShiftBadge { get; }

	// Methods

	// RVA: 0x23DCA7C Offset: 0x23D8A7C VA: 0x23DCA7C
	public static Color Symbol(int s) { }

	// RVA: 0x23DCAE0 Offset: 0x23D8AE0 VA: 0x23DCAE0
	public static Material get_Material() { }

	// RVA: 0x23DCCC8 Offset: 0x23D8CC8 VA: 0x23DCCC8
	private static Mesh Cached(string key, Action<PropKit.MeshBuilder> build) { }

	// RVA: 0x23DD108 Offset: 0x23D9108 VA: 0x23DD108
	public static MeshRenderer Spawn(Transform parent, Mesh mesh, string name) { }

	// RVA: 0x23D54C8 Offset: 0x23D14C8 VA: 0x23D54C8
	public static void SetLook(Renderer r, Color tint, Color glow) { }

	// RVA: 0x23DD398 Offset: 0x23D9398 VA: 0x23DD398
	public static Mesh get_Cone() { }

	// RVA: 0x23DD4B0 Offset: 0x23D94B0 VA: 0x23DD4B0
	public static Mesh get_FencePanel() { }

	// RVA: 0x23DD5C8 Offset: 0x23D95C8 VA: 0x23DD5C8
	public static Mesh get_Planter() { }

	// RVA: 0x23DD6E0 Offset: 0x23D96E0 VA: 0x23DD6E0
	public static Mesh Padlock(int symbol) { }

	// RVA: 0x23DD804 Offset: 0x23D9804 VA: 0x23DD804
	public static Mesh Key(int symbol) { }

	// RVA: 0x23DD928 Offset: 0x23D9928 VA: 0x23DD928
	public static Mesh get_FuelPump() { }

	// RVA: 0x23DDA40 Offset: 0x23D9A40 VA: 0x23DDA40
	public static Mesh Gate(Color c) { }

	// RVA: 0x23DDB8C Offset: 0x23D9B8C VA: 0x23DDB8C
	public static Mesh get_LiftPlate() { }

	// RVA: 0x23DDCA4 Offset: 0x23D9CA4 VA: 0x23DDCA4
	public static Mesh get_LiftPost() { }

	// RVA: 0x23DDDBC Offset: 0x23D9DBC VA: 0x23DDDBC
	public static Mesh get_LaneRail() { }

	// RVA: 0x23DDED4 Offset: 0x23D9ED4 VA: 0x23DDED4
	public static Mesh get_BoomArm() { }

	// RVA: 0x23DDFEC Offset: 0x23D9FEC VA: 0x23DDFEC
	public static Mesh get_BoomPost() { }

	// RVA: 0x23DE104 Offset: 0x23DA104 VA: 0x23DE104
	public static Mesh get_ChainLink() { }

	// RVA: 0x23DE21C Offset: 0x23DA21C VA: 0x23DE21C
	public static Mesh get_SirenBar() { }

	// RVA: 0x23DE334 Offset: 0x23DA334 VA: 0x23DE334
	public static Mesh get_Ladder() { }

	// RVA: 0x23DE44C Offset: 0x23DA44C VA: 0x23DE44C
	public static Mesh get_ShiftBadge() { }

	// RVA: 0x23DE564 Offset: 0x23DA564 VA: 0x23DE564
	private static Vector3 Arc(float r, float deg) { }

	// RVA: 0x23DE5B4 Offset: 0x23DA5B4 VA: 0x23DE5B4
	private static Vector3 Tangent(float deg) { }

	// RVA: 0x23DE5E4 Offset: 0x23DA5E4 VA: 0x23DE5E4
	private static void .cctor() { }
}

