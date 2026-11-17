// Namespace: Dino.BusSand.View
[CreateAssetMenu(fileName = "RoadLoop", menuName = "Bus Sand/Road Loop Config")]
public sealed class RoadLoopConfig : ScriptableObject // TypeDefIndex: 8496
{
	// Fields
	[Header("Side lanes (left side mirrors the right)")]
	[Tooltip("x of the two side lanes (world units). The middle of the curved road is about 9.6 - 9.8; bigger = closer to the outer kerb rail, smaller = closer to the frame plinth.")]
	[Range(8.5, 11)]
	public float sideLaneX; // 0x18
	[Tooltip("Radius of the turn from the straight under the frame up into the side lane (bigger = wider, softer turn). At most SideLaneX - 7.55 (the straight ends at x = 7.55).")]
	[Range(0.5, 3)]
	public float entryRadius; // 0x1C
	[Header("Turn behind the frame")]
	[Tooltip("z where the side lane starts turning in behind the frame (bigger = later turn, closer to the top rail).")]
	[Range(13.5, 17.5)]
	public float sideTurnZ; // 0x20
	[Tooltip("Radius of the turn behind the frame. The lane behind the frame lies at z = SideTurnZ + this (keep it below ~17.3: the rail behind the frame is at z 18.4).")]
	[Range(0.5, 4)]
	public float sideTurnRadius; // 0x24
	[Header("Vehicle body on the curve")]
	[Tooltip("Half the distance between the front and rear axle points that ride the path (world units). 0 = the body pivots on its centre (the tail swings out in corners); ~1.4 = like a real bus, the tail follows.")]
	[Range(0, 2.5)]
	public float vehicleAxleHalf; // 0x28
	[Header("Tuning aids (Play mode)")]
	[Tooltip("Draw the loop path on the road (yellow line).")]
	public bool showPath; // 0x2C
	[Tooltip("Put a preview vehicle on both corners (mirrored) to check it against the kerb rails and the frame.")]
	public bool showPreviewVehicles; // 0x2D
	[Tooltip("Which vehicle the preview shows.")]
	public BusKind previewKind; // 0x30
	[Tooltip("Where on the corner the preview stands: 0 = end of the straight under the frame, 1 = in the lane behind the frame.")]
	[Range(0, 1)]
	public float previewPosition; // 0x34
	[Tooltip("Let the preview drive the corner back and forth instead of standing at Preview Position.")]
	public bool previewDrive; // 0x38
	[CompilerGenerated]
	private static int <Version>k__BackingField; // 0x0
	private static RoadLoopConfig _active; // 0x8
	private static RoadLoopConfig _defaults; // 0x10

	// Properties
	public float BackLaneZ { get; }
	public static int Version { get; set; }
	public static RoadLoopConfig Active { get; }

	// Methods

	// RVA: 0x23E3FA0 Offset: 0x23DFFA0 VA: 0x23E3FA0
	public float get_BackLaneZ() { }

	[CompilerGenerated]
	// RVA: 0x23E3FAC Offset: 0x23DFFAC VA: 0x23E3FAC
	public static int get_Version() { }

	[CompilerGenerated]
	// RVA: 0x23E3FF4 Offset: 0x23DFFF4 VA: 0x23E3FF4
	private static void set_Version(int value) { }

	// RVA: 0x23E4040 Offset: 0x23E0040 VA: 0x23E4040
	public static RoadLoopConfig get_Active() { }

	// RVA: 0x23E41D8 Offset: 0x23E01D8 VA: 0x23E41D8
	public void MarkChanged() { }

	// RVA: 0x23E424C Offset: 0x23E024C VA: 0x23E424C
	private void OnValidate() { }

	// RVA: 0x23E42C0 Offset: 0x23E02C0 VA: 0x23E42C0
	private void OnEnable() { }

	// RVA: 0x23E4334 Offset: 0x23E0334 VA: 0x23E4334
	public void .ctor() { }
}

