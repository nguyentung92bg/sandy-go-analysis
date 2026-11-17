// Namespace: Dino.BusSand.View
public sealed class StageLayout // TypeDefIndex: 8501
{
	// Fields
	public const float LoopStraightHalf = 7.55;
	public const float LoopCornerRadius = 1.2;
	public const float LotTopZ = 10.8;
	public const float LotHalfWidth = 20;
	public static float Pitch; // 0x0
	public const float FrameBarFrac = 0.075;
	public const float PadMarginCells = 0.4;
	public const float LaneCells = 2.15;
	public const float KerbCells = 0.5;
	public const float OrthoSize = 8.8;
	public float Aspect; // 0x10
	public Vector3 CameraPos; // 0x14
	public Quaternion CameraRot; // 0x20
	public float FovDeg; // 0x30
	public Vector3 CamForward; // 0x34
	public Vector3 CamUp; // 0x40
	public float ScreenMinX; // 0x4C
	public float ScreenMaxX; // 0x50
	public float ScreenMinZ; // 0x54
	public float ScreenMaxZ; // 0x58
	public float GW; // 0x5C
	public float Cell; // 0x60
	public float BoardW; // 0x64
	public float BoardH; // 0x68
	public float Frame; // 0x6C
	public float GWX; // 0x70
	public const float MaxGrainStretch = 1.06;
	public Vector3 BoardOrigin; // 0x74
	public Vector3 BoardUp; // 0x80
	public Vector3 BoardNormal; // 0x8C
	public Vector3 BoardRight; // 0x98
	public Quaternion BoardRotation; // 0xA4
	public float RoadGW; // 0xB4
	public float RoadScale; // 0xB8
	public float T; // 0xBC
	public float RoadTileTopZ; // 0xC0
	public float RoadZ; // 0xC4
	public float BottomLaneZ; // 0xC8
	public float LaneWidth; // 0xCC
	public float CornerBulge; // 0xD0
	public float RoadLeftX; // 0xD4
	public float RoadRightX; // 0xD8
	public int SideMarginGrains; // 0xDC
	public int EntryRunGrains; // 0xE0
	public int ExitRunGrains; // 0xE4
	public int StraightGrains; // 0xE8
	public int CornerGrains; // 0xEC
	public float CounterZ; // 0xF0
	public float YardTopZ; // 0xF4
	public float YardBottomZ; // 0xF8
	public float YardCell; // 0xFC
	public float YardCellMax; // 0x100
	public float SpawnZ; // 0x104
	public Vector3 YardCenter; // 0x108
	public int Rows; // 0x114
	public int Cols; // 0x118
	private static ArtPackData _defaults; // 0x8
	public float ReturnSpeedMultiplier; // 0x11C
	private const int RetSamplesPerGrain = 4;
	private Vector3[] _retPos; // 0x120
	private float[] _retYaw; // 0x128
	private float[] _retLen; // 0x130
	private float[] _retMap; // 0x138
	private int _retVersion; // 0x140

	// Properties
	private static RoadLoopConfig Loop { get; }
	public static float SideLaneX { get; }
	public static float EntryRadius { get; }
	public static float SideTurnRadius { get; }
	public static float VehicleAxleHalf { get; }
	public float SideTurnZ { get; }
	public float LoopBackZ { get; }
	public float LaneWorld { get; }
	private float TanV { get; }
	private static ArtPackData Pack { get; }
	public static Quaternion FacingRotation { get; }
	public Vector3 CameraPosition { get; }

	// Methods

	// RVA: 0x23E6B44 Offset: 0x23E2B44 VA: 0x23E6B44
	private static RoadLoopConfig get_Loop() { }

	// RVA: 0x23E6B48 Offset: 0x23E2B48 VA: 0x23E6B48
	public static float get_SideLaneX() { }

	// RVA: 0x23E6BB0 Offset: 0x23E2BB0 VA: 0x23E6BB0
	public static float get_EntryRadius() { }

	// RVA: 0x23E6C3C Offset: 0x23E2C3C VA: 0x23E6C3C
	public static float get_SideTurnRadius() { }

	// RVA: 0x23E6CC4 Offset: 0x23E2CC4 VA: 0x23E6CC4
	public static float get_VehicleAxleHalf() { }

	// RVA: 0x23E6D2C Offset: 0x23E2D2C VA: 0x23E6D2C
	public float get_SideTurnZ() { }

	// RVA: 0x23E6DA8 Offset: 0x23E2DA8 VA: 0x23E6DA8
	public float get_LoopBackZ() { }

	// RVA: 0x23E6E14 Offset: 0x23E2E14 VA: 0x23E6E14
	public float get_LaneWorld() { }

	// RVA: 0x23E6E28 Offset: 0x23E2E28 VA: 0x23E6E28
	public static float AspectOf(Camera cam) { }

	// RVA: 0x23E6EE4 Offset: 0x23E2EE4 VA: 0x23E6EE4
	private float get_TanV() { }

	// RVA: 0x23E6F00 Offset: 0x23E2F00 VA: 0x23E6F00
	public float Depth(Vector3 p) { }

	// RVA: 0x23E6F34 Offset: 0x23E2F34 VA: 0x23E6F34
	public float HalfWidthAt(float z) { }

	// RVA: 0x23E6FA8 Offset: 0x23E2FA8 VA: 0x23E6FA8
	public float GroundZAt(float sy) { }

	// RVA: 0x23E7030 Offset: 0x23E3030 VA: 0x23E7030
	private static ArtPackData get_Pack() { }

	// RVA: 0x23E7174 Offset: 0x23E3174 VA: 0x23E7174
	public static StageLayout Compute(float aspect, LevelData level, float topReservePx = 0.125, float bottomReservePx = 0.135) { }

	// RVA: 0x23E7900 Offset: 0x23E3900 VA: 0x23E7900
	public void CenterYardOn(LevelData level) { }

	// RVA: 0x23E8904 Offset: 0x23E4904 VA: 0x23E8904
	public Vector3 YardToWorld(double cx, double cz) { }

	// RVA: 0x23E8950 Offset: 0x23E4950 VA: 0x23E8950
	public static Quaternion YardRotation(int angleIndex) { }

	// RVA: 0x23E8978 Offset: 0x23E4978 VA: 0x23E8978
	public Vector3 GrainToWorld(float gx, float gy) { }

	// RVA: 0x23E89D4 Offset: 0x23E49D4 VA: 0x23E89D4
	public Vector3 BoardPoint(float fx, float fy, float lift = 0) { }

	// RVA: 0x23E8A38 Offset: 0x23E4A38 VA: 0x23E8A38
	public static Quaternion get_FacingRotation() { }

	// RVA: 0x23E8AA8 Offset: 0x23E4AA8 VA: 0x23E8AA8
	public float RoadToWorldX(double s) { }

	// RVA: 0x23E8AC0 Offset: 0x23E4AC0 VA: 0x23E8AC0
	public bool BehindFrame(Vector3 p) { }

	// RVA: 0x23E8AEC Offset: 0x23E4AEC VA: 0x23E8AEC
	public void RoadPose(double s, out Vector3 pos, out float yaw) { }

	// RVA: 0x23E4FCC Offset: 0x23E0FCC VA: 0x23E4FCC
	public void ReturnPoseAt(float u, out Vector3 pos, out float yaw) { }

	// RVA: 0x23E4E84 Offset: 0x23E0E84 VA: 0x23E4E84
	public void ReturnLengths(out float total, out float corner) { }

	// RVA: 0x23E4E18 Offset: 0x23E0E18 VA: 0x23E4E18
	public Vector3[] ReturnPathPoints() { }

	// RVA: 0x23E9634 Offset: 0x23E5634 VA: 0x23E9634
	public void VehiclePose(double s, out Vector3 pos, out float yaw) { }

	// RVA: 0x23E9498 Offset: 0x23E5498 VA: 0x23E9498
	private void SampleReturn(float u, out Vector3 pos, out float yaw) { }

	// RVA: 0x23E97F0 Offset: 0x23E57F0 VA: 0x23E97F0
	private Vector3 ReturnPoint(float u) { }

	// RVA: 0x23E99E0 Offset: 0x23E59E0 VA: 0x23E99E0
	private static float YawOf(Vector3 d) { }

	// RVA: 0x23E8C48 Offset: 0x23E4C48 VA: 0x23E8C48
	private void BuildReturnPath() { }

	// RVA: 0x23E97C0 Offset: 0x23E57C0 VA: 0x23E97C0
	private static float Smooth(float x) { }

	// RVA: 0x23E5098 Offset: 0x23E1098 VA: 0x23E5098
	public static Quaternion RoadRotation(float yaw) { }

	// RVA: 0x23E9E44 Offset: 0x23E5E44 VA: 0x23E9E44
	public Vector3 get_CameraPosition() { }

	// RVA: 0x23E78E8 Offset: 0x23E38E8 VA: 0x23E78E8
	public void .ctor() { }

	// RVA: 0x23E9E50 Offset: 0x23E5E50 VA: 0x23E9E50
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x23E8654 Offset: 0x23E4654 VA: 0x23E8654
	internal static void <CenterYardOn>g__Acc|82_0(double cx, double cz, int a, BusKind k, ref StageLayout.<>c__DisplayClass82_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E87A0 Offset: 0x23E47A0 VA: 0x23E87A0
	internal static void <CenterYardOn>g__Box|82_1(double cx, double cz, int a, double len, double wid, ref StageLayout.<>c__DisplayClass82_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E9B8C Offset: 0x23E5B8C VA: 0x23E9B8C
	internal static void <BuildReturnPath>g__Arc|106_0(Vector3 c, float r, float a0, float a1, int seg, ref StageLayout.<>c__DisplayClass106_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E9A0C Offset: 0x23E5A0C VA: 0x23E9A0C
	internal static void <BuildReturnPath>g__Line|106_1(Vector3 to, int seg, ref StageLayout.<>c__DisplayClass106_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E9D0C Offset: 0x23E5D0C VA: 0x23E9D0C
	internal static float <BuildReturnPath>g__TauOf|106_2(float kGrains, ref StageLayout.<>c__DisplayClass106_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23E9D5C Offset: 0x23E5D5C VA: 0x23E9D5C
	internal static float <BuildReturnPath>g__W|106_3(float tau, ref StageLayout.<>c__DisplayClass106_0 ) { }
}

