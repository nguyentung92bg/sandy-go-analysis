/* IL2CPP: Dino.BusSand.View.GrainParticles$$Jitter
UnityEngine_Color32_o Dino_BusSand_View_GrainParticles__Jitter (UnityEngine_Color32_o c, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$Jitter
   UnityEngine_Color32_o Dino_BusSand_View_GrainParticles__Jitter (UnityEngine_Color32_o c, float
   amount, const MethodInfo* method); */

uint Dino_BusSand_View_GrainParticles__Jitter_23b5928(float param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  
  uVar2 = (uint)((ulong)param_2 >> 0x10);
  uVar5 = CONCAT44((int)param_2,(int)((ulong)param_2 >> 8));
  uVar1 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  if ((uVar1 & 1) == 0) {
    fVar3 = (float)UnityEngine_Random__Range_43b64a8(-param_1,param_1,0);
    fVar3 = fVar3 + 1.0;
    uVar8 = NEON_ucvtf(uVar5 & 0xff000000ff,4);
    fVar6 = (float)uVar8 * fVar3;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * fVar3;
    fVar3 = fVar3 * (float)(uVar2 & 0xff);
    uVar1 = CONCAT44(fVar9,fVar6) ^
            (CONCAT44(fVar9,fVar6) ^ 0x437f0000437f0000) &
            CONCAT44(-(uint)(255.0 < fVar9),-(uint)(255.0 < fVar6));
    iVar7 = -(uint)(fVar6 < 0.0);
    iVar10 = -(uint)(fVar9 < 0.0);
    fVar6 = 255.0;
    if (fVar3 <= 255.0) {
      fVar6 = fVar3;
    }
    fVar4 = (float)CONCAT13((byte)(uVar1 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                            CONCAT12((byte)(uVar1 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                     CONCAT11((byte)(uVar1 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                              (byte)uVar1 & ~(byte)iVar7)));
    fVar9 = 0.0;
    if (0.0 <= fVar3) {
      fVar9 = fVar6;
    }
    uVar5 = CONCAT44((int)(float)(CONCAT17((byte)(uVar1 >> 0x38) & ~(byte)((uint)iVar10 >> 0x18),
                                           CONCAT16((byte)(uVar1 >> 0x30) &
                                                    ~(byte)((uint)iVar10 >> 0x10),
                                                    CONCAT15((byte)(uVar1 >> 0x28) &
                                                             ~(byte)((uint)iVar10 >> 8),
                                                             CONCAT14((byte)(uVar1 >> 0x20) &
                                                                      ~(byte)iVar10,fVar4)))) >>
                                 0x20),(int)fVar4);
    uVar2 = (uint)fVar9;
    iVar7 = 0xff;
  }
  else {
    iVar7 = (int)((ulong)param_2 >> 0x18);
  }
  return iVar7 << 0x18 | (uVar2 & 0xff) << 0x10 | ((uint)uVar5 & 0xff) << 8 |
         (uint)(uVar5 >> 0x20) & 0xff;
}

